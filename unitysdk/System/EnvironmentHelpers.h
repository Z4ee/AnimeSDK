#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_ENVIRONMENTHELPERS_ISWINDOWSVISTAORABOVE_OFFSET UNITYSDK_OFFSET(0x1A570B90)

namespace System
{
	inline static constexpr unsigned int EnvironmentHelpers_TypeDefinitionIndex = 2696;

	class EnvironmentHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsWindowsVistaOrAbove()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENTHELPERS_ISWINDOWSVISTAORABOVE_OFFSET))();
		}
	};
}
