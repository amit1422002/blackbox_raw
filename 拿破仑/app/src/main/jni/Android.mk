LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := Engine
LOCAL_SRC_FILES := \
    Main/Entry.cpp \
    Render/AImGui.cpp \
    Render/ImGui/imgui.cpp \
    Render/ImGui/imgui_demo.cpp \
    Render/ImGui/imgui_draw.cpp \
    Render/ImGui/imgui_widgets.cpp \
    Render/ImGui/imgui_tables.cpp \
    Render/ImGui/backends/imgui_impl_android.cpp \
    Render/ImGui/backends/imgui_impl_opengl3.cpp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH) \
    $(LOCAL_PATH)/Header \
    $(LOCAL_PATH)/Render/ImGui \
    $(LOCAL_PATH)/Render/ImGui/backends

LOCAL_CPPFLAGS := \
    -std=c++17 \
    -fno-rtti \
    -fno-exceptions \
    -fvisibility=hidden

LOCAL_LDFLAGS := -s

LOCAL_LDLIBS := \
    -llog \
    -landroid \
    -lEGL \
    -lGLESv3 \
    -ldl

LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)
