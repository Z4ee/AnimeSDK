#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

inline static constexpr unsigned int UISinWaveGraphic_MaterialEntry_TypeDefinitionIndex = 65651;

struct alignas(8) UISinWaveGraphic_MaterialEntry
{
	::UnityEngine::Material* material; // 0x10
	::System::Single widthDelta; // 0x18
};
