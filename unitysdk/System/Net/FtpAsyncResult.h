#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::IO { class Stream; }
namespace System::Net { class FtpWebResponse; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_FTPASYNCRESULT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A10D960)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1A10D510)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1A10D520)
#define SYSTEM_NET_FTPASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1A10D610)
#define SYSTEM_NET_FTPASYNCRESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A10D6E0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_GOTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A10D6D0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A10D620)
#define SYSTEM_NET_FTPASYNCRESULT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1A10D6F0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1A10D700)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x1A10D9B0)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_2_OFFSET UNITYSDK_OFFSET(0x1A10D9C0)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A10D810)
#define SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1A10D710)
#define SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A10D720)
#define SYSTEM_NET_FTPASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10D4E0)

namespace System::Net
{
	inline static constexpr unsigned int FtpAsyncResult_TypeDefinitionIndex = 2826;

	class FtpAsyncResult : public ::System::Object
	{
	public:
		::System::Object* locker; // 0x10
		::System::Threading::ManualResetEvent* waitHandle; // 0x18
		::System::Net::FtpWebResponse* response; // 0x20
		::System::IO::Stream* stream; // 0x28
		::System::Object* state; // 0x30
		::System::AsyncCallback* callback; // 0x38
		::System::Exception* exception; // 0x40
		::System::Boolean completed; // 0x48
		::System::Boolean synch; // 0x49

		::System::Void _ctor(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT__CTOR_OFFSET))(this, callback, state);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_GotException()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_GOTEXCEPTION_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Net::FtpWebResponse* get_Response()
		{
			return ((::System::Net::FtpWebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_RESPONSE_OFFSET))(this);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET))(this, value);
		}

		::System::Boolean WaitUntilComplete(::System::Int32 timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET))(this, timeout, exitContext);
		}

		::System::Void SetCompleted(::System::Boolean synch, ::System::Exception* exc, ::System::Net::FtpWebResponse* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*, ::System::Net::FtpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_OFFSET))(this, synch, exc, response);
		}

		::System::Void SetCompleted_1(::System::Boolean synch, ::System::Net::FtpWebResponse* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::FtpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, synch, response);
		}

		::System::Void SetCompleted_2(::System::Boolean synch, ::System::Exception* exc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_2_OFFSET))(this, synch, exc);
		}

		::System::Void DoCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_DOCALLBACK_OFFSET))(this);
		}
	};
}
