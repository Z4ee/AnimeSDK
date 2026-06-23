#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Cookie; }
namespace System::Net { class CookieTokenizer; }

#define SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET UNITYSDK_OFFSET(0x1C494660)
#define SYSTEM_NET_COOKIEPARSER_GETSERVER_OFFSET UNITYSDK_OFFSET(0x1C494710)
#define SYSTEM_NET_COOKIEPARSER_GET_OFFSET UNITYSDK_OFFSET(0x1C493BA0)
#define SYSTEM_NET_COOKIEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C493B30)

namespace System::Net
{
	inline static constexpr unsigned int CookieParser_TypeDefinitionIndex = 3417;

	class CookieParser : public ::System::Object
	{
	public:
		::System::Net::CookieTokenizer* m_tokenizer; // 0x10
		::System::Net::Cookie* m_savedCookie; // 0x18

		::System::Void _ctor(::System::String* cookieString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER__CTOR_OFFSET))(this, cookieString);
		}

		::System::Net::Cookie* Get()
		{
			return ((::System::Net::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_GET_OFFSET))(this);
		}

		::System::Net::Cookie* GetServer()
		{
			return ((::System::Net::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_GETSERVER_OFFSET))(this);
		}

		static ::System::String* CheckQuoted(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIEPARSER_CHECKQUOTED_OFFSET))(value);
		}
	};
}
