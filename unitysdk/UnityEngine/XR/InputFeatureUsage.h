#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/XR/InputFeatureType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xACA6C0)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xACA640)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xACA710)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_INTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x259D70)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputFeatureUsage_TypeDefinitionIndex = 28244;

	struct alignas(8) InputFeatureUsage
	{
		::System::String* m_Name; // 0x10
		::UnityEngine::XR::InputFeatureType m_InternalType; // 0x18

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::XR::InputFeatureType get_internalType()
		{
			return ((::UnityEngine::XR::InputFeatureType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_INTERNALTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::InputFeatureUsage other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::InputFeatureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
