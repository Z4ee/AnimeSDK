#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_XR_EYES_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA79E80)
#define UNITYENGINE_XR_EYES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA79EC0)
#define UNITYENGINE_XR_EYES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA79EA0)
#define UNITYENGINE_XR_EYES_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_XR_EYES_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0x2C19D0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Eyes_TypeDefinitionIndex = 27645;

	struct alignas(8) Eyes
	{
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GET_DEVICEID_OFFSET))(this);
		}

		::System::UInt32 get_featureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GET_FEATUREINDEX_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::Eyes other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::Eyes))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_EYES_GETHASHCODE_OFFSET))(this);
		}
	};
}
