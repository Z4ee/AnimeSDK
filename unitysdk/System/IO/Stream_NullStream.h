#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_STREAM_NULLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x18720C10)
#define SYSTEM_IO_STREAM_NULLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x18720CA0)
#define SYSTEM_IO_STREAM_NULLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18720BF0)
#define SYSTEM_IO_STREAM_NULLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x18720C20)
#define SYSTEM_IO_STREAM_NULLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x18720CB0)
#define SYSTEM_IO_STREAM_NULLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x18720C00)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18720B90)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x18720BB0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18720BA0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18720BC0)
#define SYSTEM_IO_STREAM_NULLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18720BD0)
#define SYSTEM_IO_STREAM_NULLSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x18720D40)
#define SYSTEM_IO_STREAM_NULLSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x18720DE0)
#define SYSTEM_IO_STREAM_NULLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x18720D30)
#define SYSTEM_IO_STREAM_NULLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x18720EE0)
#define SYSTEM_IO_STREAM_NULLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x18720EF0)
#define SYSTEM_IO_STREAM_NULLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18720BE0)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x18720E00)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x18720ED0)
#define SYSTEM_IO_STREAM_NULLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x18720DF0)
#define SYSTEM_IO_STREAM_NULLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x187203D0)

namespace System::IO
{
	inline static constexpr unsigned int Stream_NullStream_TypeDefinitionIndex = 684;

	class Stream_NullStream : public ::System::IO::Stream
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Int32>** StaticGet_s_nullReadTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream_NullStream_TypeDefinitionIndex)->GetStaticField(0x7D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_FLUSH_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_NULLSTREAM_SETLENGTH_OFFSET))(this, a1);
		}
	};
}
