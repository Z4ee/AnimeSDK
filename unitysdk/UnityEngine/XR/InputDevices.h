#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/XR/ConnectionChangeType.h"
#include "unitysdk/UnityEngine/XR/InputDevice.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_XR_INPUTDEVICES_INVOKECONNECTIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E78E340)
#define UNITYENGINE_XR_INPUTDEVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78E3F0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDevices_TypeDefinitionIndex = 27647;

	class InputDevices : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::XR::InputDevice>** StaticGet_deviceConnected()
		{
			return (::System::Action_1<::UnityEngine::XR::InputDevice>**)Il2CppClass::FromTypeDefinitionIndex(InputDevices_TypeDefinitionIndex)->GetStaticField(0x226E0);
		}
		static ::System::Action_1<::UnityEngine::XR::InputDevice>** StaticGet_deviceDisconnected()
		{
			return (::System::Action_1<::UnityEngine::XR::InputDevice>**)Il2CppClass::FromTypeDefinitionIndex(InputDevices_TypeDefinitionIndex)->GetStaticField(0x226E8);
		}
		static ::System::Action_1<::UnityEngine::XR::InputDevice>** StaticGet_deviceConfigChanged()
		{
			return (::System::Action_1<::UnityEngine::XR::InputDevice>**)Il2CppClass::FromTypeDefinitionIndex(InputDevices_TypeDefinitionIndex)->GetStaticField(0x226F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void InvokeConnectionEvent(::System::UInt64 deviceId, ::UnityEngine::XR::ConnectionChangeType change)
		{
			return ((::System::Void(*)(::System::UInt64, ::UnityEngine::XR::ConnectionChangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICES_INVOKECONNECTIONEVENT_OFFSET))(deviceId, change);
		}
	};
}
