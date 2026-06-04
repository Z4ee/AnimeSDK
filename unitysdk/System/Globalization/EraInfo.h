#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_ERAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186EBDB0)
#define SYSTEM_GLOBALIZATION_ERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186EBD60)

namespace System::Globalization
{
	inline static constexpr unsigned int EraInfo_TypeDefinitionIndex = 747;

	class EraInfo : public ::System::Object
	{
	public:
		::System::String* englishEraName; // 0x10
		::System::String* abbrevEraName; // 0x18
		::System::String* eraName; // 0x20
		::System::Int32 era; // 0x28
		::System::Int32 yearOffset; // 0x2C
		::System::Int64 ticks; // 0x30
		::System::Int32 maxEraYear; // 0x38
		::System::Int32 minEraYear; // 0x3C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8, ::System::String* a9, ::System::String* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
