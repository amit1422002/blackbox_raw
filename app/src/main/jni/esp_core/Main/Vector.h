#define PI 3.141592653589793238

float matrix[50] = { 0 }, camera, r_x, r_y, r_w;


struct Fevcror//写法不一样改的就不一样老自瞄是YX自瞄的
{
    float Y;
    float X;
	float Roll;

};

struct Rotator//子弹追踪的
{
	float X;
	float Y;
	float Z;
};

struct D3DXVECTOR4
{
	float X;
	float Y;
	float Z;
	float W;
};

struct D3DVector
{
    float X;
    float Y;
    float Z;

    D3DVector()
    {
        this->X = 0;
        this->Y = 0;
        this->Z = 0;
    }

    D3DVector(float x, float y, float z)
    {
        this->X = x;
        this->Y = y;
        this->Z = z;
    }
};

#include "UE4_Core.h"
FUObjectItem* LineOfSightToItem = NULL;
uintptr_t PlayerCamera, PlayerController;

struct FTransform
{
	D3DXVECTOR4 Rotation;
	D3DVector Translation;
	D3DVector Scale3D;
};

struct D3DXMATRIX
{
	float _11;
	float _12;
	float _13;
	float _14;
	float _21;
	float _22;
	float _23;
	float _24;
	float _31;
	float _32;
	float _33;
	float _34;
	float _41;
	float _42;
	float _43;
	float _44;
};

struct D2DVector
{
	float X;
	float Y;
};

float get2dDistance(float x, float y, float x1, float y1)
{
	float xx1 = x - x1;
	float yy2 = y - y1;
	// 取平方根
	return sqrt(xx1 * xx1 + yy2 * yy2);
}

float get_3D_Distance(float Self_x, float Self_y, float Self_z, float Object_x, float Object_y,
					  float Object_z)
{
	float x, y, z;
	x = Self_x - Object_x;
	y = Self_y - Object_y;
	z = Self_z - Object_z;
	// 求平方根
	return (float)(sqrt(x * x + y * y + z * z));
}

float GetD2DDistance(D3DVector ObjectPos, D3DVector uMyobjectPos)
{
    float x = ObjectPos.X - uMyobjectPos.X;
    float y = ObjectPos.Y - uMyobjectPos.Y;
    float z = ObjectPos.Z - uMyobjectPos.Z;
    float res = sqrt(x * x + y * y + z * z);
    return res;
}

FTransform ReadFTransform(long location);
D3DXMATRIX ToMatrixWithScale(D3DXVECTOR4 Rotation, D3DVector Translation, D3DVector Scale3D);
D3DXMATRIX D3DXMatrixMultiply(D3DXMATRIX Pm1, D3DXMATRIX Pm2);
D2DVector rotateCoogetDword(float angle, float objectRadar_x, float objectRadar_y);
D3DVector D3dMatrixMultiply(D3DXMATRIX bonematrix, D3DXMATRIX actormatrix);
D3DVector getBoneXYZ(long humanAddr, long boneAddr, int Part);
D2DVector getBoneCoordinate(long humanAddr, long boneAddr, int Part);


D2DVector getPointingAngle(float object_x,
						   float object_y, float object_z, float Self_x, float Self_y,
						   float Self_z)
{
	D2DVector PointingAngle;
	float zbcx = object_x - Self_x;
	float zbcy = object_y - Self_y;
	float zbcz = object_z - Self_z;
	PointingAngle.X = atan2(zbcy, zbcx) * 180 / PI;
	PointingAngle.Y = atan2(zbcz, sqrt(zbcx * zbcx + zbcy * zbcy)) * 180 / PI;
	return PointingAngle;
}



		// 获取骨骼2d
D2DVector getBoneCoordinate(long humanAddr, long boneAddr, int Part)
{
	D2DVector result;
	// 获取Bone数据
	FTransform Bone = ReadFTransform(boneAddr + Part * 48);
	// 获取Actor数据
	FTransform Actor = ReadFTransform(humanAddr);
	D3DXMATRIX Bone_Matrix = ToMatrixWithScale(Bone.Rotation, Bone.Translation, Bone.Scale3D);
	D3DXMATRIX Component_ToWorld_Matrix =
		ToMatrixWithScale(Actor.Rotation, Actor.Translation, Actor.Scale3D);
	D3DXMATRIX New_Matrix = D3DXMatrixMultiply(Bone_Matrix, Component_ToWorld_Matrix);
	float ViewW =
		matrix[3] * New_Matrix._41 + matrix[7] * New_Matrix._42 + matrix[11] * New_Matrix._43 +
		matrix[15];
	if (ViewW >= 0.01)
	{
		ViewW = 1 / ViewW;
		result.X =
			Widtih*0.5*0.5 + (matrix[0] * New_Matrix._41 + matrix[4] * New_Matrix._42 +
				  matrix[8] * New_Matrix._43 + matrix[12]) * ViewW * Widtih*0.5*0.5;
		result.Y =
			Higtih*0.5*0.5 - (matrix[1] * New_Matrix._41 + matrix[5] * New_Matrix._42 +
				  matrix[9] * New_Matrix._43 + matrix[13]) * ViewW * Higtih*0.5*0.5;
	}
	return result;
}


