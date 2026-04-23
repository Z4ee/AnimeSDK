#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class SemaphoreSlim_TaskNode; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x178679D0)
#define SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET UNITYSDK_OFFSET(0x17866A10)
#define SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x17867280)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x17867940)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178678F0)
#define SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x178662E0)
#define SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x178661B0)
#define SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET UNITYSDK_OFFSET(0x178678E0)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_1_OFFSET UNITYSDK_OFFSET(0x17867550)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET UNITYSDK_OFFSET(0x17867540)
#define SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x178674C0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_1_OFFSET UNITYSDK_OFFSET(0x17866B00)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x17867270)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x17867330)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x17866F60)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_1_OFFSET UNITYSDK_OFFSET(0x17866A00)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_2_OFFSET UNITYSDK_OFFSET(0x17866300)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x178662F0)
#define SYSTEM_THREADING_SEMAPHORESLIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17867AB0)
#define SYSTEM_THREADING_SEMAPHORESLIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178661D0)
#define SYSTEM_THREADING_SEMAPHORESLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x178661C0)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreSlim_TypeDefinitionIndex = 807;

	class SemaphoreSlim : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_s_trueTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SemaphoreSlim_TypeDefinitionIndex)->GetStaticField(0xC010);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_s_cancellationTokenCanceledEventHandler()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SemaphoreSlim_TypeDefinitionIndex)->GetStaticField(0xC018);
		}
		::System::Threading::SemaphoreSlim_TaskNode* m_asyncHead; // 0x10
		::System::Threading::ManualResetEvent* m_waitHandle; // 0x18
		::System::Threading::SemaphoreSlim_TaskNode* m_asyncTail; // 0x20
		::System::Object* m_lockObj; // 0x28
		::System::Int32 m_maxCount; // 0x30
		::System::Int32 m_waitCount; // 0x34
		::System::Int32 m_currentCount; // 0x38

		::System::Void _ctor(::System::Int32 initialCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__CTOR_OFFSET))(this, initialCount);
		}

		::System::Void _ctor_1(::System::Int32 initialCount, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__CTOR_1_OFFSET))(this, initialCount, maxCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__CCTOR_OFFSET))();
		}

		::System::Int32 get_CurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET))(this);
		}

		::System::Boolean Wait_1(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_1_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean Wait_2(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_2_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Boolean WaitUntilCountOrTimeout(::System::Int32 millisecondsTimeout, ::System::UInt32 startTime, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET))(this, millisecondsTimeout, startTime, cancellationToken);
		}

		::System::Threading::Tasks::Task* WaitAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Boolean>* WaitAsync_1(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_1_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Threading::SemaphoreSlim_TaskNode* CreateAndAddAsyncWaiter()
		{
			return ((::System::Threading::SemaphoreSlim_TaskNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET))(this);
		}

		::System::Boolean RemoveAsyncWaiter(::System::Threading::SemaphoreSlim_TaskNode* task)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::SemaphoreSlim_TaskNode*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET))(this, task);
		}

		::System::Threading::Tasks::Task_1<::System::Boolean>* WaitUntilCountOrTimeoutAsync(::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter, ::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Boolean>*(*)(::PVOID, ::System::Threading::SemaphoreSlim_TaskNode*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET))(this, asyncWaiter, millisecondsTimeout, cancellationToken);
		}

		::System::Int32 Release()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET))(this);
		}

		::System::Int32 Release_1(::System::Int32 releaseCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_1_OFFSET))(this, releaseCount);
		}

		static ::System::Void QueueWaiterTask(::System::Threading::SemaphoreSlim_TaskNode* waiterTask)
		{
			return ((::System::Void(*)(::System::Threading::SemaphoreSlim_TaskNode*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET))(waiterTask);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Void CancellationTokenCanceledEventHandler(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET))(obj);
		}

		::System::Void CheckDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET))(this);
		}

		static ::System::String* GetResourceString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET))(str);
		}
	};
}
