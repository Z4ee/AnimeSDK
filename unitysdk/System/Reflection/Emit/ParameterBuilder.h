#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_REFLECTION_EMIT_PARAMETERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E11B70)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ParameterBuilder_TypeDefinitionIndex = 624;

	class ParameterBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PARAMETERBUILDER__CTOR_OFFSET))(this);
		}
	};
}
