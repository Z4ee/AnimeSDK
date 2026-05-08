#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_WEBUTILITY_URLDECODER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x1B1F3110)
#define SYSTEM_NET_WEBUTILITY_URLDECODER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x1B1F3070)
#define SYSTEM_NET_WEBUTILITY_URLDECODER_FLUSHBYTES_OFFSET UNITYSDK_OFFSET(0x1B1F2FC0)
#define SYSTEM_NET_WEBUTILITY_URLDECODER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B1F31A0)
#define SYSTEM_NET_WEBUTILITY_URLDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F3020)

namespace System::Net
{
	inline static constexpr unsigned int WebUtility_UrlDecoder_TypeDefinitionIndex = 3362;

	class WebUtility_UrlDecoder : public ::System::Object
	{
	public:
		::System::Text::Encoding* _encoding; // 0x10
		::Il2CppArray<::System::Char>* _charBuffer; // 0x18
		::Il2CppArray<::System::Byte>* _byteBuffer; // 0x20
		::System::Int32 _numBytes; // 0x28
		::System::Int32 _numChars; // 0x2C
		::System::Int32 _bufferSize; // 0x30

		::System::Void _ctor(::System::Int32 bufferSize, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODER__CTOR_OFFSET))(this, bufferSize, encoding);
		}

		::System::Void FlushBytes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODER_FLUSHBYTES_OFFSET))(this);
		}

		::System::Void AddChar(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODER_ADDCHAR_OFFSET))(this, ch);
		}

		::System::Void AddByte(::System::Byte b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODER_ADDBYTE_OFFSET))(this, b);
		}

		::System::String* GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODER_GETSTRING_OFFSET))(this);
		}
	};
}
