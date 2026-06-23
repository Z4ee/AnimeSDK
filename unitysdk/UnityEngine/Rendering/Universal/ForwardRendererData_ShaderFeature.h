#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderFeature_TypeDefinitionIndex = 26593;

	enum class ForwardRendererData_ShaderFeature : ::System::Int32
	{
		HasMatCapShader = 8192,
		SupportSimplify = 65536,
		IsInstancing = 512,
		HasMaterialID = 16,
		SupportDitherWithOpt = 16384,
		IsAvatarParticle = 1024,
		IsShadowProxyShader = 16777216,
		SupportPartIDs = 33554432,
		IsStencilShadowCaster = 2048,
		IsCharacterStandard = 64,
		DisableCascadeShadow = 1048576,
		PerObjectShadow = 8,
		SupportNapCB = 1,
		IsCharacterFace = 4,
		IsAvatarSimple = 256,
		IsWeapon = 524288,
		IsSilhouette = 262144,
		LodNeedSwitchShader = 4194304,
		IsCharacterEye = 32,
		PropertyModeMaterial = 32768,
		IsTransparent = 128,
		SupportCustomLightAxial = 8388608,
		SkipRenderingLayerMaskCollection = 2097152,
		IsUiShader = 4096,
		HairOnlyDepthSwitch = 131072,
		IsCharacterShader = 2,
	};
}
