#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_METADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D121E30)

namespace UnityEngine::Profiling::Memory::Experimental
{
	inline static constexpr unsigned int MetaData_TypeDefinitionIndex = 4507;

	class MetaData : public ::System::Object
	{
	public:
		::System::String* content; // 0x10
		::System::String* platform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_METADATA__CTOR_OFFSET))(this);
		}
	};
}
