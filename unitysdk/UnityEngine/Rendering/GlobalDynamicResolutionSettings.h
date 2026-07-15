#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DynamicResUpscaleFilter.h"
#include "unitysdk/UnityEngine/Rendering/DynamicResolutionType.h"

#define UNITYENGINE_RENDERING_GLOBALDYNAMICRESOLUTIONSETTINGS_NEWDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B0F1B80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GlobalDynamicResolutionSettings_TypeDefinitionIndex = 34051;

	struct alignas(4) GlobalDynamicResolutionSettings
	{
		::System::Boolean enabled; // 0x10
		::System::Single maxPercentage; // 0x14
		::System::Single minPercentage; // 0x18
		::UnityEngine::Rendering::DynamicResolutionType dynResType; // 0x1C
		::UnityEngine::Rendering::DynamicResUpscaleFilter upsampleFilter; // 0x1D
		::System::Boolean forceResolution; // 0x1E
		::System::Single forcedPercentage; // 0x20

		static ::UnityEngine::Rendering::GlobalDynamicResolutionSettings NewDefault()
		{
			return ((::UnityEngine::Rendering::GlobalDynamicResolutionSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALDYNAMICRESOLUTIONSETTINGS_NEWDEFAULT_OFFSET))();
		}
	};
}
