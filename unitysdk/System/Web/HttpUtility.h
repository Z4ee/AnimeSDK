#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_WEB_HTTPUTILITY_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1CB0AD30)
#define SYSTEM_WEB_HTTPUTILITY_GETCHAR_1_OFFSET UNITYSDK_OFFSET(0x1CB0B060)
#define SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET UNITYSDK_OFFSET(0x1CB0BA80)
#define SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x1CB0BA50)
#define SYSTEM_WEB_HTTPUTILITY_HTMLATTRIBUTEENCODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0A570)
#define SYSTEM_WEB_HTTPUTILITY_HTMLATTRIBUTEENCODE_OFFSET UNITYSDK_OFFSET(0x1CB0A4C0)
#define SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0CE50)
#define SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x1CB0CD20)
#define SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0D040)
#define SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_2_OFFSET UNITYSDK_OFFSET(0x1CB0D100)
#define SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_OFFSET UNITYSDK_OFFSET(0x1CB0CF10)
#define SYSTEM_WEB_HTTPUTILITY_JAVASCRIPTSTRINGENCODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0D150)
#define SYSTEM_WEB_HTTPUTILITY_JAVASCRIPTSTRINGENCODE_OFFSET UNITYSDK_OFFSET(0x1CB0D140)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CB0D890)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_2_OFFSET UNITYSDK_OFFSET(0x1CB0DB00)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1CB0D7C0)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_1_OFFSET UNITYSDK_OFFSET(0x1CB0BE40)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_2_OFFSET UNITYSDK_OFFSET(0x1CB0BF10)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_3_OFFSET UNITYSDK_OFFSET(0x1CB0BB70)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0BB50)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0A770)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_2_OFFSET UNITYSDK_OFFSET(0x1CB0B220)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_3_OFFSET UNITYSDK_OFFSET(0x1CB0B240)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1CB0A6A0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_1_OFFSET UNITYSDK_OFFSET(0x1CB0C8B0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_2_OFFSET UNITYSDK_OFFSET(0x1CB0C9E0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_3_OFFSET UNITYSDK_OFFSET(0x1CB0C3D0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0C7E0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODEUNICODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0CBC0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODEUNICODE_OFFSET UNITYSDK_OFFSET(0x1CB0CAC0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1CB0C080)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_2_OFFSET UNITYSDK_OFFSET(0x1CB0C460)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_3_OFFSET UNITYSDK_OFFSET(0x1CB0C620)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1CB0BFB0)
#define SYSTEM_WEB_HTTPUTILITY_URLPATHENCODE_OFFSET UNITYSDK_OFFSET(0x1CB0D740)
#define SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0ADA0)
#define SYSTEM_WEB_HTTPUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0A4B0)

namespace System::Web
{
	inline static constexpr unsigned int HttpUtility_TypeDefinitionIndex = 3117;

	class HttpUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void HtmlAttributeEncode(::System::String* s, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLATTRIBUTEENCODE_OFFSET))(s, output);
		}

		static ::System::String* HtmlAttributeEncode_1(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLATTRIBUTEENCODE_1_OFFSET))(s);
		}

		static ::System::String* UrlDecode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Char>* GetChars(::System::IO::MemoryStream* b, ::System::Text::Encoding* e)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::IO::MemoryStream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETCHARS_OFFSET))(b, e);
		}

		static ::System::Void WriteCharBytes(::System::Collections::IList* buf, ::System::Char ch, ::System::Text::Encoding* e)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Char, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET))(buf, ch, e);
		}

		static ::System::String* UrlDecode_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET))(str, e);
		}

		static ::System::String* UrlDecode_2(::Il2CppArray<::System::Byte>* bytes, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_2_OFFSET))(bytes, e);
		}

		static ::System::Int32 GetInt(::System::Byte b)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET))(b);
		}

		static ::System::Int32 GetChar(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET))(bytes, offset, length);
		}

		static ::System::Int32 GetChar_1(::System::String* str, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETCHAR_1_OFFSET))(str, offset, length);
		}

		static ::System::String* UrlDecode_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_3_OFFSET))(bytes, offset, count, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeToBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeToBytes_1(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_1_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeToBytes_2(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_2_OFFSET))(str, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlDecodeToBytes_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODETOBYTES_3_OFFSET))(bytes, offset, count);
		}

		static ::System::String* UrlEncode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET))(str);
		}

		static ::System::String* UrlEncode_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET))(str, e);
		}

		static ::System::String* UrlEncode_2(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_2_OFFSET))(bytes);
		}

		static ::System::String* UrlEncode_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_3_OFFSET))(bytes, offset, count);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_1_OFFSET))(str, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes_2(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_2_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_3_OFFSET))(bytes, offset, count);
		}

		static ::System::String* UrlEncodeUnicode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODEUNICODE_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeUnicodeToBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODEUNICODETOBYTES_OFFSET))(str);
		}

		static ::System::String* HtmlDecode(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET))(s);
		}

		static ::System::Void HtmlDecode_1(::System::String* s, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_1_OFFSET))(s, output);
		}

		static ::System::String* HtmlEncode(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_OFFSET))(s);
		}

		static ::System::Void HtmlEncode_1(::System::String* s, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_1_OFFSET))(s, output);
		}

		static ::System::String* HtmlEncode_2(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLENCODE_2_OFFSET))(value);
		}

		static ::System::String* JavaScriptStringEncode(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_JAVASCRIPTSTRINGENCODE_OFFSET))(value);
		}

		static ::System::String* JavaScriptStringEncode_1(::System::String* value, ::System::Boolean addDoubleQuotes)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_JAVASCRIPTSTRINGENCODE_1_OFFSET))(value, addDoubleQuotes);
		}

		static ::System::String* UrlPathEncode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLPATHENCODE_OFFSET))(str);
		}

		static ::System::Collections::Specialized::NameValueCollection* ParseQueryString(::System::String* query)
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_OFFSET))(query);
		}

		static ::System::Collections::Specialized::NameValueCollection* ParseQueryString_1(::System::String* query, ::System::Text::Encoding* encoding)
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_1_OFFSET))(query, encoding);
		}

		static ::System::Void ParseQueryString_2(::System::String* query, ::System::Text::Encoding* encoding, ::System::Collections::Specialized::NameValueCollection* result)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_2_OFFSET))(query, encoding, result);
		}
	};
}
