#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DEBUGINFOGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F14E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DebugInfoGenerator_TypeDefinitionIndex = 4958;

	class DebugInfoGenerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DEBUGINFOGENERATOR__CTOR_OFFSET))(this);
		}
	};
}
