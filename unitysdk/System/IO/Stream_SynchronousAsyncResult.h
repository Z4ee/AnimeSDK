#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1CD8DD10)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1CD8DED0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1CD8DCD0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1CD8DBA0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1CD8DCE0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD8DB90)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_THROWIFERROR_OFFSET UNITYSDK_OFFSET(0x1CD8DCF0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD8DB50)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD8DB60)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8DB40)

namespace System::IO
{
	inline static constexpr unsigned int Stream_SynchronousAsyncResult_TypeDefinitionIndex = 654;

	class Stream_SynchronousAsyncResult : public ::System::Object
	{
	public:
		::System::Object* _stateObject; // 0x10
		::System::Threading::ManualResetEvent* _waitHandle; // 0x18
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionInfo; // 0x20
		::System::Boolean _endXxxCalled; // 0x28
		::System::Boolean _isWrite; // 0x29
		::System::Int32 _bytesRead; // 0x2C

		::System::Void _ctor(::System::Int32 bytesRead, ::System::Object* asyncStateObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_OFFSET))(this, bytesRead, asyncStateObject);
		}

		::System::Void _ctor_1(::System::Object* asyncStateObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_1_OFFSET))(this, asyncStateObject);
		}

		::System::Void _ctor_2(::System::Exception* ex, ::System::Object* asyncStateObject, ::System::Boolean isWrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_2_OFFSET))(this, ex, asyncStateObject, isWrite);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Void ThrowIfError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_THROWIFERROR_OFFSET))(this);
		}

		static ::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET))(asyncResult);
		}

		static ::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET))(asyncResult);
		}
	};
}
