#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x8E3DF0)
#define SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x39EDC0)

namespace System::Net
{
	inline static constexpr unsigned int CookieTokenizer_RecognizedAttribute_TypeDefinitionIndex = 3417;

	struct alignas(8) CookieTokenizer_RecognizedAttribute
	{
		::System::String* m_name; // 0x10
		::System::Net::CookieToken m_token; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Net::CookieToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::CookieToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE__CTOR_OFFSET))(this, name, token);
		}

		::System::Net::CookieToken get_Token()
		{
			return ((::System::Net::CookieToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET))(this);
		}

		::System::Boolean IsEqualTo(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET))(this, value);
		}
	};
}
