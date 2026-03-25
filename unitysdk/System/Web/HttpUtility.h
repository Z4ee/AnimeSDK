#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Text { class Encoding; }

#define SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET UNITYSDK_OFFSET(0x1877A920)
#define SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x1877AA00)
#define SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x1877AF20)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_1_OFFSET UNITYSDK_OFFSET(0x1877B160)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_2_OFFSET UNITYSDK_OFFSET(0x1877B350)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1877B0B0)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1877A100)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1877A050)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1877AD80)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1877AAE0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1877AA30)
#define SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET UNITYSDK_OFFSET(0x1877A6A0)

namespace System::Web
{
	inline static constexpr unsigned int HttpUtility_TypeDefinitionIndex = 2651;

	class HttpUtility : public ::System::Object
	{
	public:
		static ::System::String* UrlDecode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET))(str);
		}

		static ::System::Void WriteCharBytes(::System::Collections::IList* buf, ::System::Char ch, ::System::Text::Encoding* e)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Char, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET))(buf, ch, e);
		}

		static ::System::String* UrlDecode_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET))(str, e);
		}

		static ::System::Int32 GetInt(::System::Byte b)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET))(b);
		}

		static ::System::Int32 GetChar(::System::String* str, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET))(str, offset, length);
		}

		static ::System::String* UrlEncode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET))(str);
		}

		static ::System::String* UrlEncode_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET))(str, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET))(bytes, offset, count);
		}

		static ::System::String* HtmlDecode(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET))(s);
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
