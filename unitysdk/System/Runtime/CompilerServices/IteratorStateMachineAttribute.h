#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/StateMachineAttribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16392360)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IteratorStateMachineAttribute_TypeDefinitionIndex = 1354;

	class IteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute
	{
	public:
		::System::Void _ctor(::System::Type* stateMachineType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET))(this, stateMachineType);
		}
	};
}
