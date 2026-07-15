#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }

#define SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1680CA30)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16807180)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x16807B90)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1680B4B0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x1680B3B0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET UNITYSDK_OFFSET(0x16807D10)
#define SYSTEM_WEB_UTIL_HTTPENCODER_NOTENCODED_OFFSET UNITYSDK_OFFSET(0x16807070)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1680CAB0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1680C7F0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1680C780)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1680B120)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1680B3A0)

namespace System::Web::Util
{
	inline static constexpr unsigned int HttpEncoder_TypeDefinitionIndex = 2659;

	class HttpEncoder : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_defaultEncoder()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D10);
		}
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_currentEncoderLazy()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D18);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_hexChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D20);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>** StaticGet_entities()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D28);
		}
		static ::System::Web::Util::HttpEncoder** StaticGet_currentEncoder()
		{
			return (::System::Web::Util::HttpEncoder**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D30);
		}
		static ::System::Object** StaticGet_entitiesLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0x30D38);
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

		::System::Void HtmlDecode(::System::String* a1, ::System::IO::TextWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* UrlEncode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Web::Util::HttpEncoder* GetCustomEncoderFromConfig()
		{
			return ((::System::Web::Util::HttpEncoder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::String* HtmlDecode_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_1_OFFSET))(a1);
		}

		static ::System::Boolean NotEncoded(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_NOTENCODED_OFFSET))(a1);
		}

		static ::System::Void UrlEncodeChar(::System::Char a1, ::System::IO::Stream* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Char, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODECHAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InitEntities()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET))();
		}
	};
}
