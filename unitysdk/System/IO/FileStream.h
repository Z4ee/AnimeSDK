#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileOptions.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Microsoft::Win32::SafeHandles { class SafeFileHandle; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::InteropServices { class SafeHandle; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x18714EE0)
#define SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x18715A30)
#define SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18716760)
#define SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x18715210)
#define SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x18715F00)
#define SYSTEM_IO_FILESTREAM_EXPOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x187143F0)
#define SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187166F0)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFERIFDIRTY_OFFSET UNITYSDK_OFFSET(0x187145F0)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x187147B0)
#define SYSTEM_IO_FILESTREAM_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x18716590)
#define SYSTEM_IO_FILESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x18716530)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_1_OFFSET UNITYSDK_OFFSET(0x18712D90)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x18713080)
#define SYSTEM_IO_FILESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18714550)
#define SYSTEM_IO_FILESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x18714570)
#define SYSTEM_IO_FILESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18714560)
#define SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18713E10)
#define SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18714310)
#define SYSTEM_IO_FILESTREAM_GET_SAFEFILEHANDLE_OFFSET UNITYSDK_OFFSET(0x18714750)
#define SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x18713EF0)
#define SYSTEM_IO_FILESTREAM_INIT_OFFSET UNITYSDK_OFFSET(0x18711D10)
#define SYSTEM_IO_FILESTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x18716B00)
#define SYSTEM_IO_FILESTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x187148B0)
#define SYSTEM_IO_FILESTREAM_READDATA_OFFSET UNITYSDK_OFFSET(0x187149F0)
#define SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x18714DD0)
#define SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET UNITYSDK_OFFSET(0x18714EA0)
#define SYSTEM_IO_FILESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x18714BD0)
#define SYSTEM_IO_FILESTREAM_REFILLBUFFER_OFFSET UNITYSDK_OFFSET(0x18714A90)
#define SYSTEM_IO_FILESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x18714150)
#define SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x18716240)
#define SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x187146F0)
#define SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x18716BA0)
#define SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x18714AC0)
#define SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18715770)
#define SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET UNITYSDK_OFFSET(0x187159D0)
#define SYSTEM_IO_FILESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x187155A0)
#define SYSTEM_IO_FILESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18716F10)
#define SYSTEM_IO_FILESTREAM__CTOR_10_OFFSET UNITYSDK_OFFSET(0x18711FB0)
#define SYSTEM_IO_FILESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18711BB0)
#define SYSTEM_IO_FILESTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18711F20)
#define SYSTEM_IO_FILESTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x187126D0)
#define SYSTEM_IO_FILESTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x187127A0)
#define SYSTEM_IO_FILESTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x187127D0)
#define SYSTEM_IO_FILESTREAM__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18712800)
#define SYSTEM_IO_FILESTREAM__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18712850)
#define SYSTEM_IO_FILESTREAM__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18712890)
#define SYSTEM_IO_FILESTREAM__CTOR_9_OFFSET UNITYSDK_OFFSET(0x18712750)
#define SYSTEM_IO_FILESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18711B80)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_TypeDefinitionIndex = 714;

	class FileStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_buf_recycle()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FileStream_TypeDefinitionIndex)->GetStaticField(0x79A0);
		}
		static ::System::Object** StaticGet_buf_recycle_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FileStream_TypeDefinitionIndex)->GetStaticField(0x79A8);
		}
		::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle; // 0x28
		::System::String* name; // 0x30
		::Il2CppArray<::System::Byte>* buf; // 0x38
		::System::Int64 append_startpos; // 0x40
		::System::Boolean canseek; // 0x48
		::System::Boolean anonymous; // 0x49
		::System::Boolean isExposed; // 0x4A
		::System::Boolean async; // 0x4B
		::System::Int32 buf_length; // 0x4C
		::System::IO::FileAccess access; // 0x50
		::System::Int32 buf_size; // 0x54
		::System::Boolean owner; // 0x58
		::System::Boolean buf_dirty; // 0x59
		::System::Int32 buf_offset; // 0x5C
		::System::Int64 buf_start; // 0x60

		::System::Void _ctor(::System::IntPtr a1, ::System::IO::FileAccess a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::IntPtr a1, ::System::IO::FileAccess a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::IO::FileMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5, ::System::IO::FileOptions a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::IO::FileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5, ::System::IO::FileOptions a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::IO::FileOptions, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _ctor_9(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_10(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::Int32 a5, ::System::Boolean a6, ::System::IO::FileOptions a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean, ::System::IO::FileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_10_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CCTOR_OFFSET))();
		}

		::System::Void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* a1, ::System::IO::FileAccess a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeFileHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_SAFEFILEHANDLE_OFFSET))(this);
		}

		::System::Void ExposeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_EXPOSEHANDLE_OFFSET))(this);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READBYTE_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void Flush_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSH_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ReadSegment(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 WriteSegment(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void FlushBufferIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHBUFFERIFDIRTY_OFFSET))(this);
		}

		::System::Void RefillBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_REFILLBUFFER_OFFSET))(this);
		}

		::System::Int32 ReadData(::System::Runtime::InteropServices::SafeHandle* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitBuffer(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET))(this, a1, a2);
		}

		::System::String* GetSecureFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET))(this, a1);
		}

		::System::String* GetSecureFileName_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_1_OFFSET))(this, a1, a2);
		}
	};
}
