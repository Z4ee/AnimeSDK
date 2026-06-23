#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC20EE0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1EB30)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC21260)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_CameraControllPointer_TypeDefinitionIndex = 65763;

	class UIImgEventTrigger_CameraControllPointer : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 offsetPoint; // 0x10
		::UnityEngine::Vector2 dragingPoint; // 0x18
		::UnityEngine::Vector2 enterPoint; // 0x20
		::System::Int32 pointerId; // 0x28
		::UnityEngine::Vector2 beforeDragingPoint; // 0x2C
		::System::Boolean isDrag; // 0x34
		::System::Boolean isValid; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
