#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Configuration/UnicodeDecodingConformance.h"
#include "unitysdk/System/Net/Configuration/UnicodeEncodingConformance.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET UNITYSDK_OFFSET(0x1E9DE730)
#define SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1E9DE660)
#define SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1E9DEB40)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1E9DDFF0)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_OFFSET UNITYSDK_OFFSET(0x1E9DDDA0)
#define SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET UNITYSDK_OFFSET(0x1E9DDE90)
#define SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9DE790)
#define SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1E9DEC80)
#define SYSTEM_NET_WEBUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DECF0)

namespace System::Net
{
	inline static constexpr unsigned int WebUtility_TypeDefinitionIndex = 2773;

	class WebUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet__htmlEntityEndingChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x21580);
		}
		static ::System::Net::Configuration::UnicodeEncodingConformance* StaticGet__htmlEncodeConformance()
		{
			return (::System::Net::Configuration::UnicodeEncodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0xABB0);
		}
		static ::System::Net::Configuration::UnicodeDecodingConformance* StaticGet__htmlDecodeConformance()
		{
			return (::System::Net::Configuration::UnicodeDecodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0xABB4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY__CCTOR_OFFSET))();
		}

		static ::System::String* HtmlEncode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENCODE_OFFSET))(a1);
		}

		static ::System::Void HtmlEncode_1(::System::String* a1, ::System::IO::TextWriter* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENCODE_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 IndexOfHtmlEncodingChars(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET))(a1, a2);
		}

		static ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance()
		{
			return ((::System::Net::Configuration::UnicodeEncodingConformance(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET))();
		}

		static ::System::String* UrlDecodeInternal(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::String* UrlDecode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET))(a1);
		}

		static ::System::Int32 GetNextUnicodeScalarValueFromUtf16Surrogate(::System::Char*& a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::System::Char*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET))(a1, a2);
		}

		static ::System::Int32 HexToInt(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET))(a1);
		}
	};
}
