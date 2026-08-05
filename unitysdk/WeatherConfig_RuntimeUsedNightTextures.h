#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

inline static constexpr unsigned int WeatherConfig_RuntimeUsedNightTextures_TypeDefinitionIndex = 27752;

struct alignas(8) WeatherConfig_RuntimeUsedNightTextures
{
	::UnityEngine::Texture* moonOnSkyTex; // 0x10
	::UnityEngine::Texture* starMapOnSkyTex; // 0x18
	::UnityEngine::Texture* starMaskOnSkyTex; // 0x20
	::UnityEngine::Texture* galaxyOnSkyTex; // 0x28
};