D3DVector getBoneXYZ(long humanAddr, long boneAddr, int Part)
{
	// 获取Bone数据
	FTransform Bone = ReadFTransform(boneAddr + Part * 48);
	// 获取Actor数据
	FTransform Actor = ReadFTransform(humanAddr);
	D3DXMATRIX Bone_Matrix = ToMatrixWithScale(Bone.Rotation, Bone.Translation, Bone.Scale3D);
	D3DXMATRIX Component_ToWorld_Matrix =
		ToMatrixWithScale(Actor.Rotation, Actor.Translation, Actor.Scale3D);
	D3DVector result = D3dMatrixMultiply(Bone_Matrix, Component_ToWorld_Matrix);
	return result;
}

FTransform ReadFTransform(long address)
{
	FTransform Result;
	Result.Rotation.X = getfloat(address);	// Rotation_X 
	Result.Rotation.Y = getfloat(address + 4);	// Rotation_y
	Result.Rotation.Z = getfloat(address + 8);	// Rotation_z
	Result.Rotation.W = getfloat(address + 12);	// Rotation_w
	Result.Translation.X = getfloat(address + 16);	// /Translation_X
	Result.Translation.Y = getfloat(address + 20);	// Translation_y
	Result.Translation.Z = getfloat(address + 24);	// Translation_z
	Result.Scale3D.X = getfloat(address + 32);;	// Scale_X
	Result.Scale3D.Y = getfloat(address + 36);;	// Scale_y
	Result.Scale3D.Z = getfloat(address + 40);;	// Scale_z
	return Result;
}

		// 获取骨骼3d坐标
D3DVector D3dMatrixMultiply(D3DXMATRIX bonematrix, D3DXMATRIX actormatrix)
{
	D3DVector result;
	result.X =
		bonematrix._41 * actormatrix._11 + bonematrix._42 * actormatrix._21 +
		bonematrix._43 * actormatrix._31 + bonematrix._44 * actormatrix._41;
	result.Y =
		bonematrix._41 * actormatrix._12 + bonematrix._42 * actormatrix._22 +
		bonematrix._43 * actormatrix._32 + bonematrix._44 * actormatrix._42;
	result.Z =
		bonematrix._41 * actormatrix._13 + bonematrix._42 * actormatrix._23 +
		bonematrix._43 * actormatrix._33 + bonematrix._44 * actormatrix._43;
	return result;
}

// 计算旋转坐标
D2DVector rotateCoord(float angle, float objRadar_x, float objRadar_y)
{
    D2DVector radarCoordinate;
    float s = sin(angle * PI / 180);
    float c = cos(angle * PI / 180);
    radarCoordinate.X = objRadar_x * c + objRadar_y * s;
    radarCoordinate.Y = -objRadar_x * s + objRadar_y * c;
    return radarCoordinate;
}


D3DXMATRIX ToMatrixWithScale(D3DXVECTOR4 Rotation, D3DVector Translation, D3DVector Scale3D)
{
	D3DXMATRIX M;
	float X2, Y2, Z2, xX2, Yy2, Zz2, Zy2, Wx2, Xy2, Wz2, Zx2, Wy2;
	M._41 = Translation.X;
	M._42 = Translation.Y;
	M._43 = Translation.Z;
	X2 = Rotation.X + Rotation.X;
	Y2 = Rotation.Y + Rotation.Y;
	Z2 = Rotation.Z + Rotation.Z;
	xX2 = Rotation.X * X2;
	Yy2 = Rotation.Y * Y2;
	Zz2 = Rotation.Z * Z2;
	M._11 = (1 - (Yy2 + Zz2)) * Scale3D.X;
	M._22 = (1 - (xX2 + Zz2)) * Scale3D.Y;
	M._33 = (1 - (xX2 + Yy2)) * Scale3D.Z;
	Zy2 = Rotation.Y * Z2;
	Wx2 = Rotation.W * X2;
	M._32 = (Zy2 - Wx2) * Scale3D.Z;
	M._23 = (Zy2 + Wx2) * Scale3D.Y;
	Xy2 = Rotation.X * Y2;
	Wz2 = Rotation.W * Z2;
	M._21 = (Xy2 - Wz2) * Scale3D.Y;
	M._12 = (Xy2 + Wz2) * Scale3D.X;
	Zx2 = Rotation.X * Z2;
	Wy2 = Rotation.W * Y2;
	M._31 = (Zx2 + Wy2) * Scale3D.Z;
	M._13 = (Zx2 - Wy2) * Scale3D.X;
	M._14 = 0;
	M._24 = 0;
	M._34 = 0;
	M._44 = 1;
	return M;
}

