LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := guestloginhook
LOCAL_SRC_FILES := GuestLoginHookLib.cpp fake_dlfcn.cpp MapsGameLibsDump.cpp Ue4PatternFinder.cpp
LOCAL_CPPFLAGS := -std=c++17 -fvisibility=hidden
LOCAL_LDLIBS := -llog -ldl
include $(BUILD_SHARED_LIBRARY)
