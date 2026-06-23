#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_BLACK_OFFSET UNITYSDK_OFFSET(0x1D29CE80)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D29CD70)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LinearColor_TypeDefinitionIndex = 6311;

	struct alignas(4) LinearColor
	{
		::System::Single m_red; // 0x10
		::System::Single m_green; // 0x14
		::System::Single m_blue; // 0x18
		::System::Single m_intensity; // 0x1C

		/*
		static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(::UnityEngine::Color color, ::System::Single intensity)
		{
			return ((::UnityEngine::Experimental::GlobalIllumination::LinearColor(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_CONVERT_OFFSET))(color, intensity);
		}
		*/

		static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Black()
		{
			return ((::UnityEngine::Experimental::GlobalIllumination::LinearColor(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LINEARCOLOR_BLACK_OFFSET))();
		}
	};
}
