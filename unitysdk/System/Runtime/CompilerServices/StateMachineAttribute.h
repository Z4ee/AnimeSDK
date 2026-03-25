#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_SET_STATEMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x16392840)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163918F0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StateMachineAttribute_TypeDefinitionIndex = 1357;

	class StateMachineAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _StateMachineType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* stateMachineType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE__CTOR_OFFSET))(this, stateMachineType);
		}

		::System::Void set_StateMachineType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_SET_STATEMACHINETYPE_OFFSET))(this, value);
		}
	};
}
