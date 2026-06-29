
// TODO 获取指定UObject 并调用函数

// 结构体

struct FUObjectArray
{
    int32_t ObjFirstGCIndex;
    int32_t ObjLastNonGCIndex;
    int32_t MaxObjectsNotConsideredByGC;
    int32_t OpenForDisregardForGC;
    uintptr_t ObjObjects;
};



struct FUObjectItem
{
    uintptr_t Object;
    int32_t Flags;
    int32_t ClusterIndex;
    int32_t SerialNumber;
};

#include <unordered_map>
#include <set>
#include <string>
unordered_map < int, std::string > ClassCache;
uintptr_t GName;
bool isStartWith(std::string str, std::string check)
{
    return (str.rfind(check, 0) == 0);
}

bool isEqual(std::string s1, std::string s2)
{
    return (s1 == s2);
}

bool isContain(std::string str, std::string check)
{
    size_t found = str.find(check);
    return (found != string::npos);
}

std::string getClassName(uintptr_t Objaddr)
{

    int oid = getdword(Objaddr + 0x18);

    if (ClassCache.find(oid) != ClassCache.end())
    {
        char Name[32] = "";
        uintptr_t ye = getPointer(GName + (oid / 0x4000) * 0x8);
        uintptr_t xu = getPointer(ye + (oid % 0x4000) * 0x8);

        vm_readv(xu + 0xC, &Name, 32);
        ClassCache[oid] = Name;
    }

    return ClassCache[oid];

}


// GUObject
FUObjectArray* UObjectArray = NULL;

// TODO 获取FUObjectItem
FUObjectItem* GetFUObjectItemByIndex(int32_t index){
    return (FUObjectItem*) (UObjectArray->ObjObjects + index * sizeof(FUObjectItem));
}

// TODO 获取FUObjectItem 名称
std::string GetFUObjectItemName(FUObjectItem* item){
    if(!item) return "None";
    return getClassName(item->Object);
}

// TODO 获取FUObjectItem ByName

FUObjectItem* GetFUObjectItemByName(std::string Name){
    static FUObjectItem* item = NULL;
    for(int i = 0; i < UObjectArray->ObjFirstGCIndex; i++){
        FUObjectItem* Item = GetFUObjectItemByIndex(i);
        if(isEqual(GetFUObjectItemName(Item), Name)){
            item = Item;
            break;
        }
    }
    return item;
}


struct UFunction 
{

    int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    unsigned char                                      UnknownData0x00c[0xC];                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
    void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

    

};

template<typename Fn>
inline Fn GetVFunction(void *thiz, int idx)
{
    auto VTable = *reinterpret_cast<void***>(const_cast<void*>(thiz));
    return (Fn)(VTable[idx]);
}

void ProcessEvent(void* uobject, void* function, void* parms)
{
    return GetVFunction<void(*)(void*, void*, void*)>(uobject, 83)(uobject, function, parms);
}


// Function Engine.Controller.LineOfSightTo
struct AController_LineOfSightTo_Params
{
    void*                                              Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
    D3DVector                                     ViewPoint;                                                // (Parm, IsPlainOldData)
    bool                                               bAlternateChecks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
    bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};


bool LineOfSightTo(FUObjectItem* pItem, void* thiz, void* Other, const D3DVector ViewPoint, bool bAlternateChecks)
{
    
    if(!pItem) return true;
    
    UFunction* pFunc =(UFunction*) (pItem->Object);
    if(!pFunc || !thiz || !Other) return true;
    
    AController_LineOfSightTo_Params params;
    params.Other = Other;
    params.ViewPoint = ViewPoint;
    params.bAlternateChecks = bAlternateChecks;

    auto flags = pFunc->FunctionFlags;
    //pFunc->FunctionFlags |= 0x400;

    void *currentObj = thiz;
    ProcessEvent(thiz, pFunc, &params);

    pFunc->FunctionFlags = flags;

    return params.ReturnValue;
}
