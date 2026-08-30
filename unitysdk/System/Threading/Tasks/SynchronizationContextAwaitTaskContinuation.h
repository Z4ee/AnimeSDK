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

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC43F50)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET UNITYSDK_OFFSET(0x1BC43E60)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x1BC43C30)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC44010)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC43BE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex = 921;

	class SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_postActionCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0x135F0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet_s_postCallback()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextAwaitTaskContinuation_TypeDefinitionIndex)->GetStaticField(0x135F8);
		}
		::System::Threading::SynchronizationContext* m_syncContext; // 0x20

		::System::Void _ctor(::System::Threading::SynchronizationContext* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Action*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION__CCTOR_OFFSET))();
		}

		::System::Void Run(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_RUN_OFFSET))(this, a1, a2);
		}

		static ::System::Void PostAction(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_POSTACTION_OFFSET))(a1);
		}

		static ::System::Threading::ContextCallback* GetPostActionCallback()
		{
			return ((::System::Threading::ContextCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION_GETPOSTACTIONCALLBACK_OFFSET))();
		}
	};
}
