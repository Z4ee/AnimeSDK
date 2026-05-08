#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::IO { class Stream; }
namespace System::Net { class FtpWebResponse; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_FTPASYNCRESULT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x19E35040)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x19E34AE0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x19E34AF0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x19E34C00)
#define SYSTEM_NET_FTPASYNCRESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x19E34CD0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_GOTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19E34CC0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19E34C10)
#define SYSTEM_NET_FTPASYNCRESULT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x19E34CE0)
#define SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x19E34D00)
#define SYSTEM_NET_FTPASYNCRESULT_RESET_OFFSET UNITYSDK_OFFSET(0x19E350B0)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x19E35090)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_2_OFFSET UNITYSDK_OFFSET(0x19E350A0)
#define SYSTEM_NET_FTPASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19E34EF0)
#define SYSTEM_NET_FTPASYNCRESULT_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x19E34CF0)
#define SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x19E34D10)
#define SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x19E34E00)
#define SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E34D20)
#define SYSTEM_NET_FTPASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E34AB0)

namespace System::Net
{
	inline static constexpr unsigned int FtpAsyncResult_TypeDefinitionIndex = 3511;

	class FtpAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* callback; // 0x10
		::System::Net::FtpWebResponse* response; // 0x18
		::System::Object* locker; // 0x20
		::System::Threading::ManualResetEvent* waitHandle; // 0x28
		::System::Object* state; // 0x30
		::System::Exception* exception; // 0x38
		::System::IO::Stream* stream; // 0x40
		::System::Boolean synch; // 0x48
		::System::Boolean completed; // 0x49

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

		::System::Void set_Response(::System::Net::FtpWebResponse* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SET_RESPONSE_OFFSET))(this, value);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_SET_STREAM_OFFSET))(this, value);
		}

		::System::Void WaitUntilComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_OFFSET))(this);
		}

		::System::Boolean WaitUntilComplete_1(::System::Int32 timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET))(this, timeout, exitContext);
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

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPASYNCRESULT_RESET_OFFSET))(this);
		}
	};
}
