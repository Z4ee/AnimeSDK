#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics::Tracing { class ActivityFilter; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162B5810)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS11_0__GETACTIVITYDYINGDELEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x162B5830)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityFilter___c__DisplayClass11_0_TypeDefinitionIndex = 1688;

	class ActivityFilter___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::ActivityFilter* filterList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetActivityDyingDelegate_b__0(::System::Guid oldActivity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER___C__DISPLAYCLASS11_0__GETACTIVITYDYINGDELEGATE_B__0_OFFSET))(this, oldActivity);
		}
	};
}
