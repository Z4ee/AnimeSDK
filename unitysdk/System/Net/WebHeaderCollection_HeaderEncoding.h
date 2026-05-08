#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_DECODEUTF8FROMSTRING_OFFSET UNITYSDK_OFFSET(0x19E3BFB0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x19E3BD90)
#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x19E3BEA0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x19E3BDB0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x19E3BC40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x19E3BC10)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_HeaderEncoding_TypeDefinitionIndex = 3343;

	class WebHeaderCollection_HeaderEncoding : public ::System::Object
	{
	public:
		static ::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETSTRING_OFFSET))(bytes, byteIndex, byteCount);
		}

		static ::System::String* GetString_1(::System::Byte* pBytes, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETSTRING_1_OFFSET))(pBytes, byteCount);
		}

		static ::System::Int32 GetByteCount(::System::String* myString)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTECOUNT_OFFSET))(myString);
		}

		static ::System::Void GetBytes(::System::String* myString, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTES_OFFSET))(myString, charIndex, charCount, bytes, byteIndex);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::String* myString)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_GETBYTES_1_OFFSET))(myString);
		}

		static ::System::String* DecodeUtf8FromString(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_HEADERENCODING_DECODEUTF8FROMSTRING_OFFSET))(input);
		}
	};
}
