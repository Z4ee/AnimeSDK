#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Net::Http::Headers { class TransferCodingHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E841C10)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E841C50)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONCLOSE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1E841C60)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONKEEPALIVE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1E841CA0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_EXPECTCONTINUE_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E841CE0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_TRANSFERENCODINGCHUNKED_B__71_0_OFFSET UNITYSDK_OFFSET(0x1E841D30)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpRequestHeaders___c_TypeDefinitionIndex = 26719;

	class HttpRequestHeaders___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::String*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestHeaders___c_TypeDefinitionIndex)->GetStaticField(0x20F90);
		}
		static ::System::Net::Http::Headers::HttpRequestHeaders___c** StaticGet___9()
		{
			return (::System::Net::Http::Headers::HttpRequestHeaders___c**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestHeaders___c_TypeDefinitionIndex)->GetStaticField(0x20F98);
		}
		static ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>** StaticGet___9__71_0()
		{
			return (::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestHeaders___c_TypeDefinitionIndex)->GetStaticField(0x20FA0);
		}
		static ::System::Predicate_1<::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestHeaders___c_TypeDefinitionIndex)->GetStaticField(0x20FA8);
		}
		static ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>** StaticGet___9__29_0()
		{
			return (::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>**)Il2CppClass::FromTypeDefinitionIndex(HttpRequestHeaders___c_TypeDefinitionIndex)->GetStaticField(0x20FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ConnectionClose_b__19_0(::System::String* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONCLOSE_B__19_0_OFFSET))(this, l);
		}

		::System::Boolean _get_ConnectionKeepAlive_b__22_0(::System::String* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONKEEPALIVE_B__22_0_OFFSET))(this, l);
		}

		::System::Boolean _get_ExpectContinue_b__29_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_EXPECTCONTINUE_B__29_0_OFFSET))(this, l);
		}

		::System::Boolean _get_TransferEncodingChunked_b__71_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_TRANSFERENCODINGCHUNKED_B__71_0_OFFSET))(this, l);
		}
	};
}
