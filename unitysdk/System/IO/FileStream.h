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

#define SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D193D50)
#define SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D194560)
#define SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D194CD0)
#define SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1D193FF0)
#define SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D1948C0)
#define SYSTEM_IO_FILESTREAM_EXPOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D1932B0)
#define SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D194C60)
#define SYSTEM_IO_FILESTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1D195050)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFERIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1D1933D0)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1D1934C0)
#define SYSTEM_IO_FILESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D194BE0)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_1_OFFSET UNITYSDK_OFFSET(0x1D192BF0)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x1D192C10)
#define SYSTEM_IO_FILESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1D193300)
#define SYSTEM_IO_FILESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1D193320)
#define SYSTEM_IO_FILESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D193310)
#define SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D192C30)
#define SYSTEM_IO_FILESTREAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D193330)
#define SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D193190)
#define SYSTEM_IO_FILESTREAM_GET_SAFEFILEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D193460)
#define SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1D192D40)
#define SYSTEM_IO_FILESTREAM_INIT_OFFSET UNITYSDK_OFFSET(0x1D191FD0)
#define SYSTEM_IO_FILESTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1D1950E0)
#define SYSTEM_IO_FILESTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1D1935F0)
#define SYSTEM_IO_FILESTREAM_READDATA_OFFSET UNITYSDK_OFFSET(0x1D193770)
#define SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D193C20)
#define SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET UNITYSDK_OFFSET(0x1D193D10)
#define SYSTEM_IO_FILESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1D1939D0)
#define SYSTEM_IO_FILESTREAM_REFILLBUFFER_OFFSET UNITYSDK_OFFSET(0x1D193840)
#define SYSTEM_IO_FILESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1D192FA0)
#define SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1D194A10)
#define SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D1933E0)
#define SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1D195180)
#define SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1D193870)
#define SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D194370)
#define SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET UNITYSDK_OFFSET(0x1D194500)
#define SYSTEM_IO_FILESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D194150)
#define SYSTEM_IO_FILESTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1952E0)
#define SYSTEM_IO_FILESTREAM__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1D1922D0)
#define SYSTEM_IO_FILESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D191E30)
#define SYSTEM_IO_FILESTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D192240)
#define SYSTEM_IO_FILESTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D1929F0)
#define SYSTEM_IO_FILESTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D192AC0)
#define SYSTEM_IO_FILESTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D192AF0)
#define SYSTEM_IO_FILESTREAM__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D192B20)
#define SYSTEM_IO_FILESTREAM__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D192B70)
#define SYSTEM_IO_FILESTREAM__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D192BB0)
#define SYSTEM_IO_FILESTREAM__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D192A70)
#define SYSTEM_IO_FILESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D191E00)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_TypeDefinitionIndex = 680;

	class FileStream : public ::System::IO::Stream
	{
	public:
		static ::System::Object** StaticGet_buf_recycle_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FileStream_TypeDefinitionIndex)->GetStaticField(0x530);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_buf_recycle()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FileStream_TypeDefinitionIndex)->GetStaticField(0x538);
		}
		::Il2CppArray<::System::Byte>* buf; // 0x28
		::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle; // 0x30
		::System::String* name; // 0x38
		::System::Boolean async; // 0x40
		::System::Boolean owner; // 0x41
		::System::Int32 buf_length; // 0x44
		::System::Int64 append_startpos; // 0x48
		::System::Int32 buf_offset; // 0x50
		::System::Boolean anonymous; // 0x54
		::System::Boolean isExposed; // 0x55
		::System::Boolean canseek; // 0x56
		::System::Boolean buf_dirty; // 0x57
		::System::Int64 buf_start; // 0x58
		::System::IO::FileAccess access; // 0x60
		::System::Int32 buf_size; // 0x64

		::System::Void _ctor(::System::IntPtr handle, ::System::IO::FileAccess access, ::System::Boolean ownsHandle, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_OFFSET))(this, handle, access, ownsHandle, bufferSize);
		}

		::System::Void _ctor_1(::System::IntPtr handle, ::System::IO::FileAccess access, ::System::Boolean ownsHandle, ::System::Int32 bufferSize, ::System::Boolean isAsync, ::System::Boolean isConsoleWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_1_OFFSET))(this, handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
		}

		::System::Void _ctor_2(::System::String* path, ::System::IO::FileMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_2_OFFSET))(this, path, mode);
		}

		::System::Void _ctor_3(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_3_OFFSET))(this, path, mode, access);
		}

		::System::Void _ctor_4(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_4_OFFSET))(this, path, mode, access, share);
		}

		::System::Void _ctor_5(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_5_OFFSET))(this, path, mode, access, share, bufferSize);
		}

		::System::Void _ctor_6(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize, ::System::Boolean useAsync)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_6_OFFSET))(this, path, mode, access, share, bufferSize, useAsync);
		}

		::System::Void _ctor_7(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize, ::System::IO::FileOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::IO::FileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_7_OFFSET))(this, path, mode, access, share, bufferSize, options);
		}

		::System::Void _ctor_8(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize, ::System::IO::FileOptions options, ::System::String* msgPath, ::System::Boolean bFromProxy, ::System::Boolean useLongPath, ::System::Boolean checkHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::IO::FileOptions, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_8_OFFSET))(this, path, mode, access, share, bufferSize, options, msgPath, bFromProxy, useLongPath, checkHost);
		}

		::System::Void _ctor_9(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize, ::System::Boolean isAsync, ::System::Boolean anonymous)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_9_OFFSET))(this, path, mode, access, share, bufferSize, isAsync, anonymous);
		}

		::System::Void _ctor_10(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::Int32 bufferSize, ::System::Boolean anonymous, ::System::IO::FileOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::Int32, ::System::Boolean, ::System::IO::FileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CTOR_10_OFFSET))(this, path, mode, access, share, bufferSize, anonymous, options);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM__CCTOR_OFFSET))();
		}

		::System::Void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, ::System::IO::FileAccess access, ::System::Boolean ownsHandle, ::System::Int32 bufferSize, ::System::Boolean isAsync, ::System::Boolean isConsoleWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::IO::FileAccess, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INIT_OFFSET))(this, safeHandle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
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

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_NAME_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET))(this, value);
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

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READ_OFFSET))(this, array, offset, count);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Byte>* dest, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET))(this, dest, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET))(this, array, offset, numBytes, userCallback, stateObject);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITE_OFFSET))(this, array, offset, count);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Byte>* src, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET))(this, src, offset, count);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET))(this, array, offset, numBytes, userCallback, stateObject);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Int32 ReadSegment(::Il2CppArray<::System::Byte>* dest, ::System::Int32 dest_offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET))(this, dest, dest_offset, count);
		}

		::System::Int32 WriteSegment(::Il2CppArray<::System::Byte>* src, ::System::Int32 src_offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET))(this, src, src_offset, count);
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

		::System::Int32 ReadData(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::Il2CppArray<::System::Byte>* buf, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDATA_OFFSET))(this, safeHandle, buf, offset, count);
		}

		::System::Void InitBuffer(::System::Int32 size, ::System::Boolean isZeroSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET))(this, size, isZeroSize);
		}

		::System::String* GetSecureFileName(::System::String* filename)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET))(this, filename);
		}

		::System::String* GetSecureFileName_1(::System::String* filename, ::System::Boolean full)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_1_OFFSET))(this, filename, full);
		}
	};
}
