#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_GET_STOPPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x44C630)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_SET_STOPPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x5F8380)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int GradientStop_TypeDefinitionIndex = 31781;

	struct alignas(4) GradientStop
	{
		::UnityEngine::Color _Color_k__BackingField; // 0x10
		::System::Single _StopPercentage_k__BackingField; // 0x20

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_SET_COLOR_OFFSET))(this, value);
		}

		::System::Single get_StopPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_GET_STOPPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_StopPercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTSTOP_SET_STOPPERCENTAGE_OFFSET))(this, value);
		}
	};
}
