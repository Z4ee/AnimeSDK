#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BD4D3F0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FUSIONLOG_OFFSET UNITYSDK_OFFSET(0x1BD4D3E0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD4CB10)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x1BD4CBE0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD4CCA0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD4CA30)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD4CAA0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BD4D2E0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4C990)

namespace System::IO
{
	inline static constexpr unsigned int FileNotFoundException_TypeDefinitionIndex = 671;

	class FileNotFoundException : public ::System::IO::IOException
	{
	public:
		::System::String* _fileName; // 0x90
		::System::String* _fusionLog; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* get_FusionLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FUSIONLOG_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
