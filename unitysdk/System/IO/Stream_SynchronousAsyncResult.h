#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1B862E00)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1B862F10)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1B864230)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1B864100)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1B864240)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B8640F0)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_THROWIFERROR_OFFSET UNITYSDK_OFFSET(0x1B864250)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B862F00)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B862D70)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B862D60)

namespace System::IO
{
	inline static constexpr unsigned int Stream_SynchronousAsyncResult_TypeDefinitionIndex = 685;

	class Stream_SynchronousAsyncResult : public ::System::Object
	{
	public:
		::System::Object* _stateObject; // 0x10
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionInfo; // 0x18
		::System::Threading::ManualResetEvent* _waitHandle; // 0x20
		::System::Int32 _bytesRead; // 0x28
		::System::Boolean _endXxxCalled; // 0x2C
		::System::Boolean _isWrite; // 0x2D

		::System::Void _ctor(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Exception* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT__CTOR_2_OFFSET))(this, a1, a2, a3);
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

		static ::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET))(a1);
		}

		static ::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET))(a1);
		}
	};
}
