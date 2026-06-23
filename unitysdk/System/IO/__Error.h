#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO___ERROR_ENDOFFILE_OFFSET UNITYSDK_OFFSET(0x1CD8E190)
#define SYSTEM_IO___ERROR_ENDREADCALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x1CD8DE70)
#define SYSTEM_IO___ERROR_ENDWRITECALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x1CD8DFD0)
#define SYSTEM_IO___ERROR_FILENOTOPEN_OFFSET UNITYSDK_OFFSET(0x1CD8E1F0)
#define SYSTEM_IO___ERROR_GETDISPLAYABLEPATH_OFFSET UNITYSDK_OFFSET(0x1CD8E3D0)
#define SYSTEM_IO___ERROR_MEMORYSTREAMNOTEXPANDABLE_OFFSET UNITYSDK_OFFSET(0x1CD8E2B0)
#define SYSTEM_IO___ERROR_READERCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD8E310)
#define SYSTEM_IO___ERROR_READNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1CD8E370)
#define SYSTEM_IO___ERROR_STREAMISCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD8E250)
#define SYSTEM_IO___ERROR_WINIOERROR_OFFSET UNITYSDK_OFFSET(0x1CD8E4A0)
#define SYSTEM_IO___ERROR_WRITENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1CD8EAF0)
#define SYSTEM_IO___ERROR_WRITERCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD8EB50)
#define SYSTEM_IO___ERROR_WRONGASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1CD8DE10)

namespace System::IO
{
	inline static constexpr unsigned int __Error_TypeDefinitionIndex = 627;

	class __Error : public ::System::Object
	{
	public:
		static ::System::Void EndOfFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_ENDOFFILE_OFFSET))();
		}

		static ::System::Void FileNotOpen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_FILENOTOPEN_OFFSET))();
		}

		static ::System::Void StreamIsClosed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_STREAMISCLOSED_OFFSET))();
		}

		static ::System::Void MemoryStreamNotExpandable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_MEMORYSTREAMNOTEXPANDABLE_OFFSET))();
		}

		static ::System::Void ReaderClosed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_READERCLOSED_OFFSET))();
		}

		static ::System::Void ReadNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_READNOTSUPPORTED_OFFSET))();
		}

		static ::System::Void WrongAsyncResult()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_WRONGASYNCRESULT_OFFSET))();
		}

		static ::System::Void EndReadCalledTwice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_ENDREADCALLEDTWICE_OFFSET))();
		}

		static ::System::Void EndWriteCalledTwice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_ENDWRITECALLEDTWICE_OFFSET))();
		}

		static ::System::String* GetDisplayablePath(::System::String* path, ::System::Boolean isInvalidPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_GETDISPLAYABLEPATH_OFFSET))(path, isInvalidPath);
		}

		static ::System::Void WinIOError(::System::Int32 errorCode, ::System::String* maybeFullPath)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_WINIOERROR_OFFSET))(errorCode, maybeFullPath);
		}

		static ::System::Void WriteNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_WRITENOTSUPPORTED_OFFSET))();
		}

		static ::System::Void WriterClosed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_WRITERCLOSED_OFFSET))();
		}
	};
}
