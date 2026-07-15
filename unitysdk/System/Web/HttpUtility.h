#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Text { class Encoding; }

#define SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET UNITYSDK_OFFSET(0x16806C00)
#define SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET UNITYSDK_OFFSET(0x16806CE0)
#define SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x16807290)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_1_OFFSET UNITYSDK_OFFSET(0x16807450)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_2_OFFSET UNITYSDK_OFFSET(0x16807640)
#define SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x16807430)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET UNITYSDK_OFFSET(0x168062D0)
#define SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET UNITYSDK_OFFSET(0x168062B0)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x16807090)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET UNITYSDK_OFFSET(0x16806D30)
#define SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET UNITYSDK_OFFSET(0x16806D10)
#define SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET UNITYSDK_OFFSET(0x16806870)

namespace System::Web
{
	inline static constexpr unsigned int HttpUtility_TypeDefinitionIndex = 2656;

	class HttpUtility : public ::System::Object
	{
	public:
		static ::System::String* UrlDecode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_OFFSET))(a1);
		}

		static ::System::Void WriteCharBytes(::System::Collections::IList* a1, ::System::Char a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Char, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_WRITECHARBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::String* UrlDecode_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLDECODE_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetInt(::System::Byte a1)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETINT_OFFSET))(a1);
		}

		static ::System::Int32 GetChar(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_GETCHAR_OFFSET))(a1, a2, a3);
		}

		static ::System::String* UrlEncode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_OFFSET))(a1);
		}

		static ::System::String* UrlEncode_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODE_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_URLENCODETOBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::String* HtmlDecode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTMLDECODE_OFFSET))(a1);
		}

		static ::System::Collections::Specialized::NameValueCollection* ParseQueryString(::System::String* a1)
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_OFFSET))(a1);
		}

		static ::System::Collections::Specialized::NameValueCollection* ParseQueryString_1(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_1_OFFSET))(a1, a2);
		}

		static ::System::Void ParseQueryString_2(::System::String* a1, ::System::Text::Encoding* a2, ::System::Collections::Specialized::NameValueCollection* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_PARSEQUERYSTRING_2_OFFSET))(a1, a2, a3);
		}
	};
}
