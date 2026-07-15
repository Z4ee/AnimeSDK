#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UriComponents.h"

namespace System { class String; }

#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_1_OFFSET UNITYSDK_OFFSET(0x1917EBB0)
#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET UNITYSDK_OFFSET(0x1917EB50)
#define SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET UNITYSDK_OFFSET(0x1917F1E0)
#define SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x1917F3E0)

namespace System
{
	inline static constexpr unsigned int IriHelper_TypeDefinitionIndex = 2453;

	class IriHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckIriUnicodeRange(::System::Char a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckIriUnicodeRange_1(::System::Char a1, ::System::Char a2, ::System::Boolean& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Char, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckIsReserved(::System::Char a1, ::System::UriComponents a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET))(a1, a2);
		}

		static ::System::String* EscapeUnescapeIri(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UriComponents a4)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET))(a1, a2, a3, a4);
		}
	};
}
