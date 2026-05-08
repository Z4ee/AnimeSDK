#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

inline static constexpr unsigned int VolumetricMist_VolumetricMistRenderInfo_TypeDefinitionIndex = 29515;

struct alignas(8) VolumetricMist_VolumetricMistRenderInfo
{
	::UnityEngine::Renderer* renderer; // 0x10
	::UnityEngine::Material* material; // 0x18
};
