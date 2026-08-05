#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector3Parameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }
namespace UnityEngine::Rendering::Universal { class BlendModesParameter; }
namespace UnityEngine::Rendering::Universal { class ChannelMappingParameter; }
namespace UnityEngine::Rendering::Universal { class UvModesParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1CB1B770)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISCHARACTERGHOSTACTIVE_OFFSET UNITYSDK_OFFSET(0x1CB1BBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1CB1B7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_LAYERCONFIGTOVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1CB1B800)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1BC50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenEffects_TypeDefinitionIndex = 27901;

	class ScreenEffects : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enabled; // 0x38
		::UnityEngine::Rendering::Universal::BlendModesParameter* blendMode; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* polarUVAspect; // 0x48
		::UnityEngine::Rendering::Universal::UvModesParameter* boundaryMode; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* boundaryUVAspect; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* boundary; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* feather; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* maxOpacity; // 0x70
		::UnityEngine::NAPRenderPipeline0::BoolParameter* invert; // 0x78
		::UnityEngine::NAPRenderPipeline0::TextureParameter* mainTex; // 0x80
		::UnityEngine::Rendering::Universal::UvModesParameter* mainTexUvMode; // 0x88
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* mainTexScaleOffset; // 0x90
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useRGBColorChannelMapping; // 0x98
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* colorChannelMapping; // 0xA0
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* alphaChannelMapping; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorA; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* colorB; // 0xB8
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* lerpBrightness; // 0xC0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* uvMoveSpeed; // 0xC8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* maskTex; // 0xD0
		::UnityEngine::Rendering::Universal::UvModesParameter* maskTexUvMode; // 0xD8
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* maskTexScaleOffset; // 0xE0
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* maskChannelMapping; // 0xE8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* maskUvMoveSpeed; // 0xF0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* dissolveTex; // 0xF8
		::UnityEngine::Rendering::Universal::UvModesParameter* dissolveTexUvMode; // 0x100
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* dissolveTexScaleOffset; // 0x108
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* dissolveChannel; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dissolveProgress; // 0x118
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* dissolveUVSpeed; // 0x120
		::UnityEngine::NAPRenderPipeline0::BoolParameter* dissolveRandomUV; // 0x128
		::UnityEngine::NAPRenderPipeline0::BoolParameter* dissolveAffects2Tone; // 0x130
		::UnityEngine::NAPRenderPipeline0::TextureParameter* distortionTex; // 0x138
		::UnityEngine::Rendering::Universal::UvModesParameter* distortionTexUvMode; // 0x140
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* distortionTexScaleOffset; // 0x148
		::UnityEngine::Rendering::Universal::ChannelMappingParameter* distortionChannel; // 0x150
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* distortionUVSpeed; // 0x158
		::UnityEngine::NAPRenderPipeline0::BoolParameter* distortionRandomUV; // 0x160
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* distortionIntensity; // 0x168
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* dissolveDistortionIntensity; // 0x170
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* softRange; // 0x178
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* alphaCutoff; // 0x180
		::UnityEngine::NAPRenderPipeline0::BoolParameter* screenDistortion; // 0x188
		::UnityEngine::NAPRenderPipeline0::TextureParameter* screenDistortionTex; // 0x190
		::UnityEngine::Rendering::Universal::UvModesParameter* screenDistortionTexUvMode; // 0x198
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* screenDistortionTexScaleOffset; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* screenDistortionIntensity; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* screenDistortionUVSpeed; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* ignoreTimeScale; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterGhost; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterGhostBlitWithProxy; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* characterGhostDownSample; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* characterGhostDistortionTexture; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterGhostDistortionUVScale; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* characterGhostDistortionUVSpeed; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterGhostRadius; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterGhostIntensity; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterGhostSelfMask; // 0x200
		::UnityEngine::NAPRenderPipeline0::BoolParameter* ghostDepthCulling; // 0x208
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useScreenSpaceRadius; // 0x210
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* characterGhostTargetPosition; // 0x218
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* characterGhostLayer; // 0x220
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer1Direction; // 0x228
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer1Radius; // 0x230
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer1Intensity; // 0x238
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer1Color; // 0x240
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer2Direction; // 0x248
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer2Radius; // 0x250
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer2Intensity; // 0x258
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer2Color; // 0x260
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer3Direction; // 0x268
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer3Radius; // 0x270
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer3Intensity; // 0x278
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer3Color; // 0x280
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer4Direction; // 0x288
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer4Radius; // 0x290
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer4Intensity; // 0x298
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer4Color; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer5Direction; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer5Radius; // 0x2B0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* layer5Intensity; // 0x2B8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* layer5Color; // 0x2C0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* characterGhostColor; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterGhostFresnel; // 0x2D0
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* characterGhostFresnelPower; // 0x2D8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* characterGhostSingleColor; // 0x2E0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* characterGhostMinIntensity; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void LayerConfigToVectorArray(::Il2CppArray<::UnityEngine::Vector4>*& output, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_LAYERCONFIGTOVECTORARRAY_OFFSET))(this, output, startIndex);
		}

		::System::Boolean IsCharacterGhostActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENEFFECTS_ISCHARACTERGHOSTACTIVE_OFFSET))(this);
		}
	};
}
