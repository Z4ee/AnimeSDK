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

#define SYSTEM_IO_MONOIO_CLOSE_OFFSET UNITYSDK_OFFSET(0x18716AD0)
#define SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET UNITYSDK_OFFSET(0x1871A960)
#define SYSTEM_IO_MONOIO_COPYFILE_OFFSET UNITYSDK_OFFSET(0x1871A950)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1871A8C0)
#define SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1871A8B0)
#define SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x1871AD50)
#define SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET UNITYSDK_OFFSET(0x1871A990)
#define SYSTEM_IO_MONOIO_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1871A980)
#define SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET UNITYSDK_OFFSET(0x1871A830)
#define SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1871ADA0)
#define SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1871AAA0)
#define SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET UNITYSDK_OFFSET(0x1871AA80)
#define SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET UNITYSDK_OFFSET(0x1871AAE0)
#define SYSTEM_IO_MONOIO_EXISTS_OFFSET UNITYSDK_OFFSET(0x1871AA60)
#define SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET UNITYSDK_OFFSET(0x1871AA10)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET UNITYSDK_OFFSET(0x1871A9F0)
#define SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x1871A9E0)
#define SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x1871AA00)
#define SYSTEM_IO_MONOIO_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x18716600)
#define SYSTEM_IO_MONOIO_FLUSH_OFFSET UNITYSDK_OFFSET(0x1871AC20)
#define SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1871A8F0)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x187130A0)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1871A6F0)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1871A9B0)
#define SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1871A9A0)
#define SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET UNITYSDK_OFFSET(0x1871AB20)
#define SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET UNITYSDK_OFFSET(0x1871AB10)
#define SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET UNITYSDK_OFFSET(0x18713D40)
#define SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET UNITYSDK_OFFSET(0x1871A9D0)
#define SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x18714600)
#define SYSTEM_IO_MONOIO_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1871AC50)
#define SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1871AE10)
#define SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET UNITYSDK_OFFSET(0x1871AD40)
#define SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x1871AD30)
#define SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1871AD20)
#define SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1871AE00)
#define SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1871AE20)
#define SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x1871ADF0)
#define SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET UNITYSDK_OFFSET(0x1871A930)
#define SYSTEM_IO_MONOIO_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x1871A920)
#define SYSTEM_IO_MONOIO_OPEN_1_OFFSET UNITYSDK_OFFSET(0x18713070)
#define SYSTEM_IO_MONOIO_OPEN_OFFSET UNITYSDK_OFFSET(0x1871AB30)
#define SYSTEM_IO_MONOIO_READ_1_OFFSET UNITYSDK_OFFSET(0x18716C50)
#define SYSTEM_IO_MONOIO_READ_OFFSET UNITYSDK_OFFSET(0x1871AB40)
#define SYSTEM_IO_MONOIO_REMAPPATH_OFFSET UNITYSDK_OFFSET(0x1871AE30)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1871A8E0)
#define SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1871A8D0)
#define SYSTEM_IO_MONOIO_SEEK_1_OFFSET UNITYSDK_OFFSET(0x18714440)
#define SYSTEM_IO_MONOIO_SEEK_OFFSET UNITYSDK_OFFSET(0x1871ABE0)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1871A910)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1871A900)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x18717EE0)
#define SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1871A9C0)
#define SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET UNITYSDK_OFFSET(0x187163F0)
#define SYSTEM_IO_MONOIO_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1871AC90)
#define SYSTEM_IO_MONOIO_WRITE_1_OFFSET UNITYSDK_OFFSET(0x187158D0)
#define SYSTEM_IO_MONOIO_WRITE_OFFSET UNITYSDK_OFFSET(0x1871ABB0)
#define SYSTEM_IO_MONOIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1871AE40)

namespace System::IO
{
	inline static constexpr unsigned int MonoIO_TypeDefinitionIndex = 719;

