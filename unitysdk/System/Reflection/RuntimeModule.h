#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"

#define SYSTEM_REFLECTION_RUNTIMEMODULE_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1A7C1A30)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeModule_TypeDefinitionIndex = 596;

	class RuntimeModule : public ::System::Reflection::Module
	{
	public:
		::System::Void Method_2_F8C7231308CD2C82()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
		}
	};
}
