#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_WEB_UTIL_HTTPENCODER_ENCODEHEADERSTRING_OFFSET UNITYSDK_OFFSET(0x1A11BDD0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A11DC00)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A11B880)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1A11BA20)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1A118310)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HEADERNAMEVALUEENCODE_OFFSET UNITYSDK_OFFSET(0x1A11BD10)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLATTRIBUTEENCODE_1_OFFSET UNITYSDK_OFFSET(0x1A11C140)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLATTRIBUTEENCODE_OFFSET UNITYSDK_OFFSET(0x1A11C090)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1A11C4F0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x1A11C450)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1A11D580)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLENCODE_OFFSET UNITYSDK_OFFSET(0x1A11D4E0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET UNITYSDK_OFFSET(0x1A118490)
#define SYSTEM_WEB_UTIL_HTTPENCODER_JAVASCRIPTSTRINGENCODE_OFFSET UNITYSDK_OFFSET(0x1A11E610)
#define SYSTEM_WEB_UTIL_HTTPENCODER_NOTENCODED_OFFSET UNITYSDK_OFFSET(0x1A11E5F0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A11B990)
#define SYSTEM_WEB_UTIL_HTTPENCODER_STRINGBUILDERAPPEND_OFFSET UNITYSDK_OFFSET(0x1A11C000)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1A11E250)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1A11DA50)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1A11D9E0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLPATHENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1A11DF20)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLPATHENCODE_OFFSET UNITYSDK_OFFSET(0x1A11DC80)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A11BAA0)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A11BD00)

namespace System::Web::Util
{
	inline static constexpr unsigned int HttpEncoder_TypeDefinitionIndex = 3121;

	class HttpEncoder : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_currentEncoderLazy()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2A80);
		}
		static ::System::Object** StaticGet_entitiesLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2A88);
		}
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_defaultEncoder()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2A90);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_hexChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2A98);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>** StaticGet_entities()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2AA0);
		}
		static ::System::Web::Util::HttpEncoder** StaticGet_currentEncoder()
		{
			return (::System::Web::Util::HttpEncoder**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x2AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Char>* get_Entities()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Char>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GET_ENTITIES_OFFSET))();
		}

		static ::System::Web::Util::HttpEncoder* get_Current()
		{
			return ((::System::Web::Util::HttpEncoder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_Current(::System::Web::Util::HttpEncoder* value)
		{
			return ((::System::Void(*)(::System::Web::Util::HttpEncoder*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_SET_CURRENT_OFFSET))(value);
		}

		static ::System::Web::Util::HttpEncoder* get_Default()
		{
			return ((::System::Web::Util::HttpEncoder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GET_DEFAULT_OFFSET))();
		}

		::System::Void HeaderNameValueEncode(::System::String* headerName, ::System::String* headerValue, ::System::String*& encodedHeaderName, ::System::String*& encodedHeaderValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HEADERNAMEVALUEENCODE_OFFSET))(this, headerName, headerValue, encodedHeaderName, encodedHeaderValue);
		}

		static ::System::Void StringBuilderAppend(::System::String* s, ::System::Text::StringBuilder*& sb)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*&))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_STRINGBUILDERAPPEND_OFFSET))(s, sb);
		}

		static ::System::String* EncodeHeaderString(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_ENCODEHEADERSTRING_OFFSET))(input);
		}

		::System::Void HtmlAttributeEncode(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLATTRIBUTEENCODE_OFFSET))(this, value, output);
		}

		::System::Void HtmlDecode(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET))(this, value, output);
		}

		::System::Void HtmlEncode(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLENCODE_OFFSET))(this, value, output);
		}

		::Il2CppArray<::System::Byte>* UrlEncode(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET))(this, bytes, offset, count);
		}

		static ::System::Web::Util::HttpEncoder* GetCustomEncoderFromConfig()
		{
			return ((::System::Web::Util::HttpEncoder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET))();
		}

		::System::String* UrlPathEncode(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLPATHENCODE_OFFSET))(this, value);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET))(bytes, offset, count);
		}

		static ::System::String* HtmlEncode_1(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLENCODE_1_OFFSET))(s);
		}

		static ::System::String* HtmlAttributeEncode_1(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLATTRIBUTEENCODE_1_OFFSET))(s);
		}

		static ::System::String* HtmlDecode_1(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_1_OFFSET))(s);
		}

		static ::System::Boolean NotEncoded(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_NOTENCODED_OFFSET))(c);
		}

		static ::System::Void UrlEncodeChar(::System::Char c, ::System::IO::Stream* result, ::System::Boolean isUnicode)
		{
			return ((::System::Void(*)(::System::Char, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODECHAR_OFFSET))(c, result, isUnicode);
		}

		static ::System::Void UrlPathEncodeChar(::System::Char c, ::System::IO::Stream* result)
		{
			return ((::System::Void(*)(::System::Char, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLPATHENCODECHAR_OFFSET))(c, result);
		}

		static ::System::Void InitEntities()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET))();
		}

		::System::String* JavaScriptStringEncode(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_JAVASCRIPTSTRINGENCODE_OFFSET))(this, value);
		}
	};
}
