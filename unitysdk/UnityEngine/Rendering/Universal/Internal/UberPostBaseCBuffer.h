#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostBaseCBuffer_TypeDefinitionIndex = 30409;

	struct alignas(4) UberPostBaseCBuffer
	{
		::UnityEngine::Vector4 _Lut_Params; // 0x10
		::UnityEngine::Vector4 _UserLut_Params; // 0x20
		::UnityEngine::Vector4 _Bloom_Params; // 0x30
		::UnityEngine::Vector4 _LensDirt_Params; // 0x40
		::UnityEngine::Vector4 _Distortion_Params1; // 0x50
		::UnityEngine::Vector4 _Distortion_Params2; // 0x60
		::UnityEngine::Vector4 _Vignette_Params1; // 0x70
		::UnityEngine::Vector4 _Vignette_Params2; // 0x80
		::UnityEngine::Vector4 _Grain_TilingParams; // 0x90
		::UnityEngine::Vector4 _Bloom_Texture_TexelSize; // 0xA0
		::UnityEngine::Vector4 _Dithering_Params; // 0xB0
		::UnityEngine::Vector4 _DistortionRgbShift; // 0xC0
		::UnityEngine::Vector4 UberPostBasePacked0; // 0xD0
		::UnityEngine::Vector4 UberPostBasePacked1; // 0xE0
		::UnityEngine::Vector4 _RgbShiftParams; // 0xF0
		::UnityEngine::Vector4 _NoiseParams; // 0x100
		::UnityEngine::Vector4 _LineParams; // 0x110
		::UnityEngine::Vector4 _GlitchMask_ST; // 0x120
		::UnityEngine::Vector4 _RandomOpacity_ST; // 0x130
		::UnityEngine::Vector4 UberPostBasePacked2; // 0x140
		::UnityEngine::Vector4 _DirtTexTillingOffset; // 0x150
		::UnityEngine::Vector4 UberPostBasePacked3; // 0x160
		::UnityEngine::Vector4 UberPostBasePacked4; // 0x170
		::UnityEngine::Vector4 UberPostOldCRTPacked; // 0x180
		::UnityEngine::Vector4 ChromaticCenter; // 0x190
		::UnityEngine::Vector4 _ChromaticColorR; // 0x1A0
		::UnityEngine::Vector4 _ChromaticColorG; // 0x1B0
		::UnityEngine::Vector4 _ChromaticColorB; // 0x1C0
		::UnityEngine::Vector4 _VREffectsScanlineParams; // 0x1D0
		::UnityEngine::Vector4 _VREffectsSliceParams; // 0x1E0
		::UnityEngine::Vector4 UberPostGlitchParkedParams1; // 0x1F0
		::UnityEngine::Vector4 UberPostGlitchParkedParams2; // 0x200
		::UnityEngine::Vector4 GlitchTex1And2Scale; // 0x210
		::UnityEngine::Vector4 _CharacterGhostParams; // 0x220
		::UnityEngine::Vector4 _SceneWeatherSandstormParams01; // 0x230
		::UnityEngine::Vector4 _SceneWeatherSandstormParams02; // 0x240
		::UnityEngine::Vector4 _SceneWeatherSandstormParams03; // 0x250
		::UnityEngine::Vector4 _SceneWeatherSandstormParams04; // 0x260
	};
}
