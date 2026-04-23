#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileOptions.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/IO/MonoFileType.h"
#include "unitysdk/System/IO/MonoIOError.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define SYSTEM_IO_MONOIO_CLOSE_OFFSET UNITYSDK_OFFSET(0x17964B70)
#define SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET UNITYSDK_OFFSET(0x17969630)
#define SYSTEM_IO_MONOIO_COPYFILE_OFFSET UNITYSDK_OFFSET(0x17969620)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x17969590)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17969580)
#define SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x17969A20)
#define SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET UNITYSDK_OFFSET(0x17969660)
#define SYSTEM_IO_MONOIO_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x17969650)
#define SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET UNITYSDK_OFFSET(0x17969500)
#define SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x17969A70)
#define SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17969770)
#define SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET UNITYSDK_OFFSET(0x17969750)
#define SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET UNITYSDK_OFFSET(0x179697B0)
#define SYSTEM_IO_MONOIO_EXISTS_OFFSET UNITYSDK_OFFSET(0x17969730)
#define SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET UNITYSDK_OFFSET(0x179696E0)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET UNITYSDK_OFFSET(0x179696C0)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x179696B0)
#define SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x179696D0)
#define SYSTEM_IO_MONOIO_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x179646D0)
#define SYSTEM_IO_MONOIO_FLUSH_OFFSET UNITYSDK_OFFSET(0x179698F0)
#define SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x179695C0)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x17961080)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x179693C0)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x17969680)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17969670)
#define SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET UNITYSDK_OFFSET(0x179697F0)
#define SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET UNITYSDK_OFFSET(0x179697E0)
#define SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET UNITYSDK_OFFSET(0x17961DA0)
#define SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET UNITYSDK_OFFSET(0x179696A0)
#define SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x17962690)
#define SYSTEM_IO_MONOIO_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x17969920)
#define SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x17969AE0)
#define SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET UNITYSDK_OFFSET(0x17969A10)
#define SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x17969A00)
#define SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x179699F0)
#define SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x17969AD0)
#define SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x17969AF0)
#define SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x17969AC0)
#define SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET UNITYSDK_OFFSET(0x17969600)
#define SYSTEM_IO_MONOIO_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x179695F0)
#define SYSTEM_IO_MONOIO_OPEN_1_OFFSET UNITYSDK_OFFSET(0x17961050)
#define SYSTEM_IO_MONOIO_OPEN_OFFSET UNITYSDK_OFFSET(0x17969800)
#define SYSTEM_IO_MONOIO_READ_1_OFFSET UNITYSDK_OFFSET(0x17964CF0)
#define SYSTEM_IO_MONOIO_READ_OFFSET UNITYSDK_OFFSET(0x17969810)
#define SYSTEM_IO_MONOIO_REMAPPATH_OFFSET UNITYSDK_OFFSET(0x17969B00)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x179695B0)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x179695A0)
#define SYSTEM_IO_MONOIO_SEEK_1_OFFSET UNITYSDK_OFFSET(0x179624D0)
#define SYSTEM_IO_MONOIO_SEEK_OFFSET UNITYSDK_OFFSET(0x179698B0)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x179695E0)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x179695D0)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x179669B0)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17969690)
#define SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x179644C0)
#define SYSTEM_IO_MONOIO_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x17969960)
#define SYSTEM_IO_MONOIO_WRITE_1_OFFSET UNITYSDK_OFFSET(0x179639E0)
#define SYSTEM_IO_MONOIO_WRITE_OFFSET UNITYSDK_OFFSET(0x17969880)
#define SYSTEM_IO_MONOIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17969B10)

namespace System::IO
{
	inline static constexpr unsigned int MonoIO_TypeDefinitionIndex = 720;

