#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST__DELAYTEST_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE8E1D0)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE8E2E0)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE8E340)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DE8E2F0)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE8E1C0)
#define TASKTREETEST__DELAYTEST_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E1B0)

inline static constexpr unsigned int TaskTreeTest__DelayTest_d__3_TypeDefinitionIndex = 48930;

class TaskTreeTest__DelayTest_d__3 : public ::System::Object
{
public:
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* completionSource; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
