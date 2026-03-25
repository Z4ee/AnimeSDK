#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Cookie; }
namespace System::Net { class CookieTokenizer; }

#define SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET UNITYSDK_OFFSET(0x186C4550)
#define SYSTEM_NET_COOKIEPARSER_GET_OFFSET UNITYSDK_OFFSET(0x186C3960)
#define SYSTEM_NET_COOKIEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x186C38D0)

namespace System::Net
{
	inline static constexpr unsigned int CookieParser_TypeDefinitionIndex = 2786;

	class CookieParser : public ::System::Object
	{
	public:
		::System::Net::CookieTokenizer* m_tokenizer; // 0x10

		::System::Void _ctor(::System::String* cookieString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER__CTOR_OFFSET))(this, cookieString);
		}

		::System::Net::Cookie* Get()
		{
			return ((::System::Net::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_GET_OFFSET))(this);
		}

		static ::System::String* CheckQuoted(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET))(value);
		}
	};
}
