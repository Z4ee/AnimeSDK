#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_GET_STATEMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1C456E10)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_SET_STATEMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1C456E20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C455EB0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StateMachineAttribute_TypeDefinitionIndex = 1368;

	class StateMachineAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _StateMachineType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_StateMachineType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_GET_STATEMACHINETYPE_OFFSET))(this);
		}

		::System::Void set_StateMachineType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_SET_STATEMACHINETYPE_OFFSET))(this, a1);
		}
	};
}
