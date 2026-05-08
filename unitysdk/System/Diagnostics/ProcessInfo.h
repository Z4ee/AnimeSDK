#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_PROCESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2A5D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessInfo_TypeDefinitionIndex = 2783;

	class ProcessInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSINFO__CTOR_OFFSET))(this);
		}
	};
}
