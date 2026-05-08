#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Configuration/UnicodeDecodingConformance.h"
#include "unitysdk/System/Net/Configuration/UnicodeEncodingConformance.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_WEBUTILITY_CONVERTSMPTOUTF16_OFFSET UNITYSDK_OFFSET(0x193C9390)
#define SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET UNITYSDK_OFFSET(0x193C8900)
#define SYSTEM_NET_WEBUTILITY_GET_HTMLDECODECONFORMANCE_OFFSET UNITYSDK_OFFSET(0x193C92C0)
#define SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET UNITYSDK_OFFSET(0x193C8830)
#define SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x193CA180)
#define SYSTEM_NET_WEBUTILITY_HTMLDECODE_1_OFFSET UNITYSDK_OFFSET(0x193C8C10)
#define SYSTEM_NET_WEBUTILITY_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x193C8960)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_1_OFFSET UNITYSDK_OFFSET(0x193C8470)
#define SYSTEM_NET_WEBUTILITY_HTMLENCODE_OFFSET UNITYSDK_OFFSET(0x193C8220)
#define SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET UNITYSDK_OFFSET(0x193C8310)
#define SYSTEM_NET_WEBUTILITY_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x193C9AD0)
#define SYSTEM_NET_WEBUTILITY_ISURLSAFECHAR_OFFSET UNITYSDK_OFFSET(0x193C9A90)
#define SYSTEM_NET_WEBUTILITY_STRINGREQUIRESHTMLDECODING_OFFSET UNITYSDK_OFFSET(0x193C8A60)
#define SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x193CA1C0)
#define SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x193C9E00)
#define SYSTEM_NET_WEBUTILITY_URLDECODETOBYTES_OFFSET UNITYSDK_OFFSET(0x193CA5A0)
#define SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x193CA470)
#define SYSTEM_NET_WEBUTILITY_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x193C9D90)
#define SYSTEM_NET_WEBUTILITY_URLENCODE_1_OFFSET UNITYSDK_OFFSET(0x193C9520)
#define SYSTEM_NET_WEBUTILITY_URLENCODE_2_OFFSET UNITYSDK_OFFSET(0x193C9AE0)
#define SYSTEM_NET_WEBUTILITY_URLENCODE_OFFSET UNITYSDK_OFFSET(0x193C93D0)
#define SYSTEM_NET_WEBUTILITY_VALIDATEURLENCODINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x193C99A0)
#define SYSTEM_NET_WEBUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x193CA610)

namespace System::Net
{
	inline static constexpr unsigned int WebUtility_TypeDefinitionIndex = 3361;

	class WebUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet__htmlEntityEndingChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x3370);
		}
		static ::System::Net::Configuration::UnicodeDecodingConformance* StaticGet__htmlDecodeConformance()
		{
			return (::System::Net::Configuration::UnicodeDecodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x12E0);
		}
		static ::System::Net::Configuration::UnicodeEncodingConformance* StaticGet__htmlEncodeConformance()
		{
			return (::System::Net::Configuration::UnicodeEncodingConformance*)Il2CppClass::FromTypeDefinitionIndex(WebUtility_TypeDefinitionIndex)->GetStaticField(0x12E4);
		}
		// static const ::System::Char HIGH_SURROGATE_START; // 0x0
		// static const ::System::Char LOW_SURROGATE_START; // 0x0
		// static const ::System::Char LOW_SURROGATE_END; // 0x0
		// static const ::System::Int32 UNICODE_PLANE00_END = 0xFFFF; // 0x0
		// static const ::System::Int32 UNICODE_PLANE01_START = 0x10000; // 0x0
		// static const ::System::Int32 UNICODE_PLANE16_END = 0x10FFFF; // 0x0
		// static const ::System::Int32 UnicodeReplacementChar = 0xFFFD; // 0x0

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

		static ::System::String* HtmlDecode(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLDECODE_OFFSET))(value);
		}

		static ::System::Void HtmlDecode_1(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLDECODE_1_OFFSET))(value, output);
		}

		static ::System::Int32 IndexOfHtmlEncodingChars(::System::String* s, ::System::Int32 startPos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_INDEXOFHTMLENCODINGCHARS_OFFSET))(s, startPos);
		}

		static ::System::Net::Configuration::UnicodeDecodingConformance get_HtmlDecodeConformance()
		{
			return ((::System::Net::Configuration::UnicodeDecodingConformance(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GET_HTMLDECODECONFORMANCE_OFFSET))();
		}

		static ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance()
		{
			return ((::System::Net::Configuration::UnicodeEncodingConformance(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GET_HTMLENCODECONFORMANCE_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* UrlEncode(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean alwaysCreateNewReturnValue)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLENCODE_OFFSET))(bytes, offset, count, alwaysCreateNewReturnValue);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncode_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLENCODE_1_OFFSET))(bytes, offset, count);
		}

		static ::System::String* UrlEncode_2(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLENCODE_2_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* value, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLENCODETOBYTES_OFFSET))(value, offset, count);
		}

		static ::System::String* UrlDecodeInternal(::System::String* value, ::System::Text::Encoding* encoding)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_OFFSET))(value, encoding);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeInternal_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODEINTERNAL_1_OFFSET))(bytes, offset, count);
		}

		static ::System::String* UrlDecode(::System::String* encodedValue)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODE_OFFSET))(encodedValue);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeToBytes(::Il2CppArray<::System::Byte>* encodedValue, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_URLDECODETOBYTES_OFFSET))(encodedValue, offset, count);
		}

		static ::System::Void ConvertSmpToUtf16(::System::UInt32 smpChar, ::System::Char& leadingSurrogate, ::System::Char& trailingSurrogate)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Char&, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_CONVERTSMPTOUTF16_OFFSET))(smpChar, leadingSurrogate, trailingSurrogate);
		}

		static ::System::Int32 GetNextUnicodeScalarValueFromUtf16Surrogate(::System::Char*& pch, ::System::Int32& charsRemaining)
		{
			return ((::System::Int32(*)(::System::Char*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_GETNEXTUNICODESCALARVALUEFROMUTF16SURROGATE_OFFSET))(pch, charsRemaining);
		}

		static ::System::Int32 HexToInt(::System::Char h)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HEXTOINT_OFFSET))(h);
		}

		static ::System::Char IntToHex(::System::Int32 n)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_INTTOHEX_OFFSET))(n);
		}

		static ::System::Boolean IsUrlSafeChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_ISURLSAFECHAR_OFFSET))(ch);
		}

		static ::System::Boolean ValidateUrlEncodingParameters(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_VALIDATEURLENCODINGPARAMETERS_OFFSET))(bytes, offset, count);
		}

		static ::System::Boolean StringRequiresHtmlDecoding(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_STRINGREQUIRESHTMLDECODING_OFFSET))(s);
		}
	};
}
