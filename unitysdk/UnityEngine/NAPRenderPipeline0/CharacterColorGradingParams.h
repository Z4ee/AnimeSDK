#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterColorGradingParams_TypeDefinitionIndex = 5967;

	struct alignas(8) CharacterColorGradingParams
	{
		::UnityEngine::Texture* blue; // 0x10
		::UnityEngine::Texture* green; // 0x18
		::UnityEngine::Texture* hueVsHue; // 0x20
		::UnityEngine::Texture* hueVsSat; // 0x28
		::UnityEngine::Texture* lumVsSat; // 0x30
		::UnityEngine::Texture* master; // 0x38
		::UnityEngine::Texture* red; // 0x40
		::UnityEngine::Texture* satVsSat; // 0x48
		::UnityEngine::Vector4 gain; // 0x50
		::UnityEngine::Vector4 gamma; // 0x60
		::UnityEngine::Vector4 lift; // 0x70
		::UnityEngine::Color ambient; // 0x80
		::UnityEngine::Color shadowTint; // 0x90
		::UnityEngine::Color postFrontTint; // 0xA0
		::UnityEngine::Color postSssTint; // 0xB0
		::UnityEngine::Color postShadowFadeTint; // 0xC0
		::UnityEngine::Color shallowTint; // 0xD0
		::UnityEngine::Color shallowFadeTint; // 0xE0
		::UnityEngine::Color skinFrontTint; // 0xF0
		::UnityEngine::Color skinShallowTint; // 0x100
		::UnityEngine::Color skinShallowFadeTint; // 0x110
		::UnityEngine::Color skinShadowTint; // 0x120
		::UnityEngine::Color skinSssTint; // 0x130
		::UnityEngine::Color skinShadowFadeTint; // 0x140
		::UnityEngine::Color ambientGradient; // 0x150
		::UnityEngine::Color outlineTint; // 0x160
		::System::Single contrast; // 0x170
		::System::Single customGamma; // 0x174
		::System::Single postExposure; // 0x178
		::System::Single saturation; // 0x17C
		::System::Single shoulderAngle; // 0x180
		::System::Single shoulderLength; // 0x184
		::System::Single shoulderStrength; // 0x188
		::System::Single toeLength; // 0x18C
		::System::Single toeStrength; // 0x190
		::System::Boolean useShadowTintAsOutline; // 0x194
		::System::Boolean enable; // 0x195
		::System::Boolean revertSaturation; // 0x196
	};
}
