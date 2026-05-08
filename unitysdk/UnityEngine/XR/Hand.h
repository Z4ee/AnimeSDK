#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_XR_HAND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D8320)
#define UNITYENGINE_XR_HAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D83C0)
#define UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D8340)
#define UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0x2F0420)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Hand_TypeDefinitionIndex = 25159;

	struct alignas(8) Hand
	{
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET))(this);
		}

		::System::UInt32 get_featureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::Hand other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::Hand))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET))(this);
		}
	};
}
