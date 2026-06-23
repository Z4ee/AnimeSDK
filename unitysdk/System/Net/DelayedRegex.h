#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_NET_DELAYEDREGEX_GET_ASREGEX_OFFSET UNITYSDK_OFFSET(0x1BECFF30)
#define SYSTEM_NET_DELAYEDREGEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BED0000)
#define SYSTEM_NET_DELAYEDREGEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BECFEC0)
#define SYSTEM_NET_DELAYEDREGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BECFE50)

namespace System::Net
{
	inline static constexpr unsigned int DelayedRegex_TypeDefinitionIndex = 3347;

	class DelayedRegex : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Regex* _AsRegex; // 0x10
		::System::String* _AsString; // 0x18

		::System::Void _ctor(::System::String* regexString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELAYEDREGEX__CTOR_OFFSET))(this, regexString);
		}

		::System::Void _ctor_1(::System::Text::RegularExpressions::Regex* regex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELAYEDREGEX__CTOR_1_OFFSET))(this, regex);
		}

		::System::Text::RegularExpressions::Regex* get_AsRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELAYEDREGEX_GET_ASREGEX_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELAYEDREGEX_TOSTRING_OFFSET))(this);
		}
	};
}
