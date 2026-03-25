#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/FileShare.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class FileStream; }
namespace System::IO { class StreamReader; }
namespace System::IO { class StreamWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_FILE_APPENDALLLINES_OFFSET UNITYSDK_OFFSET(0x16330280)
#define SYSTEM_IO_FILE_APPENDALLTEXT_OFFSET UNITYSDK_OFFSET(0x1632E4E0)
#define SYSTEM_IO_FILE_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1632E610)
#define SYSTEM_IO_FILE_COPY_1_OFFSET UNITYSDK_OFFSET(0x1632E680)
#define SYSTEM_IO_FILE_COPY_OFFSET UNITYSDK_OFFSET(0x1632E670)
#define SYSTEM_IO_FILE_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x1632EEF0)
#define SYSTEM_IO_FILE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1632EE70)
#define SYSTEM_IO_FILE_CREATE_OFFSET UNITYSDK_OFFSET(0x1632EDF0)
#define SYSTEM_IO_FILE_DELETE_OFFSET UNITYSDK_OFFSET(0x1632B720)
#define SYSTEM_IO_FILE_EXISTS_OFFSET UNITYSDK_OFFSET(0x1632AFD0)
#define SYSTEM_IO_FILE_FILLATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x16330DB0)
#define SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1632ED90)
#define SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x1632EF50)
#define SYSTEM_IO_FILE_GET_DEFAULTLOCALFILETIME_OFFSET UNITYSDK_OFFSET(0x1632F0A0)
#define SYSTEM_IO_FILE_MOVE_OFFSET UNITYSDK_OFFSET(0x1632F130)
#define SYSTEM_IO_FILE_OPENREAD_OFFSET UNITYSDK_OFFSET(0x1632F6A0)
#define SYSTEM_IO_FILE_OPENTEXT_OFFSET UNITYSDK_OFFSET(0x1632F720)
#define SYSTEM_IO_FILE_OPENWRITE_OFFSET UNITYSDK_OFFSET(0x1632F750)
#define SYSTEM_IO_FILE_OPEN_1_OFFSET UNITYSDK_OFFSET(0x1632F5A0)
#define SYSTEM_IO_FILE_OPEN_2_OFFSET UNITYSDK_OFFSET(0x1632F620)
#define SYSTEM_IO_FILE_OPEN_OFFSET UNITYSDK_OFFSET(0x1632F520)
#define SYSTEM_IO_FILE_READALLBYTES_OFFSET UNITYSDK_OFFSET(0x1632F850)
#define SYSTEM_IO_FILE_READALLLINES_1_OFFSET UNITYSDK_OFFSET(0x1632FB30)
#define SYSTEM_IO_FILE_READALLLINES_OFFSET UNITYSDK_OFFSET(0x1632FA40)
#define SYSTEM_IO_FILE_READALLTEXT_1_OFFSET UNITYSDK_OFFSET(0x1632FD50)
#define SYSTEM_IO_FILE_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x1632FC50)
#define SYSTEM_IO_FILE_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1632F7D0)
#define SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x1632FE80)
#define SYSTEM_IO_FILE_WRITEALLLINES_1_OFFSET UNITYSDK_OFFSET(0x16330A00)
#define SYSTEM_IO_FILE_WRITEALLLINES_OFFSET UNITYSDK_OFFSET(0x16330640)
#define SYSTEM_IO_FILE_WRITEALLTEXT_1_OFFSET UNITYSDK_OFFSET(0x16330170)
#define SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET UNITYSDK_OFFSET(0x16330030)

namespace System::IO
{
	inline static constexpr unsigned int File_TypeDefinitionIndex = 709;

	class File : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::DateTime>* StaticGet_defaultLocalFileTime()
		{
			return (::System::Nullable_1<::System::DateTime>*)Il2CppClass::FromTypeDefinitionIndex(File_TypeDefinitionIndex)->GetStaticField(0x2960);
		}

