#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShadowWiggle_ShadowInfo_TypeDefinitionIndex = 52468;

	struct alignas(4) ShadowWiggle_ShadowInfo
	{
		::UnityEngine::Color Color; // 0x10
		::UnityEngine::Vector2 WiggleAmp; // 0x20
		::System::Single WiggleFreq; // 0x28
		::UnityEngine::Vector2 PosOffset; // 0x2C
		::UnityEngine::Vector3 wigglePos; // 0x34
	};
}
