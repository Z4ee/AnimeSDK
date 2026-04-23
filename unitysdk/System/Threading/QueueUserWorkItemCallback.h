#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x17865090)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x17865140)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x17865150)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x17864F70)
#define SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17864FB0)

namespace System::Threading
{
	inline static constexpr unsigned int QueueUserWorkItemCallback_TypeDefinitionIndex = 861;

	class QueueUserWorkItemCallback : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(QueueUserWorkItemCallback_TypeDefinitionIndex)->GetStaticField(0xBFF0);
		}
		::System::Object* state; // 0x10
		::System::Threading::WaitCallback* callback; // 0x18
		::System::Threading::ExecutionContext* context; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj, ::System::Boolean compressStack, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*, ::System::Object*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK__CTOR_OFFSET))(this, waitCallback, stateObj, compressStack, stackMark);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, tae);
		}

		static ::System::Void WaitCallback_Context(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_QUEUEUSERWORKITEMCALLBACK_WAITCALLBACK_CONTEXT_OFFSET))(state);
		}
	};
}
