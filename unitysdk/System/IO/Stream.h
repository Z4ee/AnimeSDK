#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream_ReadWriteTask; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_STREAM_BEGINENDREADASYNC_OFFSET UNITYSDK_OFFSET(0x1871F7F0)
#define SYSTEM_IO_STREAM_BEGINENDWRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1871FE30)
#define SYSTEM_IO_STREAM_BEGINREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1871EF10)
#define SYSTEM_IO_STREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x18715170)
#define SYSTEM_IO_STREAM_BEGINWRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1871F9D0)
#define SYSTEM_IO_STREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x18715D90)
#define SYSTEM_IO_STREAM_BLOCKINGBEGINREAD_OFFSET UNITYSDK_OFFSET(0x1871F250)
#define SYSTEM_IO_STREAM_BLOCKINGBEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1871FC90)
#define SYSTEM_IO_STREAM_BLOCKINGENDREAD_OFFSET UNITYSDK_OFFSET(0x1871F7E0)
#define SYSTEM_IO_STREAM_BLOCKINGENDWRITE_OFFSET UNITYSDK_OFFSET(0x1871FDC0)
#define SYSTEM_IO_STREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1871EE80)
#define SYSTEM_IO_STREAM_COPYTOASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1871EAD0)
#define SYSTEM_IO_STREAM_COPYTOASYNC_1_OFFSET UNITYSDK_OFFSET(0x1871EA80)
#define SYSTEM_IO_STREAM_COPYTOASYNC_2_OFFSET UNITYSDK_OFFSET(0x18719810)
#define SYSTEM_IO_STREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1871EA30)
#define SYSTEM_IO_STREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x1871EBD0)
#define SYSTEM_IO_STREAM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x187185F0)
#define SYSTEM_IO_STREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1871EF00)
#define SYSTEM_IO_STREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x18715370)
#define SYSTEM_IO_STREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x18716050)
#define SYSTEM_IO_STREAM_ENSUREASYNCACTIVESEMAPHOREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1871E710)
#define SYSTEM_IO_STREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1871E840)
#define SYSTEM_IO_STREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1871E970)
#define SYSTEM_IO_STREAM_INTERNALCOPYTO_OFFSET UNITYSDK_OFFSET(0x1871EDD0)
#define SYSTEM_IO_STREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x18716B50)
#define SYSTEM_IO_STREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x18720010)
#define SYSTEM_IO_STREAM_RUNREADWRITETASKWHENREADY_OFFSET UNITYSDK_OFFSET(0x1871F4B0)
#define SYSTEM_IO_STREAM_RUNREADWRITETASK_OFFSET UNITYSDK_OFFSET(0x1871F770)
#define SYSTEM_IO_STREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1871E910)
#define SYSTEM_IO_STREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1871E9D0)
#define SYSTEM_IO_STREAM_WRITEASYNC_1_OFFSET UNITYSDK_OFFSET(0x18716BF0)
#define SYSTEM_IO_STREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1871FDD0)
#define SYSTEM_IO_STREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x18720080)
#define SYSTEM_IO_STREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18720390)
#define SYSTEM_IO_STREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18711CF0)

namespace System::IO
{
	inline static constexpr unsigned int Stream_TypeDefinitionIndex = 681;

	class Stream : public ::System::MarshalByRefObject
	{
	public:
		static ::System::IO::Stream** StaticGet_Null()
		{
			return (::System::IO::Stream**)Il2CppClass::FromTypeDefinitionIndex(Stream_TypeDefinitionIndex)->GetStaticField(0x42C0);
		}
		::System::Threading::SemaphoreSlim* _asyncActiveSemaphore; // 0x18
		::System::IO::Stream_ReadWriteTask* _activeReadWriteTask; // 0x20

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

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SET_READTIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SET_WRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* CopyToAsync_1(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task* CopyToAsync_2(::System::IO::Stream* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNC_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* CopyToAsyncInternal(::System::IO::Stream* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTOASYNCINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CopyTo(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_COPYTO_OFFSET))(this, a1);
		}

		::System::Void InternalCopyTo(::System::IO::Stream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_INTERNALCOPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginReadInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5, ::System::Boolean a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINREADINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* BeginEndReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINENDREADASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginWriteInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5, ::System::Boolean a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINWRITEINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task* a1, ::System::IO::Stream_ReadWriteTask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::IO::Stream_ReadWriteTask*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_RUNREADWRITETASKWHENREADY_OFFSET))(this, a1, a2);
		}

		::System::Void RunReadWriteTask(::System::IO::Stream_ReadWriteTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream_ReadWriteTask*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_RUNREADWRITETASK_OFFSET))(this, a1);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WriteAsync_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEASYNC_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task* BeginEndWriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BEGINENDWRITEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READBYTE_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BlockingBeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGBEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 BlockingEndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGENDREAD_OFFSET))(a1);
		}

		::System::IAsyncResult* BlockingBeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGBEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void BlockingEndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_BLOCKINGENDWRITE_OFFSET))(a1);
		}
	};
}