D3DXMATRIX D3DXMatrixMultiply(D3DXMATRIX Pm1, D3DXMATRIX Pm2)
{
	D3DXMATRIX Pout;
	Pout._11 = Pm1._11 * Pm2._11 + Pm1._12 * Pm2._21 + Pm1._13 * Pm2._31 + Pm1._14 * Pm2._41;
	Pout._12 = Pm1._11 * Pm2._12 + Pm1._12 * Pm2._22 + Pm1._13 * Pm2._32 + Pm1._14 * Pm2._42;
	Pout._13 = Pm1._11 * Pm2._13 + Pm1._12 * Pm2._23 + Pm1._13 * Pm2._33 + Pm1._14 * Pm2._43;
	Pout._14 = Pm1._11 * Pm2._14 + Pm1._12 * Pm2._24 + Pm1._13 * Pm2._34 + Pm1._14 * Pm2._44;
	Pout._21 = Pm1._21 * Pm2._11 + Pm1._22 * Pm2._21 + Pm1._23 * Pm2._31 + Pm1._24 * Pm2._41;
	Pout._22 = Pm1._21 * Pm2._12 + Pm1._22 * Pm2._22 + Pm1._23 * Pm2._32 + Pm1._24 * Pm2._42;
	Pout._23 = Pm1._21 * Pm2._13 + Pm1._22 * Pm2._23 + Pm1._23 * Pm2._33 + Pm1._24 * Pm2._43;
	Pout._24 = Pm1._21 * Pm2._14 + Pm1._22 * Pm2._24 + Pm1._23 * Pm2._34 + Pm1._24 * Pm2._44;
	Pout._31 = Pm1._31 * Pm2._11 + Pm1._32 * Pm2._21 + Pm1._33 * Pm2._31 + Pm1._34 * Pm2._41;
	Pout._32 = Pm1._31 * Pm2._12 + Pm1._32 * Pm2._22 + Pm1._33 * Pm2._32 + Pm1._34 * Pm2._42;
	Pout._33 = Pm1._31 * Pm2._13 + Pm1._32 * Pm2._23 + Pm1._33 * Pm2._33 + Pm1._34 * Pm2._43;
	Pout._34 = Pm1._31 * Pm2._14 + Pm1._32 * Pm2._24 + Pm1._33 * Pm2._34 + Pm1._34 * Pm2._44;
	Pout._41 = Pm1._41 * Pm2._11 + Pm1._42 * Pm2._21 + Pm1._43 * Pm2._31 + Pm1._44 * Pm2._41;
	Pout._42 = Pm1._41 * Pm2._12 + Pm1._42 * Pm2._22 + Pm1._43 * Pm2._32 + Pm1._44 * Pm2._42;
	Pout._43 = Pm1._41 * Pm2._13 + Pm1._42 * Pm2._23 + Pm1._43 * Pm2._33 + Pm1._44 * Pm2._43;
	Pout._44 = Pm1._41 * Pm2._14 + Pm1._42 * Pm2._24 + Pm1._43 * Pm2._34 + Pm1._44 * Pm2._44;
	return Pout;
}


//子弹追踪
struct D3DXVECTOR44
{
	float X;
	float Y;
	float Z;
	float W;
};


struct FTransform1
{
	D3DXVECTOR44 Rotation;
	Rotator Translation;
	Rotator Scale3D;
};

struct D3DXMATRIX1
{
	float _11;
	float _12;
	float _13;
	float _14;
	float _21;
	float _22;
	float _23;
	float _24;
	float _31;
	float _32;
	float _33;
	float _34;
	float _41;
	float _42;
	float _43;
	float _44;
};

Fevcror aimRotatorzm;//hook自瞄

