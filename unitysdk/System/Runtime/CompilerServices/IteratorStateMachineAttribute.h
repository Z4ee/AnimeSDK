#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/StateMachineAttribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEF10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IteratorStateMachineAttribute_TypeDefinitionIndex = 1356;

	class IteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute
	{
	public:
		::System::Void _ctor(::System::Type* stateMachineType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET))(this, stateMachineType);
		}
	};
}
