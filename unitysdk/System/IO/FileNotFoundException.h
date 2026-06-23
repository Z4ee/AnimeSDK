#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D05CD90)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1D05C670)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x1D05C740)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D05C800)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D05C5E0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D05A2D0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D05CC90)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C520)

namespace System::IO
{
	inline static constexpr unsigned int FileNotFoundException_TypeDefinitionIndex = 637;

	class FileNotFoundException : public ::System::IO::IOException
	{
	public:
		::System::String* _fusionLog; // 0x90
		::System::String* _fileName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, message, fileName);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, info, context);
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

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
