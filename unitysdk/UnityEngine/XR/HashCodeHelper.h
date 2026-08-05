#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_XR_HASHCODEHELPER_COMBINE_OFFSET UNITYSDK_OFFSET(0x1FB66740)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int HashCodeHelper_TypeDefinitionIndex = 28258;

	class HashCodeHelper : public ::System::Object
	{
	public:
		static ::System::Int32 Combine(::System::Int32 hash1, ::System::Int32 hash2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HASHCODEHELPER_COMBINE_OFFSET))(hash1, hash2);
		}
	};
}
