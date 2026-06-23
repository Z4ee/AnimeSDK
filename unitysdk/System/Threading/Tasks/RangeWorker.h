#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/IndexRange.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK32_OFFSET UNITYSDK_OFFSET(0x966FD0)
#define SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK_OFFSET UNITYSDK_OFFSET(0x966FC0)
#define SYSTEM_THREADING_TASKS_RANGEWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x966F90)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int RangeWorker_TypeDefinitionIndex = 896;

	struct alignas(8) RangeWorker
	{
		::Il2CppArray<::System::Threading::Tasks::IndexRange>* m_indexRanges; // 0x10
		::System::Int64 m_nStep; // 0x18
		::System::Boolean _use32BitCurrentIndex; // 0x20
		::System::Int32 m_nCurrentIndexRange; // 0x24
		::System::Int64 m_nMaxIncrementValue; // 0x28
		::System::Int64 m_nIncrementValue; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Threading::Tasks::IndexRange>* ranges, ::System::Int32 nInitialRange, ::System::Int64 nStep, ::System::Boolean use32BitCurrentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Threading::Tasks::IndexRange>*, ::System::Int32, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER__CTOR_OFFSET))(this, ranges, nInitialRange, nStep, use32BitCurrentIndex);
		}

		::System::Boolean FindNewWork(::System::Int64& nFromInclusiveLocal, ::System::Int64& nToExclusiveLocal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK_OFFSET))(this, nFromInclusiveLocal, nToExclusiveLocal);
		}

		::System::Boolean FindNewWork32(::System::Int32& nFromInclusiveLocal32, ::System::Int32& nToExclusiveLocal32)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK32_OFFSET))(this, nFromInclusiveLocal32, nToExclusiveLocal32);
		}
	};
}
