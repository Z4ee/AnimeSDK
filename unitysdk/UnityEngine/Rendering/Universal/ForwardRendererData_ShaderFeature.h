#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderFeature_TypeDefinitionIndex = 27773;

	enum class ForwardRendererData_ShaderFeature : ::System::Int32
	{
		IsCharacterEye = 32,
		HairOnlyDepthSwitch = 131072,
		SkipRenderingLayerMaskCollection = 2097152,
		IsTransparent = 128,
		IsStencilShadowCaster = 2048,
		PropertyModeMaterial = 32768,
		IsSilhouette = 262144,
		LodNeedSwitchShader = 4194304,
		IsCharacterStandard = 64,
		SupportDitherWithOpt = 16384,
		PerObjectShadow = 8,
		HasMatCapShader = 8192,
		SupportNapCB = 1,
		SupportSimplify = 65536,
		IsUiShader = 4096,
		DisableCascadeShadow = 1048576,
		IsWeapon = 524288,
		IsAvatarSimple = 256,
		IsCharacterFace = 4,
		IsShadowProxyShader = 16777216,
		SupportCustomLightAxial = 8388608,
		IsAvatarParticle = 1024,
		IsCharacterShader = 2,
		HasMaterialID = 16,
		SupportPartIDs = 33554432,
		IsInstancing = 512,
	};
}
