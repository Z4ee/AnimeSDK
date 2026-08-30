#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_STRINGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x860DE0)
#define UNITYENGINE_STRINGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C8BA00)
#define UNITYENGINE_STRINGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_STRINGID_INTERNAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE9C8C0)
#define UNITYENGINE_STRINGID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C8B9F0)

namespace UnityEngine
{
	inline static constexpr unsigned int StringID_TypeDefinitionIndex = 5723;

	struct alignas(4) StringID
	{
		::System::UInt32 _hash; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGID_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::StringID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::StringID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGID_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* Internal_ToString(::UnityEngine::StringID& a1)
		{
			return ((::System::String*(*)(::UnityEngine::StringID&))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGID_INTERNAL_TOSTRING_OFFSET))(a1);
		}
	};
}
