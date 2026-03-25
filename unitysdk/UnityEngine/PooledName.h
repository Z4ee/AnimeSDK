#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/StringPoolHash.h"

namespace System { class String; }

#define UNITYENGINE_POOLEDNAME_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A2DEF0)
#define UNITYENGINE_POOLEDNAME_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x2114260)
#define UNITYENGINE_POOLEDNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2114260)
#define UNITYENGINE_POOLEDNAME_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A2DEC0)
#define UNITYENGINE_POOLEDNAME_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x2114250)
#define UNITYENGINE_POOLEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2114250)

namespace UnityEngine
{
	inline static constexpr unsigned int PooledName_TypeDefinitionIndex = 4155;

	struct alignas(4) PooledName
	{
		::UnityEngine::StringPoolHash hashValue; // 0x10
		::System::UInt32 numberInfo; // 0x14

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_TOSTRINGINTERNAL_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_GETHASHCODEINTERNAL_OFFSET))(this);
		}

		static ::System::String* ToStringInternal_Injected(::UnityEngine::PooledName& _unity_self)
		{
			return ((::System::String*(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_TOSTRINGINTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::PooledName& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::PooledName&))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLEDNAME_GETHASHCODEINTERNAL_INJECTED_OFFSET))(_unity_self);
		}
	};
}
