#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIPOSTPROCESSDATA_MARKTEXTURECURVEASDIRTY_OFFSET UNITYSDK_OFFSET(0x19F34930)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIPOSTPROCESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F34AD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGIPostProcessData_TypeDefinitionIndex = 30059;

	class NapCharacterGIPostProcessData : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 lift; // 0x10
		::UnityEngine::Vector4 gamma; // 0x20
		::UnityEngine::Vector4 gain; // 0x30
		::System::Single redOutRedIn; // 0x40
		::System::Single redOutGreenIn; // 0x44
		::System::Single redOutBlueIn; // 0x48
		::System::Single greenOutRedIn; // 0x4C
		::System::Single greenOutGreenIn; // 0x50
		::System::Single greenOutBlueIn; // 0x54
		::System::Single blueOutRedIn; // 0x58
		::System::Single blueOutGreenIn; // 0x5C
		::System::Single blueOutBlueIn; // 0x60
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x68
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x70
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x78
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x80
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x88
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x90
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x98
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0xA0
		::UnityEngine::Color colorFilter; // 0xA8
		::System::Single postExposure; // 0xB8
		::System::Single contrast; // 0xBC
		::System::Single hueShift; // 0xC0
		::System::Single saturation; // 0xC4
		::System::Single desaturate; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIPOSTPROCESSDATA__CTOR_OFFSET))(this);
		}

		::System::Void MarkTextureCurveAsDirty(::System::Int32 curveId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIPOSTPROCESSDATA_MARKTEXTURECURVEASDIRTY_OFFSET))(this, curveId);
		}
	};
}
