#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x179BF7F0)
#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF7E0)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int CriticalFinalizerObject_TypeDefinitionIndex = 1333;

	class CriticalFinalizerObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_FINALIZE_OFFSET))(this);
		}
	};
}
