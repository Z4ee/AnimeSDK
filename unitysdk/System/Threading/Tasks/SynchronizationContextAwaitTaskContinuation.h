#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/AwaitTaskContinuation.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6CFA90)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET UNITYSDK_OFFSET(0x1A6CF9F0)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1A6CF720)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6CFB60)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CF6A0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex = 925;

	class SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_postActionCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet_s_postCallback()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0xAC8);
		}
		::System::Threading::SynchronizationContext* m_syncContext; // 0x20

		::System::Void _ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, ::System::Boolean flowExecutionContext, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CTOR_OFFSET))(this, context, action, flowExecutionContext, stackMark);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CCTOR_OFFSET))();
		}

		::System::Void Run(::System::Threading::Tasks::Task* task, ::System::Boolean canInlineContinuationTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET))(this, task, canInlineContinuationTask);
		}

		static ::System::Void PostAction(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET))(state);
		}

		static ::System::Threading::ContextCallback* GetPostActionCallback()
		{
			return ((::System::Threading::ContextCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET))();
		}
	};
}
