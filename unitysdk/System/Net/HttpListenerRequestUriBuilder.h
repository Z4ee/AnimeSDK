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

#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDPERCENTENCODEDOCTETTORAWOCTETSLIST_OFFSET UNITYSDK_OFFSET(0x19603420)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDSLASHTOASTERISKONLYPATH_OFFSET UNITYSDK_OFFSET(0x19601A60)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDOCTETSPERCENTENCODED_OFFSET UNITYSDK_OFFSET(0x19603540)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDUNICODECODEPOINTVALUEPERCENTENCODED_OFFSET UNITYSDK_OFFSET(0x196030E0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGCOOKEDPATH_OFFSET UNITYSDK_OFFSET(0x19601B90)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_1_OFFSET UNITYSDK_OFFSET(0x19602580)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_OFFSET UNITYSDK_OFFSET(0x19601E80)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x19601AB0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_EMPTYDECODEANDAPPENDRAWOCTETSLIST_OFFSET UNITYSDK_OFFSET(0x19602C30)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x19602510)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETOCTETSASSTRING_OFFSET UNITYSDK_OFFSET(0x19603B50)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETPATH_OFFSET UNITYSDK_OFFSET(0x19602370)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETREQUESTURI_OFFSET UNITYSDK_OFFSET(0x196013F0)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x19602360)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_PARSERAWPATH_OFFSET UNITYSDK_OFFSET(0x19602950)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19601800)
#define SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19601990)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequestUriBuilder_TypeDefinitionIndex = 2727;

	class HttpListenerRequestUriBuilder : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x2C530);
		}
		static ::System::Text::Encoding** StaticGet_ansiEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x2C538);
		}
		static ::System::Boolean* StaticGet_useCookedRequestUrl()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequestUriBuilder_TypeDefinitionIndex)->GetStaticField(0x7D20);
		}
		::System::String* rawUri; // 0x10
		::System::String* rawPath; // 0x18
		::System::String* cookedUriQuery; // 0x20
		::System::Text::StringBuilder* requestUriString; // 0x28
		::System::Uri* requestUri; // 0x30
		::System::String* cookedUriScheme; // 0x38
		::System::String* cookedUriPath; // 0x40
		::System::String* cookedUriHost; // 0x48
		::System::Collections::Generic::List_1<::System::Byte>* rawOctets; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Uri* GetRequestUri(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Uri*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETREQUESTURI_OFFSET))(a1, a2, a3, a4, a5);
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

		static ::System::Text::Encoding* GetEncoding(::System::Net::HttpListenerRequestUriBuilder_EncodingType a1)
		{
			return ((::System::Text::Encoding*(*)(::System::Net::HttpListenerRequestUriBuilder_EncodingType))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETENCODING_OFFSET))(a1);
		}

		::System::Net::HttpListenerRequestUriBuilder_ParsingResult BuildRequestUriUsingRawPath_1(::System::Text::Encoding* a1)
		{
			return ((::System::Net::HttpListenerRequestUriBuilder_ParsingResult(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_BUILDREQUESTURIUSINGRAWPATH_1_OFFSET))(this, a1);
		}

		::System::Net::HttpListenerRequestUriBuilder_ParsingResult ParseRawPath(::System::Text::Encoding* a1)
		{
			return ((::System::Net::HttpListenerRequestUriBuilder_ParsingResult(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_PARSERAWPATH_OFFSET))(this, a1);
		}

		::System::Boolean AppendUnicodeCodePointValuePercentEncoded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDUNICODECODEPOINTVALUEPERCENTENCODED_OFFSET))(this, a1);
		}

		::System::Boolean AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::Encoding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDPERCENTENCODEDOCTETTORAWOCTETSLIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_EMPTYDECODEANDAPPENDRAWOCTETSLIST_OFFSET))(this, a1);
		}

		static ::System::Void AppendOctetsPercentEncoded(::System::Text::StringBuilder* a1, ::System::Collections::Generic::IEnumerable_1<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_APPENDOCTETSPERCENTENCODED_OFFSET))(a1, a2);
		}

		static ::System::String* GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETOCTETSASSTRING_OFFSET))(a1);
		}

		static ::System::String* GetPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_GETPATH_OFFSET))(a1);
		}

		static ::System::String* AddSlashToAsteriskOnlyPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_ADDSLASHTOASTERISKONLYPATH_OFFSET))(a1);
		}

		::System::Void LogWarning(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUESTURIBUILDER_LOGWARNING_OFFSET))(this, a1, a2, a3);
		}
	};
}
