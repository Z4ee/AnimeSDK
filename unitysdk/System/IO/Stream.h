#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream_ReadWriteTask; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_STREAM_BEGINENDREADASYNC_OFFSET UNITYSDK_OFFSET(0x1C6F98D0)
#define SYSTEM_IO_STREAM_BEGINENDWRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1C6FA160)
#define SYSTEM_IO_STREAM_BEGINREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6F8F90)
#define SYSTEM_IO_STREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1C6F8F70)
#define SYSTEM_IO_STREAM_BEGINWRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6F9AD0)
#define SYSTEM_IO_STREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C6F9AB0)
#define SYSTEM_IO_STREAM_BLOCKINGBEGINREAD_OFFSET UNITYSDK_OFFSET(0x1C6F9220)
#define SYSTEM_IO_STREAM_BLOCKINGBEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C6F9D40)
#define SYSTEM_IO_STREAM_BLOCKINGENDREAD_OFFSET UNITYSDK_OFFSET(0x1C6F9830)
#define SYSTEM_IO_STREAM_BLOCKINGENDWRITE_OFFSET UNITYSDK_OFFSET(0x1C6FA040)
#define SYSTEM_IO_STREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C6F8D10)
#define SYSTEM_IO_STREAM_COPYTOASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6F8520)
#define SYSTEM_IO_STREAM_COPYTOASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C6F8080)
#define SYSTEM_IO_STREAM_COPYTOASYNC_2_OFFSET UNITYSDK_OFFSET(0x1C6F8100)
#define SYSTEM_IO_STREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1C6F8000)
#define SYSTEM_IO_STREAM_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1C6F8A80)
#define SYSTEM_IO_STREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C6F8750)
#define SYSTEM_IO_STREAM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C6F8DD0)
#define SYSTEM_IO_STREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6F8DC0)
#define SYSTEM_IO_STREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1C6F9630)
#define SYSTEM_IO_STREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1C6F9E60)
#define SYSTEM_IO_STREAM_ENSUREASYNCACTIVESEMAPHOREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1C6F7D40)
#define SYSTEM_IO_STREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1C6F8DE0)
#define SYSTEM_IO_STREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F7E70)
#define SYSTEM_IO_STREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F7E80)
#define SYSTEM_IO_STREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F7F40)
#define SYSTEM_IO_STREAM_INTERNALCOPYTO_OFFSET UNITYSDK_OFFSET(0x1C6F89A0)
#define SYSTEM_IO_STREAM_READASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C6FA500)
#define SYSTEM_IO_STREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1C6F9840)
#define SYSTEM_IO_STREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1C6FA340)
#define SYSTEM_IO_STREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C6FA460)
#define SYSTEM_IO_STREAM_RUNREADWRITETASKWHENREADY_OFFSET UNITYSDK_OFFSET(0x1C6F9350)
#define SYSTEM_IO_STREAM_RUNREADWRITETASK_OFFSET UNITYSDK_OFFSET(0x1C6F95A0)
#define SYSTEM_IO_STREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F7EE0)
#define SYSTEM_IO_STREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F7FA0)
#define SYSTEM_IO_STREAM_WRITEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C6FA0D0)
#define SYSTEM_IO_STREAM_WRITEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1C6FA550)
#define SYSTEM_IO_STREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1C6FA050)
#define SYSTEM_IO_STREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1C6FA3D0)
#define SYSTEM_IO_STREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6FA4B0)
#define SYSTEM_IO_STREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6FA5C0)
#define SYSTEM_IO_STREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FA5A0)

namespace System::IO
{
	inline static constexpr unsigned int Stream_TypeDefinitionIndex = 650;

	class Stream : public ::System::MarshalByRefObject
	{
	public:
		static ::System::IO::Stream** StaticGet_Null()
		{
			return (::System::IO::Stream**)Il2CppClass::FromTypeDefinitionIndex(Stream_TypeDefinitionIndex)->GetStaticField(0x150);
		}
		::System::IO::Stream_ReadWriteTask* _activeReadWriteTask; // 0x18
		::System::Threading::SemaphoreSlim* _asyncActiveSemaphore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__CCTOR_OFFSET))();
		}

		::System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized()
		{
			return ((::System::Threading::SemaphoreSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_ENSUREASYNCACTIVESEMAPHOREINITIALIZED_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_OFFSET))(this, destination);
		}

		::System::Threading::Tasks::Task* CopyToAsync_1(::System::IO::Stream* destination, ::System::Int32 bufferSize)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_1_OFFSET))(this, destination, bufferSize);
		}

		::System::Threading::Tasks::Task* CopyToAsync_2(::System::IO::Stream* destination, ::System::Int32 bufferSize, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_2_OFFSET))(this, destination, bufferSize, cancellationToken);
		}

		::System::Threading::Tasks::Task* CopyToAsyncInternal(::System::IO::Stream* destination, ::System::Int32 bufferSize, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNCINTERNAL_OFFSET))(this, destination, bufferSize, cancellationToken);
		}

		::System::Void CopyTo(::System::IO::Stream* destination)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTO_OFFSET))(this, destination);
		}

		::System::Void CopyTo_1(::System::IO::Stream* destination, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTO_1_OFFSET))(this, destination, bufferSize);
		}

		::System::Void InternalCopyTo(::System::IO::Stream* destination, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_INTERNALCOPYTO_OFFSET))(this, destination, bufferSize);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginReadInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Boolean serializeAsynchronously)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINREADINTERNAL_OFFSET))(this, buffer, offset, count, callback, state, serializeAsynchronously);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* BeginEndReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINENDREADASYNC_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginWriteInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Boolean serializeAsynchronously)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINWRITEINTERNAL_OFFSET))(this, buffer, offset, count, callback, state, serializeAsynchronously);
		}

		::System::Void RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task* asyncWaiter, ::System::IO::Stream_ReadWriteTask* readWriteTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::IO::Stream_ReadWriteTask*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_RUNREADWRITETASKWHENREADY_OFFSET))(this, asyncWaiter, readWriteTask);
		}

		::System::Void RunReadWriteTask(::System::IO::Stream_ReadWriteTask* readWriteTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream_ReadWriteTask*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_RUNREADWRITETASK_OFFSET))(this, readWriteTask);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEASYNC_1_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* BeginEndWriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINENDWRITEASYNC_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READBYTE_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BlockingBeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGBEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		static ::System::Int32 BlockingEndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGENDREAD_OFFSET))(asyncResult);
		}

		::System::IAsyncResult* BlockingBeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGBEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		static ::System::Void BlockingEndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGENDWRITE_OFFSET))(asyncResult);
		}

		::System::Int32 Read(::System::Span_1<::System::Byte> destination)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READ_OFFSET))(this, destination);
		}

		::System::Void Write(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITE_OFFSET))(this, source);
		}

		::System::Threading::Tasks::ValueTask_1<::System::Int32> ReadAsync_1(::System::Memory_1<::System::Byte> destination, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::ValueTask_1<::System::Int32>(*)(::PVOID, ::System::Memory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READASYNC_1_OFFSET))(this, destination, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync_2(::System::ReadOnlyMemory_1<::System::Byte> source, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEASYNC_2_OFFSET))(this, source, cancellationToken);
		}
	};
}
