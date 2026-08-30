#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1BC3DA40)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1BC3DAF0)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1BC3DB00)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC3D900)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3D960)

namespace System::Threading
{
	inline static constexpr unsigned int QueueUserWorkItemCallback_TypeDefinitionIndex = 864;

	class QueueUserWorkItemCallback : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(QueueUserWorkItemCallback_TypeDefinitionIndex)->GetStaticField(0x12EC0);
		}
		::System::Threading::ExecutionContext* context; // 0x10
		::System::Object* state; // 0x18
		::System::Threading::WaitCallback* callback; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Threading::WaitCallback* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*, ::System::Object*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

		static ::System::Void WaitCallback_Context(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET))(a1);
		}
	};
}
