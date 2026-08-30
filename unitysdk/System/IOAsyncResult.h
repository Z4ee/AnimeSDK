#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_IOASYNCRESULT_GET_ASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB39D30)
#define SYSTEM_IOASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1AB39D40)
#define SYSTEM_IOASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1AB39D50)
#define SYSTEM_IOASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1AB39E40)
#define SYSTEM_IOASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AB39E60)
#define SYSTEM_IOASYNCRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x1AB39CC0)
#define SYSTEM_IOASYNCRESULT_SET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1AB39E50)
#define SYSTEM_IOASYNCRESULT_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AB39E70)
#define SYSTEM_IOASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB39D20)
#define SYSTEM_IOASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB39CB0)

namespace System
{
	inline static constexpr unsigned int IOAsyncResult_TypeDefinitionIndex = 2488;

	class IOAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* async_callback; // 0x10
		::System::Object* async_state; // 0x18
		::System::Threading::ManualResetEvent* wait_handle; // 0x20
		::System::Boolean completed_synchronously; // 0x28
		::System::Boolean completed; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Init(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_INIT_OFFSET))(this, a1, a2);
		}

		::System::AsyncCallback* get_AsyncCallback()
		{
			return ((::System::AsyncCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCCALLBACK_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Void set_CompletedSynchronously(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_SET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsCompleted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_SET_ISCOMPLETED_OFFSET))(this, a1);
		}
	};
}
