#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/HebrewNumber_HS.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_HEBREWNUMBERPARSINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3AEDB90)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumberParsingContext_TypeDefinitionIndex = 753;

	struct alignas(4) HebrewNumberParsingContext
	{
		::System::Globalization::HebrewNumber_HS state; // 0x10
		::System::Int32 result; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBERPARSINGCONTEXT__CTOR_OFFSET))(this, a1);
		}
	};
}
