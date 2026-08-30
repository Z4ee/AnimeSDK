#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x3BA6490)
#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB60)

namespace System::Net
{
	inline static constexpr unsigned int CookieTokenizer_RecognizedAttribute_TypeDefinitionIndex = 2797;

	struct alignas(8) CookieTokenizer_RecognizedAttribute
	{
		::System::String* m_name; // 0x10
		::System::Net::CookieToken m_token; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Net::CookieToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::CookieToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::CookieToken get_Token()
		{
			return ((::System::Net::CookieToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET))(this);
		}

		::System::Boolean IsEqualTo(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET))(this, a1);
		}
	};
}