		static ::System::Void AppendAllText(::System::String* path, ::System::String* contents)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDALLTEXT_OFFSET))(path, contents);
		}

		static ::System::IO::StreamWriter* AppendText(::System::String* path)
		{
			return ((::System::IO::StreamWriter*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDTEXT_OFFSET))(path);
		}

		static ::System::Void Copy(::System::String* sourceFileName, ::System::String* destFileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_OFFSET))(sourceFileName, destFileName);
		}

		static ::System::Void Copy_1(::System::String* sourceFileName, ::System::String* destFileName, ::System::Boolean overwrite)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_1_OFFSET))(sourceFileName, destFileName, overwrite);
		}

		static ::System::IO::FileStream* Create(::System::String* path)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_OFFSET))(path);
		}

		static ::System::IO::FileStream* Create_1(::System::String* path, ::System::Int32 bufferSize)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_1_OFFSET))(path, bufferSize);
		}

		static ::System::IO::StreamWriter* CreateText(::System::String* path)
		{
			return ((::System::IO::StreamWriter*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATETEXT_OFFSET))(path);
		}

		static ::System::Void Delete(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_DELETE_OFFSET))(path);
		}

		static ::System::Boolean Exists(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_EXISTS_OFFSET))(path);
		}

		static ::System::IO::FileAttributes GetAttributes(::System::String* path)
		{
			return ((::System::IO::FileAttributes(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET))(path);
		}

		static ::System::DateTime GetLastWriteTime(::System::String* path)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET))(path);
		}

		static ::System::Void Move(::System::String* sourceFileName, ::System::String* destFileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_MOVE_OFFSET))(sourceFileName, destFileName);
		}

		static ::System::IO::FileStream* Open(::System::String* path, ::System::IO::FileMode mode)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_OFFSET))(path, mode);
		}

		static ::System::IO::FileStream* Open_1(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_1_OFFSET))(path, mode, access);
		}

		static ::System::IO::FileStream* Open_2(::System::String* path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_2_OFFSET))(path, mode, access, share);
		}

		static ::System::IO::FileStream* OpenRead(::System::String* path)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENREAD_OFFSET))(path);
		}

		static ::System::IO::StreamReader* OpenText(::System::String* path)
		{
			return ((::System::IO::StreamReader*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENTEXT_OFFSET))(path);
		}

		static ::System::IO::FileStream* OpenWrite(::System::String* path)
		{
			return ((::System::IO::FileStream*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENWRITE_OFFSET))(path);
		}

		static ::System::Void SetAttributes(::System::String* path, ::System::IO::FileAttributes fileAttributes)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::FileAttributes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_SETATTRIBUTES_OFFSET))(path, fileAttributes);
		}

		static ::Il2CppArray<::System::Byte>* ReadAllBytes(::System::String* path)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLBYTES_OFFSET))(path);
		}

		static ::Il2CppArray<::System::String*>* ReadAllLines(::System::String* path)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLLINES_OFFSET))(path);
		}

		static ::Il2CppArray<::System::String*>* ReadAllLines_1(::System::IO::StreamReader* reader)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLLINES_1_OFFSET))(reader);
		}

		static ::System::String* ReadAllText(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_OFFSET))(path);
		}

		static ::System::String* ReadAllText_1(::System::String* path, ::System::Text::Encoding* encoding)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_1_OFFSET))(path, encoding);
		}

		static ::System::Void WriteAllBytes(::System::String* path, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET))(path, bytes);
		}

		static ::System::Void WriteAllText(::System::String* path, ::System::String* contents)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET))(path, contents);
		}

		static ::System::Void WriteAllText_1(::System::String* path, ::System::String* contents, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLTEXT_1_OFFSET))(path, contents, encoding);
		}

		static ::System::DateTime get_DefaultLocalFileTime()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GET_DEFAULTLOCALFILETIME_OFFSET))();
		}

		static ::System::Void AppendAllLines(::System::String* path, ::System::Collections::Generic::IEnumerable_1<::System::String*>* contents)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_APPENDALLLINES_OFFSET))(path, contents);
		}

		static ::System::Void WriteAllLines(::System::String* path, ::System::Collections::Generic::IEnumerable_1<::System::String*>* contents)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLLINES_OFFSET))(path, contents);
		}

		static ::System::Void WriteAllLines_1(::System::String* path, ::System::Collections::Generic::IEnumerable_1<::System::String*>* contents, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLLINES_1_OFFSET))(path, contents, encoding);
		}

		static ::System::Int32 FillAttributeInfo(::System::String* path, ::System::IO::MonoIOStat& data, ::System::Boolean tryagain, ::System::Boolean returnErrorOnNotFound)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IO::MonoIOStat&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_FILLATTRIBUTEINFO_OFFSET))(path, data, tryagain, returnErrorOnNotFound);
		}
	};
}
