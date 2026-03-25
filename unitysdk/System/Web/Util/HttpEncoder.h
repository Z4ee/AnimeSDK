#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }

#define SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1877FEF0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1877AE10)
#define SYSTEM_WEB_UTIL_HTTPENCODER_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1877B840)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_1_OFFSET UNITYSDK_OFFSET(0x1877F0C0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET UNITYSDK_OFFSET(0x1877F020)
#define SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET UNITYSDK_OFFSET(0x1877B9C0)
#define SYSTEM_WEB_UTIL_HTTPENCODER_NOTENCODED_OFFSET UNITYSDK_OFFSET(0x1877AD60)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1877FF70)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1877FD00)
#define SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1877FC90)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1877EDD0)
#define SYSTEM_WEB_UTIL_HTTPENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1877F010)

namespace System::Web::Util
{
	inline static constexpr unsigned int HttpEncoder_TypeDefinitionIndex = 2654;

	class HttpEncoder : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>** StaticGet_entities()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD20);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_hexChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD28);
		}
		static ::System::Web::Util::HttpEncoder** StaticGet_currentEncoder()
		{
			return (::System::Web::Util::HttpEncoder**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD30);
		}
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_defaultEncoder()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD38);
		}
		static ::System::Lazy_1<::System::Web::Util::HttpEncoder*>** StaticGet_currentEncoderLazy()
		{
			return (::System::Lazy_1<::System::Web::Util::HttpEncoder*>**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}
		static ::System::Object** StaticGet_entitiesLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HttpEncoder_TypeDefinitionIndex)->GetStaticField(0xDD48);
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

		::System::Void HtmlDecode(::System::String* value, ::System::IO::TextWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_HTMLDECODE_OFFSET))(this, value, output);
		}

		::Il2CppArray<::System::Byte>* UrlEncode(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODE_OFFSET))(this, bytes, offset, count);
		}

		static ::System::Web::Util::HttpEncoder* GetCustomEncoderFromConfig()
		{
			return ((::System::Web::Util::HttpEncoder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_GETCUSTOMENCODERFROMCONFIG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_URLENCODETOBYTES_OFFSET))(bytes, offset, count);
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

		static ::System::Void InitEntities()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HTTPENCODER_INITENTITIES_OFFSET))();
		}
	};
}
