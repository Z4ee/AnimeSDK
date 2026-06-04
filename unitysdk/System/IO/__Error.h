#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO___ERROR_ENDOFFILE_OFFSET UNITYSDK_OFFSET(0x18718970)
#define SYSTEM_IO___ERROR_ENDREADCALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x187212E0)
#define SYSTEM_IO___ERROR_ENDWRITECALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x18721340)
#define SYSTEM_IO___ERROR_FILENOTOPEN_OFFSET UNITYSDK_OFFSET(0x1872B9F0)
#define SYSTEM_IO___ERROR_GETDISPLAYABLEPATH_OFFSET UNITYSDK_OFFSET(0x1872BA50)
#define SYSTEM_IO___ERROR_MEMORYSTREAMNOTEXPANDABLE_OFFSET UNITYSDK_OFFSET(0x18718CA0)
#define SYSTEM_IO___ERROR_READERCLOSED_OFFSET UNITYSDK_OFFSET(0x18722060)
#define SYSTEM_IO___ERROR_READNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1871F1F0)
#define SYSTEM_IO___ERROR_STREAMISCLOSED_OFFSET UNITYSDK_OFFSET(0x187187F0)
#define SYSTEM_IO___ERROR_WINIOERROR_OFFSET UNITYSDK_OFFSET(0x187176A0)
#define SYSTEM_IO___ERROR_WRITENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x18718570)
#define SYSTEM_IO___ERROR_WRITERCLOSED_OFFSET UNITYSDK_OFFSET(0x18724480)
#define SYSTEM_IO___ERROR_WRONGASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x18721280)

namespace System::IO
{
	inline static constexpr unsigned int __Error_TypeDefinitionIndex = 658;

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

		static ::System::String* GetDisplayablePath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_GETDISPLAYABLEPATH_OFFSET))(a1, a2);
		}

		static ::System::Void WinIOError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO___ERROR_WINIOERROR_OFFSET))(a1, a2);
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
