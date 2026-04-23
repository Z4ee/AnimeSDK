#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Configuration/UnicodeDecodingConformance.h"
#include "unitysdk/System/Net/Configuration/UnicodeEncodingConformance.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET UNITYSDK_OFFSET(0x1A16A7B0)
#define SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A16A6E0)
#define SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1A16ABF0)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1A16A3E0)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_OFFSET UNITYSDK_OFFSET(0x1A16A190)
#define SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET UNITYSDK_OFFSET(0x1A16A280)
#define SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A16A810)
#define SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1A16ADD0)
#define SYSTEM_NET_WEBUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A16AEC0)

namespace System::Net
{
	inline static constexpr unsigned int WebUtility_TypeDefinitionIndex = 2762;

	class WebUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet__htmlEntityEndingChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x15110);
		}
		static ::System::Net::Configuration::UnicodeEncodingConformance* StaticGet__htmlEncodeConformance()
		{
			return (::System::Net::Configuration::UnicodeEncodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x5EB0);
		}
		static ::System::Net::Configuration::UnicodeDecodingConformance* StaticGet__htmlDecodeConformance()
		{
			return (::System::Net::Configuration::UnicodeDecodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x5EB4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY__CCTOR_OFFSET))();
		}

		static ::System::String* HtmlEncode(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENCODE_OFFSET))(value);
		}

		static ::System::Void HtmlEncode_1(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENCODE_1_OFFSET))(value, output);
		}

		static ::System::Int32 IndexOfHtmlEncodingChars(::System::String* s, ::System::Int32 startPos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET))(s, startPos);
		}

		static ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance()
		{
			return ((::System::Net::Configuration::UnicodeEncodingConformance(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET))();
		}

		static ::System::String* UrlDecodeInternal(::System::String* value, ::System::Text::Encoding* encoding)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET))(value, encoding);
		}

		static ::System::String* UrlDecode(::System::String* encodedValue)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET))(encodedValue);
		}

		static ::System::Int32 GetNextUnicodeScalarValueFromUtf16Surrogate(::System::Char*& pch, ::System::Int32& charsRemaining)
		{
			return ((::System::Int32(*)(::System::Char*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET))(pch, charsRemaining);
		}

		static ::System::Int32 HexToInt(::System::Char h)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET))(h);
		}
	};
}
