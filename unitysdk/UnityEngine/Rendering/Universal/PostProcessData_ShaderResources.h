#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_SHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x19F35B40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessData_ShaderResources_TypeDefinitionIndex = 29813;

	class PostProcessData_ShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* stopNanPS; // 0x10
		::UnityEngine::Shader* subpixelMorphologicalAntialiasingPS; // 0x18
		::UnityEngine::Shader* temporalAntialiasingPS; // 0x20
		::UnityEngine::Shader* gaussianDepthOfFieldPS; // 0x28
		::UnityEngine::Shader* bokehDepthOfFieldPS; // 0x30
		::UnityEngine::Shader* cameraMotionBlurPS; // 0x38
		::UnityEngine::Shader* paniniProjectionPS; // 0x40
		::UnityEngine::Shader* lutBuilderLdrPS; // 0x48
		::UnityEngine::Shader* lutBuilderHdrPS; // 0x50
		::UnityEngine::Shader* bloomPS; // 0x58
		::UnityEngine::Shader* uberPostPS; // 0x60
		::UnityEngine::Shader* opaqueUberPostPS; // 0x68
		::UnityEngine::Shader* finalPostPassPS; // 0x70
		::UnityEngine::Shader* radialBlurPS; // 0x78
		::UnityEngine::Shader* napBloomPS; // 0x80
		::UnityEngine::Shader* HQNapBloomPS; // 0x88
		::UnityEngine::ComputeShader* HQNapBloomBlurCS; // 0x90
		::UnityEngine::ComputeShader* HQNapBloomUpCombineCS; // 0x98
		::UnityEngine::Shader* napBloomGaussPS; // 0xA0
		::UnityEngine::Shader* FSRPS; // 0xA8
		::UnityEngine::Shader* LensFlareDataDrivePS; // 0xB0
		::UnityEngine::Shader* distortionBlitPS; // 0xB8
		::UnityEngine::Shader* partialBlurPS; // 0xC0
		::UnityEngine::Shader* comicDotPS; // 0xC8
		::UnityEngine::Shader* GSRPS; // 0xD0
		::UnityEngine::Shader* vrEffectsPS; // 0xD8
		::UnityEngine::Shader* unsharpMaskPS; // 0xE0
		::UnityEngine::Shader* PPFilterFilterPS; // 0xE8
		::UnityEngine::Shader* CharacterGhostPS; // 0xF0
		::UnityEngine::Shader* CharacterIgnisFatuusPS; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSDATA_SHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
