#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TextAlignmentOptions.h"

#define TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1FC20880)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Compatibility_TypeDefinitionIndex = 39774;

	class TMP_Compatibility : public ::System::Object
	{
	public:
		static ::TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions oldValue)
		{
			return ((::TMPro::TextAlignmentOptions(*)(::TMPro::TextAlignmentOptions))((::PBYTE)hIl2Cpp + TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET))(oldValue);
		}
	};
}
