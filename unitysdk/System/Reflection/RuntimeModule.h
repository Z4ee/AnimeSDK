#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"

#define SYSTEM_REFLECTION_RUNTIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9EDB0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeModule_TypeDefinitionIndex = 625;

	class RuntimeModule : public ::System::Reflection::Module
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE__CTOR_OFFSET))(this);
		}
	};
}
