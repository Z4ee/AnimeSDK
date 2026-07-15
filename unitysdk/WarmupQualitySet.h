#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"

inline static constexpr unsigned int WarmupQualitySet_TypeDefinitionIndex = 45629;

struct alignas(4) WarmupQualitySet
{
	::UnityEngine::WarmupQualityCategory qualityCategory; // 0x10
	::RPG::CustomRP::Quality qualityLevel; // 0x14
};
