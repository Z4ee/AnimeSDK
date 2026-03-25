#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162B5820)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__TRIMACTIVEACTIVITYSTORE_B__0_OFFSET UNITYSDK_OFFSET(0x162B5980)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityFilter___c__DisplayClass13_0_TypeDefinitionIndex = 1689;

	class ActivityFilter___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Int32 tickNow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _TrimActiveActivityStore_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Guid, ::System::Int32> x, ::System::Collections::Generic::KeyValuePair_2<::System::Guid, ::System::Int32> y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Guid, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::System::Guid, ::System::Int32>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS13_0__TRIMACTIVEACTIVITYSTORE_B__0_OFFSET))(this, x, y);
		}
	};
}
