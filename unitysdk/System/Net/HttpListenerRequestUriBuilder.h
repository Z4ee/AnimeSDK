#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpListenerRequestUriBuilder_EncodingType.h"
#include "unitysdk/System/Net/HttpListenerRequestUriBuilder_ParsingResult.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDPERCENTENCODEDOCTETTORAWOCTETSLIST_OFFSET UNITYSDK_OFFSET(0x1A2493C0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDSLASHTOASTERISKONLYPATH_OFFSET UNITYSDK_OFFSET(0x1A247850)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDOCTETSPERCENTENCODED_OFFSET UNITYSDK_OFFSET(0x1A249500)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDUNICODECODEPOINTVALUEPERCENTENCODED_OFFSET UNITYSDK_OFFSET(0x1A2490C0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGCOOKEDPATH_OFFSET UNITYSDK_OFFSET(0x1A247A60)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_1_OFFSET UNITYSDK_OFFSET(0x1A2486F0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_OFFSET UNITYSDK_OFFSET(0x1A247E60)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1A247980)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_EMPTYDECODEANDAPPENDRAWOCTETSLIST_OFFSET UNITYSDK_OFFSET(0x1A248CE0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x1A248680)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETOCTETSASSTRING_OFFSET UNITYSDK_OFFSET(0x1A2498A0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETPATH_OFFSET UNITYSDK_OFFSET(0x1A248450)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETREQUESTURI_OFFSET UNITYSDK_OFFSET(0x1A2478F0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1A248440)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_PARSERAWPATH_OFFSET UNITYSDK_OFFSET(0x1A248A90)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A247600)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A247730)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequestUriBuilder_TypeDefinitionIndex = 3276;

	class HttpListenerRequestUriBuilder : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x34E0);
		}
		static ::System::Text::Encoding** StaticGet_ansiEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x34E8);
		}
		static ::System::Boolean* StaticGet_useCookedRequestUrl()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x1370);
		}
		::System::Uri* requestUri; // 0x10
		::System::String* rawUri; // 0x18
		::System::String* cookedUriPath; // 0x20
		::System::String* cookedUriHost; // 0x28
		::System::String* cookedUriQuery; // 0x30
		::System::Collections::Generic::List_1<::System::Byte>* rawOctets; // 0x38
		::System::String* rawPath; // 0x40
		::System::String* cookedUriScheme; // 0x48
		::System::Text::StringBuilder* requestUriString; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* rawUri, ::System::String* cookedUriScheme, ::System::String* cookedUriHost, ::System::String* cookedUriPath, ::System::String* cookedUriQuery)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CTOR_OFFSET))(this, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
		}

		static ::System::Uri* GetRequestUri(::System::String* rawUri, ::System::String* cookedUriScheme, ::System::String* cookedUriHost, ::System::String* cookedUriPath, ::System::String* cookedUriQuery)
		{
			return ((::System::Uri*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETREQUESTURI_OFFSET))(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
		}

		::System::Uri* Build()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILD_OFFSET))(this);
		}

		::System::Void BuildRequestUriUsingCookedPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGCOOKEDPATH_OFFSET))(this);
		}

		::System::Void BuildRequestUriUsingRawPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_OFFSET))(this);
		}

		static ::System::Text::Encoding* GetEncoding(::System::Net::HttpListenerRequestUriBuilder_EncodingType type)
		{
			return ((::System::Text::Encoding*(*)(::System::Net::HttpListenerRequestUriBuilder_EncodingType))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETENCODING_OFFSET))(type);
		}

		::System::Net::HttpListenerRequestUriBuilder_ParsingResult BuildRequestUriUsingRawPath_1(::System::Text::Encoding* encoding)
		{
			return ((::System::Net::HttpListenerRequestUriBuilder_ParsingResult(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_1_OFFSET))(this, encoding);
		}

		::System::Net::HttpListenerRequestUriBuilder_ParsingResult ParseRawPath(::System::Text::Encoding* encoding)
		{
			return ((::System::Net::HttpListenerRequestUriBuilder_ParsingResult(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_PARSERAWPATH_OFFSET))(this, encoding);
		}

		::System::Boolean AppendUnicodeCodePointValuePercentEncoded(::System::String* codePoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDUNICODECODEPOINTVALUEPERCENTENCODED_OFFSET))(this, codePoint);
		}

		::System::Boolean AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding* encoding, ::System::String* escapedCharacter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDPERCENTENCODEDOCTETTORAWOCTETSLIST_OFFSET))(this, encoding, escapedCharacter);
		}

		::System::Boolean EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding* encoding)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_EMPTYDECODEANDAPPENDRAWOCTETSLIST_OFFSET))(this, encoding);
		}

		static ::System::Void AppendOctetsPercentEncoded(::System::Text::StringBuilder* target, ::System::Collections::Generic::IEnumerable_1<::System::Byte>* octets)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDOCTETSPERCENTENCODED_OFFSET))(target, octets);
		}

		static ::System::String* GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<::System::Byte>* octets)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETOCTETSASSTRING_OFFSET))(octets);
		}

		static ::System::String* GetPath(::System::String* uriString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETPATH_OFFSET))(uriString);
		}

		static ::System::String* AddSlashToAsteriskOnlyPath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDSLASHTOASTERISKONLYPATH_OFFSET))(path);
		}

		::System::Void LogWarning(::System::String* methodName, ::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_LOGWARNING_OFFSET))(this, methodName, message, args);
		}
	};
}
