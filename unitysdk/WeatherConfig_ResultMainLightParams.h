#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering { class LensFlareDataSRP; }
namespace UnityEngine::Rendering::Universal { class LensFlareConfig; }
namespace UnityEngine::Rendering::Universal { class LightShaftConfig; }

inline static constexpr unsigned int WeatherConfig_ResultMainLightParams_TypeDefinitionIndex = 29523;

struct alignas(8) WeatherConfig_ResultMainLightParams
{
	::UnityEngine::Color colorForChar; // 0x10
	::UnityEngine::Color color; // 0x20
	::System::Single intensity; // 0x30
	::System::Single intensityForChar; // 0x34
	::UnityEngine::Vector3 mainLightDirectionEular; // 0x38
	::UnityEngine::Rendering::LensFlareDataSRP* resultLensFlareData; // 0x48
	::UnityEngine::Rendering::Universal::LensFlareConfig* resultLensFlareConfig; // 0x50
	::UnityEngine::Rendering::Universal::LightShaftConfig* resultLightShaftConfig; // 0x58
	::System::Single shadowStrengthForChar; // 0x60
	::System::Single rimGlowIntensity; // 0x64
};
