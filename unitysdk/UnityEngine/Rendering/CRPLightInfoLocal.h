#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/LightVolumeInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoLocal_TypeDefinitionIndex = 4861;

	struct alignas(4) CRPLightInfoLocal
	{
		::UnityEngine::Rendering::LightVolumeInfo LightVolumeData; // 0x10
		::UnityEngine::Color CharColor; // 0x138
		::UnityEngine::Vector4 _CharacterLocalMainLightColor1; // 0x148
		::UnityEngine::Vector4 _CharacterLocalMainLightColor2; // 0x158
		::UnityEngine::Vector4 _CharacterLocalMainLightDark; // 0x168
		::UnityEngine::Vector4 _CharacterLocalMainLightDark1; // 0x178
		::UnityEngine::Vector4 _CharacterLocalMainLightPack2; // 0x188
		::UnityEngine::Vector4 _CharacterLocalMainLightPack3; // 0x198
		::UnityEngine::Vector4 _CharacterLocalMainLightPack4; // 0x1A8
	};
}