	class MonoIO : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_dump_handles()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		static ::System::IntPtr* StaticGet_InvalidHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MonoIO_TypeDefinitionIndex)->GetStaticField(0x3688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO__CCTOR_OFFSET))();
		}

		static ::System::Exception* GetException(::System::IO::MonoIOError a1)
		{
			return ((::System::Exception*(*)(::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET))(a1);
		}

		static ::System::Exception* GetException_1(::System::String* a1, ::System::IO::MonoIOError a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::IO::MonoIOError))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean CreateDirectory(::System::Char* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_OFFSET))(a1, a2);
		}

		static ::System::Boolean CreateDirectory_1(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEDIRECTORY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveDirectory(::System::Char* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveDirectory_1(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMOVEDIRECTORY_1_OFFSET))(a1, a2);
		}

		static ::System::String* GetCurrentDirectory(::System::IO::MonoIOError& a1)
		{
			return ((::System::String*(*)(::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET))(a1);
		}

		static ::System::Boolean SetCurrentDirectory(::System::Char* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetCurrentDirectory_1(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean MoveFile(::System::Char* a1, ::System::Char* a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MoveFile_1(::System::String* a1, ::System::String* a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_MOVEFILE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CopyFile(::System::Char* a1, ::System::Char* a2, ::System::Boolean a3, ::System::IO::MonoIOError& a4)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Char*, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CopyFile_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::IO::MonoIOError& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_COPYFILE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DeleteFile(::System::Char* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_OFFSET))(a1, a2);
		}

		static ::System::Boolean DeleteFile_1(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DELETEFILE_1_OFFSET))(a1, a2);
		}

		static ::System::IO::FileAttributes GetFileAttributes(::System::Char* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::IO::FileAttributes(*)(::System::Char*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_OFFSET))(a1, a2);
		}

		static ::System::IO::FileAttributes GetFileAttributes_1(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::IO::FileAttributes(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILEATTRIBUTES_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetFileAttributes(::System::Char* a1, ::System::IO::FileAttributes a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetFileAttributes_1(::System::String* a1, ::System::IO::FileAttributes a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::FileAttributes, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETFILEATTRIBUTES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::MonoFileType GetFileType(::System::IntPtr a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::IO::MonoFileType(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET))(a1, a2);
		}

		static ::System::IO::MonoFileType GetFileType_1(::System::Runtime::InteropServices::SafeHandle* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::IO::MonoFileType(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_1_OFFSET))(a1, a2);
		}

		static ::System::IntPtr FindFirstFile(::System::Char* a1, ::System::String*& a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::IntPtr(*)(::System::Char*, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr FindFirstFile_1(::System::String* a1, ::System::String*& a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDFIRSTFILE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FindNextFile(::System::IntPtr a1, ::System::String*& a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDNEXTFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FindCloseFile(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET))(a1);
		}

		static ::System::Boolean Exists(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ExistsFile(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSFILE_OFFSET))(a1, a2);
		}

		static ::System::Boolean ExistsDirectory(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSDIRECTORY_OFFSET))(a1, a2);
		}

		static ::System::Boolean ExistsSymlink(::System::String* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_EXISTSSYMLINK_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetFileStat(::System::Char* a1, ::System::IO::MonoIOStat& a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetFileStat_1(::System::String* a1, ::System::IO::MonoIOStat& a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IO::MonoIOStat&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILESTAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr Open(::System::Char* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::IO::FileOptions a5, ::System::IO::MonoIOError& a6)
		{
			return ((::System::IntPtr(*)(::System::Char*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::IntPtr Open_1(::System::String* a1, ::System::IO::FileMode a2, ::System::IO::FileAccess a3, ::System::IO::FileShare a4, ::System::IO::FileOptions a5, ::System::IO::MonoIOError& a6)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean Close(::System::IntPtr a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CLOSE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Read(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IO::MonoIOError& a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Read_1(::System::Runtime::InteropServices::SafeHandle* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IO::MonoIOError& a5)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Write(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IO::MonoIOError& a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Write_1(::System::Runtime::InteropServices::SafeHandle* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IO::MonoIOError& a5)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int64 Seek(::System::IntPtr a1, ::System::Int64 a2, ::System::IO::SeekOrigin a3, ::System::IO::MonoIOError& a4)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 Seek_1(::System::Runtime::InteropServices::SafeHandle* a1, ::System::Int64 a2, ::System::IO::SeekOrigin a3, ::System::IO::MonoIOError& a4)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::SeekOrigin, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Flush(::System::IntPtr a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FLUSH_OFFSET))(a1, a2);
		}

		static ::System::Boolean Flush_1(::System::Runtime::InteropServices::SafeHandle* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FLUSH_1_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetLength(::System::IntPtr a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetLength_1(::System::Runtime::InteropServices::SafeHandle* a1, ::System::IO::MonoIOError& a2)
		{
			return ((::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetLength(::System::IntPtr a1, ::System::Int64 a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetLength_1(::System::Runtime::InteropServices::SafeHandle* a1, ::System::Int64 a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_1_OFFSET))(a1, a2, a3);
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

		static ::System::Boolean CreatePipe(::System::IntPtr& a1, ::System::IntPtr& a2, ::System::IO::MonoIOError& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::IntPtr&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CREATEPIPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DuplicateHandle(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3, ::System::IntPtr& a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::IO::MonoIOError& a8)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
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

		static ::System::Boolean RemapPath(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMAPPATH_OFFSET))(a1, a2);
		}
	};
}
