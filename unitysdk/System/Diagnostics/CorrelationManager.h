#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Stack; }

#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1D46BCE0)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D46BB00)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1D46BC20)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D46BBC0)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STARTLOGICALOPERATION_1_OFFSET UNITYSDK_OFFSET(0x1D46BEE0)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STARTLOGICALOPERATION_OFFSET UNITYSDK_OFFSET(0x1D46BDA0)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STOPLOGICALOPERATION_OFFSET UNITYSDK_OFFSET(0x1D46BF10)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46BAF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CorrelationManager_TypeDefinitionIndex = 2753;

	class CorrelationManager : public ::System::Object
	{
	public:
		// static const ::System::String* transactionSlotName; // 0x0
		// static const ::System::String* activityIdSlotName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Guid get_ActivityId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityId(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET))(this);
		}

		::System::Void StartLogicalOperation(::System::Object* operationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STARTLOGICALOPERATION_OFFSET))(this, operationId);
		}

		::System::Void StartLogicalOperation_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STARTLOGICALOPERATION_1_OFFSET))(this);
		}

		::System::Void StopLogicalOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_STOPLOGICALOPERATION_OFFSET))(this);
		}

		::System::Collections::Stack* GetLogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET))(this);
		}
	};
}