	class MonoIO : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_InvalidHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::System::Boolean* StaticGet_dump_handles()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0x3938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO__CCTOR_OFFSET))();
		}

		static ::System::Exception* GetException(::System::IO::MonoIOError error)
		{
			return ((::System::Exception*(*)(::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET))(error);
		}

		static ::System::Exception* GetException_1(::System::String* path, ::System::IO::MonoIOError error)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET))(path, error);
		}

		static ::System::Boolean CreateDirectory(::System::Char* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean CreateDirectory_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET))(path, error);
		}

		static ::System::Boolean RemoveDirectory(::System::Char* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean RemoveDirectory_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET))(path, error);
		}

		static ::System::String* GetCurrentDirectory(::System::IO::MonoIOError& error)
		{
			return ((::System::String*(*)(::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET))(error);
		}

		static ::System::Boolean SetCurrentDirectory(::System::Char* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean SetCurrentDirectory_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_1_OFFSET))(path, error);
		}

		static ::System::Boolean MoveFile(::System::Char* path, ::System::Char* dest, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_OFFSET))(path, dest, error);
		}

		static ::System::Boolean MoveFile_1(::System::String* path, ::System::String* dest, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET))(path, dest, error);
		}

		static ::System::Boolean CopyFile(::System::Char* path, ::System::Char* dest, ::System::Boolean overwrite, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Char*, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_OFFSET))(path, dest, overwrite, error);
		}

		static ::System::Boolean CopyFile_1(::System::String* path, ::System::String* dest, ::System::Boolean overwrite, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET))(path, dest, overwrite, error);
		}

		static ::System::Boolean DeleteFile(::System::Char* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_OFFSET))(path, error);
		}

		static ::System::Boolean DeleteFile_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET))(path, error);
		}

		static ::System::IO::FileAttributes GetFileAttributes(::System::Char* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::FileAttributes(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET))(path, error);
		}

		static ::System::IO::FileAttributes GetFileAttributes_1(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::FileAttributes(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET))(path, error);
		}

		static ::System::Boolean SetFileAttributes(::System::Char* path, ::System::IO::FileAttributes attrs, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET))(path, attrs, error);
		}

		static ::System::Boolean SetFileAttributes_1(::System::String* path, ::System::IO::FileAttributes attrs, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET))(path, attrs, error);
		}

		static ::System::IO::MonoFileType GetFileType(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::MonoFileType(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET))(handle, error);
		}

		static ::System::IO::MonoFileType GetFileType_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::IO::MonoFileType(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET))(safeHandle, error);
		}

		static ::System::IntPtr FindFirstFile(::System::Char* pathWithPattern, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::System::Char*, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET))(pathWithPattern, fileName, fileAttr, error);
		}

		static ::System::IntPtr FindFirstFile_1(::System::String* pathWithPattern, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET))(pathWithPattern, fileName, fileAttr, error);
		}

		static ::System::Boolean FindNextFile(::System::IntPtr hnd, ::System::String*& fileName, ::System::Int32& fileAttr, ::System::Int32& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET))(hnd, fileName, fileAttr, error);
		}

		static ::System::Boolean FindCloseFile(::System::IntPtr hnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET))(hnd);
		}

		static ::System::Boolean Exists(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTS_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsFile(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsDirectory(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET))(path, error);
		}

		static ::System::Boolean ExistsSymlink(::System::String* path, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET))(path, error);
		}

		static ::System::Boolean GetFileStat(::System::Char* path, ::System::IO::MonoIOStat& stat, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET))(path, stat, error);
		}

		static ::System::Boolean GetFileStat_1(::System::String* path, ::System::IO::MonoIOStat& stat, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET))(path, stat, error);
		}

		static ::System::IntPtr Open(::System::Char* filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ::System::IO::MonoIOError& error)
		{
			return ((::System::IntPtr(*)(::System::Char*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_OFFSET))(filename, mode, access, share, options, error);
		}

		static ::System::IntPtr Open_1(::System::String* filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ::System::IO::MonoIOError& error)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_1_OFFSET))(filename, mode, access, share, options, error);
		}

		static ::System::Boolean Close(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CLOSE_OFFSET))(handle, error);
		}

		static ::System::Int32 Read(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* dest, ::System::Int32 dest_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_OFFSET))(handle, dest, dest_offset, count, error);
		}

		static ::System::Int32 Read_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::Il2CppArray<::System::Byte>* dest, ::System::Int32 dest_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_1_OFFSET))(safeHandle, dest, dest_offset, count, error);
		}

		static ::System::Int32 Write(::System::IntPtr handle, ::Il2CppArray<::System::Byte>* src, ::System::Int32 src_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_OFFSET))(handle, src, src_offset, count, error);
		}

		static ::System::Int32 Write_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::Il2CppArray<::System::Byte>* src, ::System::Int32 src_offset, ::System::Int32 count, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_1_OFFSET))(safeHandle, src, src_offset, count, error);
		}

		static ::System::Int64 Seek(::System::IntPtr handle, ::System::Int64 offset, ::System::IO::SeekOrigin origin, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_OFFSET))(handle, offset, origin, error);
		}

		static ::System::Int64 Seek_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::Int64 offset, ::System::IO::SeekOrigin origin, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_1_OFFSET))(safeHandle, offset, origin, error);
		}

		static ::System::Boolean Flush(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FLUSH_OFFSET))(handle, error);
		}

		static ::System::Boolean Flush_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FLUSH_1_OFFSET))(safeHandle, error);
		}

		static ::System::Int64 GetLength(::System::IntPtr handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_OFFSET))(handle, error);
		}

		static ::System::Int64 GetLength_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET))(safeHandle, error);
		}

		static ::System::Boolean SetLength(::System::IntPtr handle, ::System::Int64 length, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_OFFSET))(handle, length, error);
		}

		static ::System::Boolean SetLength_1(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::System::Int64 length, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET))(safeHandle, length, error);
		}

		static ::System::IntPtr get_ConsoleOutput()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET))();
		}

		static ::System::IntPtr get_ConsoleInput()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET))();
		}

		static ::System::IntPtr get_ConsoleError()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET))();
		}

		static ::System::Boolean CreatePipe(::System::IntPtr& read_handle, ::System::IntPtr& write_handle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::IntPtr&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET))(read_handle, write_handle, error);
		}

		static ::System::Boolean DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ::System::IntPtr& target_handle, ::System::Int32 access, ::System::Int32 inherit, ::System::Int32 options, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET))(source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error);
		}

		static ::System::Char get_VolumeSeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_DirectorySeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_AltDirectorySeparatorChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET))();
		}

		static ::System::Char get_PathSeparator()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET))();
		}

		static ::System::Void DumpHandles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET))();
		}

		static ::System::Boolean RemapPath(::System::String* path, ::System::String*& newPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMAPPATH_OFFSET))(path, newPath);
		}
	};
}
