#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xB99C8F0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_TypeDefinitionIndex = 43867;

	class RefSafetyRulesAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
