#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78D8B0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78D8F0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__GET_CHARSET_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E78D900)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeHeaderValue___c_TypeDefinitionIndex = 3803;

	class MediaTypeHeaderValue___c : public ::System::Object
	{
	public:
		static ::System::Net::Http::Headers::MediaTypeHeaderValue___c** StaticGet___9()
		{
			return (::System::Net::Http::Headers::MediaTypeHeaderValue___c**)Il2CppClass::FromTypeDefinitionIndex(MediaTypeHeaderValue___c_TypeDefinitionIndex)->GetStaticField(0x7D30);
		}
		static ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>**)Il2CppClass::FromTypeDefinitionIndex(MediaTypeHeaderValue___c_TypeDefinitionIndex)->GetStaticField(0x7D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CharSet_b__6_0(::System::Net::Http::Headers::NameValueHeaderValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::NameValueHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE___C__GET_CHARSET_B__6_0_OFFSET))(this, a1);
		}
	};
}
