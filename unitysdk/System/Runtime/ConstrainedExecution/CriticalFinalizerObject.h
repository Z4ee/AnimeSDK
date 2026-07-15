#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A824C60)
#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A824C50)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int CriticalFinalizerObject_TypeDefinitionIndex = 1334;

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
