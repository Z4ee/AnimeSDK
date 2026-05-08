#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6F7420)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPassNames_TypeDefinitionIndex = 29892;

	class ShaderPassNames : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55A0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Silhouette()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55A4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_UIAvatarShadowPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55A8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPassForOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55AC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FullResCharacterToon()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55B0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FluidSourcePass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55B4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOffscreenTransparentEye()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55B8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55BC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55C0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_D()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55C4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorPreZ()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55C8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharOutlineDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55CC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OpaqueForwardAfterDeferredShading()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55D0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EasyShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55D4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterSSR()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55D8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Ocean()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55DC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Chessboard3DUI()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55E0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVector()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55E4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteTransparentMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55E8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentModulateCG()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55EC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55F0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OapqueAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55F4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55F8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OceanEdgeFoam()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55FC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferredWithStencilShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5600);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_BeforeTransparentFullRes()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5604);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparentPreview()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5608);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SeparateEmission()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x560C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5610);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5614);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterHairOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5618);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLightMVOff()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x561C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostAO()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5620);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5624);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5628);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x562C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OverlayFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Caustics()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5634);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparent()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5638);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x563C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PlanarReflectionCubeCorrected()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5640);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FXStencilOverride()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5644);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5648);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x564C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PreZPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5650);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_RevertMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5654);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_S()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5658);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x565C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterNoTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5664);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryAlphaBlendPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5668);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MirrorReflection()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x566C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SpineOutlineMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5674);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfResDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5678);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x567C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_AvatarGeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5680);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PartialBlur()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5684);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CountDownNumber()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5688);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowReceiver()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x568C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVectorForOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5690);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ReadMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5694);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DistortionOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5698);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentFullRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x569C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLight()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56A0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56A4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56A8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterDepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56AC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56B0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Water()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x56B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET))();
		}
	};
}
