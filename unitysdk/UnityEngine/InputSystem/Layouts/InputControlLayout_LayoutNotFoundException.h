#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1DDEC070)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEC100)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DDEC190)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DDEC260)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DDEC2F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC080)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_LayoutNotFoundException_TypeDefinitionIndex = 31992;

	class InputControlLayout_LayoutNotFoundException : public ::System::Exception
	{
	public:
		::System::String* _layout_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, name, message);
		}

		::System::Void _ctor_2(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, name);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::String* get_layout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET))(this);
		}
	};
}
