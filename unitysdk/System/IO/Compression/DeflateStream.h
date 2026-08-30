#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Compression/CompressionLevel.h"
#include "unitysdk/System/IO/Compression/CompressionMode.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO::Compression { class DeflateStreamNative; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AB37820)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AB37BA0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB368C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AB37F20)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AB38100)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AB375D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AB37060)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AB38340)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AB37530)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AB38350)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AB383A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AB36C50)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AB36E00)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AB382A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AB382F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AB383F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AB37100)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AB372E0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB36600)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AB36620)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AB36510)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AB36890)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AB368B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB364F0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_TypeDefinitionIndex = 2717;

	class DeflateStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Compression::DeflateStreamNative* native; // 0x28
		::System::IO::Stream* base_stream; // 0x30
		::System::IO::Compression::CompressionMode mode; // 0x38
		::System::Boolean disposed; // 0x3C
		::System::Boolean leaveOpen; // 0x3D

		::System::Void _ctor(::System::IO::Stream* a1, ::System::IO::Compression::CompressionMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::IO::Compression::CompressionMode a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::IO::Compression::CompressionMode a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1, ::System::IO::Compression::CompressionMode a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::IO::Stream* a1, ::System::IO::Compression::CompressionLevel a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::IO::Stream* a1, ::System::IO::Compression::CompressionLevel a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET))(this, a1);
		}
	};
}
