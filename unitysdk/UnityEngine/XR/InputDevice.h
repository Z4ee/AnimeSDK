#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_XR_INPUTDEVICE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D84D0)
#define UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D8450)
#define UNITYENGINE_XR_INPUTDEVICE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D8500)
#define UNITYENGINE_XR_INPUTDEVICE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9D8430)
#define UNITYENGINE_XR_INPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8420)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 25158;

	struct alignas(8) InputDevice
	{
		::System::UInt64 m_DeviceId; // 0x10
		::System::Boolean m_Initialized; // 0x18

		::System::Void _ctor(::System::UInt64 deviceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE__CTOR_OFFSET))(this, deviceId);
		}

		::System::UInt64 get_deviceId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_GET_DEVICEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::InputDevice other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::InputDevice))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_GETHASHCODE_OFFSET))(this);
		}
	};
}
