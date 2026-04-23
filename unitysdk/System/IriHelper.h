#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UriComponents.h"

namespace System { class String; }

#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_1_OFFSET UNITYSDK_OFFSET(0x1A0EDB40)
#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET UNITYSDK_OFFSET(0x1A0EDAE0)
#define SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET UNITYSDK_OFFSET(0x1A0EE190)
#define SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x1A0EE390)

namespace System
{
	inline static constexpr unsigned int IriHelper_TypeDefinitionIndex = 2449;

	class IriHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckIriUnicodeRange(::System::Char unicode, ::System::Boolean isQuery)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET))(unicode, isQuery);
		}

		static ::System::Boolean CheckIriUnicodeRange_1(::System::Char highSurr, ::System::Char lowSurr, ::System::Boolean& surrogatePair, ::System::Boolean isQuery)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Char, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_1_OFFSET))(highSurr, lowSurr, surrogatePair, isQuery);
		}

		static ::System::Boolean CheckIsReserved(::System::Char ch, ::System::UriComponents component)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET))(ch, component);
		}

		static ::System::String* EscapeUnescapeIri(::System::Char* pInput, ::System::Int32 start, ::System::Int32 end, ::System::UriComponents component)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET))(pInput, start, end, component);
		}
	};
}
