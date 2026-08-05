#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x1FC6FD00)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_TypeDefinitionIndex = 31724;

	class CultureInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo* get_InvariantCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET))();
		}
	};
}
