#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Stack; }

#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1A0DAC00)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1A0DAB60)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DAB50)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CorrelationManager_TypeDefinitionIndex = 2521;

	class CorrelationManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET))(this);
		}

		::System::Collections::Stack* GetLogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET))(this);
		}
	};
}
