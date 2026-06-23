#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_PROCESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C2600)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessInfo_TypeDefinitionIndex = 2782;

	class ProcessInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSINFO__CTOR_OFFSET))(this);
		}
	};
}