FTransform1 ReadFTransform1(uintptr_t address)
{
	FTransform1 Result;
	Result.Rotation.X = getfloat(address);	// Rotation_X 
	Result.Rotation.Y = getfloat(address + 4);	// Rotation_y
	Result.Rotation.Z = getfloat(address + 8);	// Rotation_z
	Result.Rotation.W = getfloat(address + 12);	// Rotation_w
	Result.Translation.X = getfloat(address + 16);	// /Translation_X
	Result.Translation.Y = getfloat(address + 20);	// Translation_y
	Result.Translation.Z = getfloat(address + 24);	// Translation_z
	Result.Scale3D.X = getfloat(address + 32);;	// Scale_X
	Result.Scale3D.Y = getfloat(address + 36);;	// Scale_y
	Result.Scale3D.Z = getfloat(address + 40);;	// Scale_z
	return Result;
}

Rotator D3dMatrixMultiply1(D3DXMATRIX1 bonematrix, D3DXMATRIX1 actormatrix)
{
	Rotator result;
	result.X =
		bonematrix._41 * actormatrix._11 + bonematrix._42 * actormatrix._21 +
		bonematrix._43 * actormatrix._31 + bonematrix._44 * actormatrix._41;
	result.Y =
		bonematrix._41 * actormatrix._12 + bonematrix._42 * actormatrix._22 +
		bonematrix._43 * actormatrix._32 + bonematrix._44 * actormatrix._42;
	result.Z =
		bonematrix._41 * actormatrix._13 + bonematrix._42 * actormatrix._23 +
		bonematrix._43 * actormatrix._33 + bonematrix._44 * actormatrix._43;
	return result;
}


D3DXMATRIX1 ToMatrixWithScale1(D3DXVECTOR44 Rotation, Rotator Translation, Rotator Scale3D)
{
	D3DXMATRIX1 M;
	float X2, Y2, Z2, xX2, Yy2, Zz2, Zy2, Wx2, Xy2, Wz2, Zx2, Wy2;
	M._41 = Translation.X;
	M._42 = Translation.Y;
	M._43 = Translation.Z;
	X2 = Rotation.X + Rotation.X;
	Y2 = Rotation.Y + Rotation.Y;
	Z2 = Rotation.Z + Rotation.Z;
	xX2 = Rotation.X * X2;
	Yy2 = Rotation.Y * Y2;
	Zz2 = Rotation.Z * Z2;
	M._11 = (1 - (Yy2 + Zz2)) * Scale3D.X;
	M._22 = (1 - (xX2 + Zz2)) * Scale3D.Y;
	M._33 = (1 - (xX2 + Yy2)) * Scale3D.Z;
	Zy2 = Rotation.Y * Z2;
	Wx2 = Rotation.W * X2;
	M._32 = (Zy2 - Wx2) * Scale3D.Z;
	M._23 = (Zy2 + Wx2) * Scale3D.Y;
	Xy2 = Rotation.X * Y2;
	Wz2 = Rotation.W * Z2;
	M._21 = (Xy2 - Wz2) * Scale3D.Y;
	M._12 = (Xy2 + Wz2) * Scale3D.X;
	Zx2 = Rotation.X * Z2;
	Wy2 = Rotation.W * Y2;
	M._31 = (Zx2 + Wy2) * Scale3D.Z;
	M._13 = (Zx2 - Wy2) * Scale3D.X;
	M._14 = 0;
	M._24 = 0;
	M._34 = 0;
	M._44 = 1;
	return M;
}




Rotator getBone(uintptr_t humanAddr, uintptr_t boneAddr, int Part)
{
	// 获取Bone数据
	FTransform1 Bone = ReadFTransform1(boneAddr + Part * 48);
	// 获取Actor数据
	FTransform1 Actor = ReadFTransform1(humanAddr);
	D3DXMATRIX1 Bone_Matrix = ToMatrixWithScale1(Bone.Rotation, Bone.Translation, Bone.Scale3D);
	D3DXMATRIX1 Component_ToWorld_Matrix =
		ToMatrixWithScale1(Actor.Rotation, Actor.Translation, Actor.Scale3D);
	Rotator result = D3dMatrixMultiply1(Bone_Matrix, Component_ToWorld_Matrix);
	return result;
}


Fevcror getPointingAngle(uintptr_t uMyObject, uintptr_t pBase, float object_x,float object_y, float object_z, float Self_x, float Self_y, float Self_z)
{
	Fevcror PointingAngle;

	float zbcx = object_x - Self_x;
	float zbcy = object_y - Self_y;
	float zbcz = object_z - Self_z;

   
	PointingAngle.X = atan2(zbcy, zbcx) * 180 / PI;
	PointingAngle.Y = atan2(zbcz, sqrt(zbcx * zbcx + zbcy * zbcy)) * 180 / PI;
	
	return PointingAngle;
  
}
struct BoneStruct {    
    D3DVector Pos; // 世界坐标 
	D2DVector ScreenPos; // 屏幕坐标
    bool CanSee; // 可见判断
};