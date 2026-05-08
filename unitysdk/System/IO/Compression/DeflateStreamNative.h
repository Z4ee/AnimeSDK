#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Compression/CompressionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO::Compression { class DeflateStreamNative_SafeDeflateStreamHandle; }
namespace System::IO::Compression { class DeflateStreamNative_UnmanagedReadOrWrite; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0x1AA99770)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1AA99E70)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1AA992C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET UNITYSDK_OFFSET(0x1AA99170)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA99360)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AA994C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x1AA996B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AA995B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1AA99950)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET UNITYSDK_OFFSET(0x1AA99810)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_1_OFFSET UNITYSDK_OFFSET(0x1AA99CC0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET UNITYSDK_OFFSET(0x1AA98E10)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_1_OFFSET UNITYSDK_OFFSET(0x1AA99D90)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET UNITYSDK_OFFSET(0x1AA99010)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1AA99BA0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1AA99A40)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA99160)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStreamNative_TypeDefinitionIndex = 3247;

	class DeflateStreamNative : public ::System::Object
	{
	public:
		// static const ::System::Int32 BufferSize = 0x1000; // 0x0
		// static const ::System::String* LIBNAME; // 0x0
		::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* z_stream; // 0x10
		::System::IO::Stream* base_stream; // 0x18
		::Il2CppArray<::System::Byte>* io_buffer; // 0x20
		::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder; // 0x28
		::System::Boolean disposed; // 0x30
		::System::Runtime::InteropServices::GCHandle data; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE__CTOR_OFFSET))(this);
		}

		static ::System::IO::Compression::DeflateStreamNative* Create(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, ::System::Boolean gzip)
		{
			return ((::System::IO::Compression::DeflateStreamNative*(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET))(compressedStream, mode, gzip);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET))(this);
		}

		::System::Int32 ReadZStream(::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET))(this, buffer, length);
		}

		::System::Void WriteZStream(::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET))(this, buffer, length);
		}

		static ::System::Int32 UnmanagedRead(::System::IntPtr buffer, ::System::Int32 length, ::System::IntPtr data)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET))(buffer, length, data);
		}

		::System::Int32 UnmanagedRead_1(::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_1_OFFSET))(this, buffer, length);
		}

		static ::System::Int32 UnmanagedWrite(::System::IntPtr buffer, ::System::Int32 length, ::System::IntPtr data)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET))(buffer, length, data);
		}

		::System::Int32 UnmanagedWrite_1(::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_1_OFFSET))(this, buffer, length);
		}

		static ::System::Void CheckResult(::System::Int32 result, ::System::String* where)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET))(result, where);
		}

		static ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* CreateZStream(::System::IO::Compression::CompressionMode compress, ::System::Boolean gzip, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder, ::System::IntPtr data)
		{
			return ((::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*(*)(::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET))(compress, gzip, feeder, data);
		}

		static ::System::Int32 CloseZStream(::System::IntPtr stream)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET))(stream);
		}

		static ::System::Int32 Flush_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_1_OFFSET))(stream);
		}

		static ::System::Int32 ReadZStream_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, ::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_1_OFFSET))(stream, buffer, length);
		}

		static ::System::Int32 WriteZStream_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, ::System::IntPtr buffer, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_1_OFFSET))(stream, buffer, length);
		}
	};
}
