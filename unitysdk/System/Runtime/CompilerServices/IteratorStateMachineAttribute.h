#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/StateMachineAttribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1876FB20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IteratorStateMachineAttribute_TypeDefinitionIndex = 1355;

	class IteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ITERATORSTATEMACHINEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
