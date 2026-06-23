#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/HebrewNumber_HebrewToken.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_HEBREWVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8D750)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_HebrewValue_TypeDefinitionIndex = 734;

	class HebrewNumber_HebrewValue : public ::System::Object
	{
	public:
		::System::Int32 value; // 0x10
		::System::Globalization::HebrewNumber_HebrewToken token; // 0x14

		::System::Void _ctor(::System::Globalization::HebrewNumber_HebrewToken token, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::HebrewNumber_HebrewToken, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_HEBREWVALUE__CTOR_OFFSET))(this, token, value);
		}
	};
}
