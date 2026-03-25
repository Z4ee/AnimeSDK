#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINEUTILITIES_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x18AC1900)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngineUtilities_TypeDefinitionIndex = 5539;

	struct alignas(1) FontEngineUtilities
	{
		static ::System::Int32 MaxValue(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINEUTILITIES_MAXVALUE_OFFSET))(a, b, c);
		}
	};
}
