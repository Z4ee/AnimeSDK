#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_REFLECTION_PARAMETERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x3B918C0)

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterModifier_TypeDefinitionIndex = 583;

	struct alignas(8) ParameterModifier
	{
		::Il2CppArray<::System::Boolean>* _byRef; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERMODIFIER__CTOR_OFFSET))(this, a1);
		}
	};
}
