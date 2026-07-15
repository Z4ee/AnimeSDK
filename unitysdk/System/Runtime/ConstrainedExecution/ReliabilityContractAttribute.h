#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/Cer.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/Consistency.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A824C70)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int ReliabilityContractAttribute_TypeDefinitionIndex = 1337;

	class ReliabilityContractAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::ConstrainedExecution::Cer _cer; // 0x10
		::System::Runtime::ConstrainedExecution::Consistency _consistency; // 0x14

		::System::Void _ctor(::System::Runtime::ConstrainedExecution::Consistency a1, ::System::Runtime::ConstrainedExecution::Cer a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ConstrainedExecution::Consistency, ::System::Runtime::ConstrainedExecution::Cer))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
