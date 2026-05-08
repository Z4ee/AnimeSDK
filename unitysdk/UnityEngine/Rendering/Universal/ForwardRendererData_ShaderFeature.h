#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderFeature_TypeDefinitionIndex = 29850;

	enum class ForwardRendererData_ShaderFeature : ::System::Int32
	{
		SupportNapCB = 1,
		IsCharacterShader = 2,
		IsCharacterFace = 4,
		PerObjectShadow = 8,
		HasMaterialID = 16,
		IsCharacterEye = 32,
		IsCharacterStandard = 64,
		IsTransparent = 128,
		IsAvatarSimple = 256,
		IsInstancing = 512,
		IsAvatarParticle = 1024,
		IsStencilShadowCaster = 2048,
		IsUiShader = 4096,
		HasMatCapShader = 8192,
		SupportDitherWithOpt = 16384,
		PropertyModeMaterial = 32768,
		SupportSimplify = 65536,
		HairOnlyDepthSwitch = 131072,
		IsSilhouette = 262144,
		IsWeapon = 524288,
		DisableCascadeShadow = 1048576,
		SkipRenderingLayerMaskCollection = 2097152,
		LodNeedSwitchShader = 4194304,
		SupportCustomLightAxial = 8388608,
		IsShadowProxyShader = 16777216,
		SupportPartIDs = 33554432,
	};
}
