#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Compression/CompressionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO::Compression { class DeflateStreamNative_SafeDeflateStreamHandle; }
namespace System::IO::Compression { class DeflateStreamNative_UnmanagedReadOrWrite; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0x1E94F0A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1E94F580)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1E94EEE0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E94CDD0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E94D270)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E94EF40)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x1E94EFF0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E94DE90)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1E94F110)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET UNITYSDK_OFFSET(0x1E94D430)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_1_OFFSET UNITYSDK_OFFSET(0x1E94F310)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET UNITYSDK_OFFSET(0x1E94ED10)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_1_OFFSET UNITYSDK_OFFSET(0x1E94F420)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET UNITYSDK_OFFSET(0x1E94EDF0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1E94F1F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET UNITYSDK_OFFSET(0x1E94D8E0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E94EED0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStreamNative_TypeDefinitionIndex = 2720;

	class DeflateStreamNative : public ::System::Object
	{
	public:
		::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder; // 0x10
		::System::IO::Stream* base_stream; // 0x18
		::Il2CppArray<::System::Byte>* io_buffer; // 0x20
		::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* z_stream; // 0x28
		::System::Runtime::InteropServices::GCHandle data; // 0x30
		::System::Boolean disposed; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE__CTOR_OFFSET))(this);
		}

		static ::System::IO::Compression::DeflateStreamNative* Create(::System::IO::Stream* a1, ::System::IO::Compression::CompressionMode a2, ::System::Boolean a3)
		{
			return ((::System::IO::Compression::DeflateStreamNative*(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET))(this);
		}

		::System::Int32 ReadZStream(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET))(this, a1, a2);
		}

		::System::Void WriteZStream(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 UnmanagedRead(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET))(a1, a2, a3);
		}

		::System::Int32 UnmanagedRead_1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 UnmanagedWrite(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET))(a1, a2, a3);
		}

		::System::Int32 UnmanagedWrite_1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void CheckResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET))(a1, a2);
		}

		static ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* CreateZStream(::System::IO::Compression::CompressionMode a1, ::System::Boolean a2, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* a3, ::System::IntPtr a4)
		{
			return ((::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*(*)(::System::IO::Compression::CompressionMode, ::System::Boolean, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CloseZStream(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET))(a1);
		}

		static ::System::Int32 Flush_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* a1)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_1_OFFSET))(a1);
		}

		static ::System::Int32 ReadZStream_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 WriteZStream_1(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_1_OFFSET))(a1, a2, a3);
		}
	};
}
