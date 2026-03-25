#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_ERAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1630B610)
#define SYSTEM_GLOBALIZATION_ERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1630B5C0)

namespace System::Globalization
{
	inline static constexpr unsigned int EraInfo_TypeDefinitionIndex = 748;

	class EraInfo : public ::System::Object
	{
	public:
		::System::String* abbrevEraName; // 0x10
		::System::String* eraName; // 0x18
		::System::String* englishEraName; // 0x20
		::System::Int32 yearOffset; // 0x28
		::System::Int32 minEraYear; // 0x2C
		::System::Int32 maxEraYear; // 0x30
		::System::Int32 era; // 0x34
		::System::Int64 ticks; // 0x38

		::System::Void _ctor(::System::Int32 era, ::System::Int32 startYear, ::System::Int32 startMonth, ::System::Int32 startDay, ::System::Int32 yearOffset, ::System::Int32 minEraYear, ::System::Int32 maxEraYear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO__CTOR_OFFSET))(this, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear);
		}

		::System::Void _ctor_1(::System::Int32 era, ::System::Int32 startYear, ::System::Int32 startMonth, ::System::Int32 startDay, ::System::Int32 yearOffset, ::System::Int32 minEraYear, ::System::Int32 maxEraYear, ::System::String* eraName, ::System::String* abbrevEraName, ::System::String* englishEraName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO__CTOR_1_OFFSET))(this, era, startYear, startMonth, startDay, yearOffset, minEraYear, maxEraYear, eraName, abbrevEraName, englishEraName);
		}
	};
}
