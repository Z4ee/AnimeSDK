#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/Bootstring.h"

#define SYSTEM_GLOBALIZATION_PUNYCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFA990)

namespace System::Globalization
{
	inline static constexpr unsigned int Punycode_TypeDefinitionIndex = 780;

	class Punycode : public ::System::Globalization::Bootstring
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PUNYCODE__CTOR_OFFSET))(this);
		}
	};
}
