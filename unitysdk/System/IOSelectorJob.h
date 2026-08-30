#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IOOperation.h"
#include "unitysdk/System/Object.h"

namespace System { class IOAsyncCallback; }
namespace System { class IOAsyncResult; }
namespace System::Threading { class ThreadAbortException; }

#define SYSTEM_IOSELECTORJOB_MARKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1E950750)
#define SYSTEM_IOSELECTORJOB_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1E950710)
#define SYSTEM_IOSELECTORJOB_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1E950740)
#define SYSTEM_IOSELECTORJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E950700)

namespace System
{
	inline static constexpr unsigned int IOSelectorJob_TypeDefinitionIndex = 2489;

	class IOSelectorJob : public ::System::Object
	{
	public:
		::System::IOOperation operation; // 0x10
		::System::IOAsyncCallback* callback; // 0x18
		::System::IOAsyncResult* state; // 0x20

		::System::Void _ctor(::System::IOOperation a1, ::System::IOAsyncCallback* a2, ::System::IOAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOOperation, ::System::IOAsyncCallback*, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

		::System::Void MarkDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_MARKDISPOSED_OFFSET))(this);
		}
	};
}
