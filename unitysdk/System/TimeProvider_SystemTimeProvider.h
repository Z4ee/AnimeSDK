#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeProvider.h"

#define SYSTEM_TIMEPROVIDER_SYSTEMTIMEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E0A80)

namespace System
{
	inline static constexpr unsigned int TimeProvider_SystemTimeProvider_TypeDefinitionIndex = 10161;

	class TimeProvider_SystemTimeProvider : public ::System::TimeProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER_SYSTEMTIMEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
