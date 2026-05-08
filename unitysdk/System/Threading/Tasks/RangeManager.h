#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/IndexRange.h"
#include "unitysdk/System/Threading/Tasks/RangeWorker.h"

#define SYSTEM_THREADING_TASKS_RANGEMANAGER_REGISTERNEWWORKER_OFFSET UNITYSDK_OFFSET(0x195655E0)
#define SYSTEM_THREADING_TASKS_RANGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19565430)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int RangeManager_TypeDefinitionIndex = 897;

	class RangeManager : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Threading::Tasks::IndexRange>* m_indexRanges; // 0x10
		::System::Int64 m_nStep; // 0x18
		::System::Int32 m_nCurrentIndexRangeToAssign; // 0x20
		::System::Boolean _use32BitCurrentIndex; // 0x24

		::System::Void _ctor(::System::Int64 nFromInclusive, ::System::Int64 nToExclusive, ::System::Int64 nStep, ::System::Int32 nNumExpectedWorkers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEMANAGER__CTOR_OFFSET))(this, nFromInclusive, nToExclusive, nStep, nNumExpectedWorkers);
		}

		::System::Threading::Tasks::RangeWorker RegisterNewWorker()
		{
			return ((::System::Threading::Tasks::RangeWorker(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEMANAGER_REGISTERNEWWORKER_OFFSET))(this);
		}
	};
}
