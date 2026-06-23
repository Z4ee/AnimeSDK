#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9A5270)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPassNames_TypeDefinitionIndex = 26518;

	class ShaderPassNames : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_UIAvatarShadowPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5030);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5034);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PlanarReflectionCubeCorrected()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5038);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVector()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x503C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryAlphaBlendPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5040);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SeparateEmission()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5044);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MirrorReflection()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5048);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparent()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x504C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5050);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOffscreenTransparentEye()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5054);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CountDownNumber()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5058);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Ocean()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x505C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteTransparentMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5060);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EasyShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5064);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentFullRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5068);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterHairOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x506C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OverlayFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5070);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FullResCharacterToon()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5074);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5078);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x507C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentModulateCG()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5080);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorPreZ()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5084);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5088);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_BeforeTransparentFullRes()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x508C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PartialBlur()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5094);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ReadMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5098);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GpuCrowdToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x509C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OpaqueForwardAfterDeferredShading()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50A0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50A4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferredWithStencilShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50A8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FXStencilOverride()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50AC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Caustics()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50B0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50B4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FluidSourcePass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50B8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50BC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Chessboard3DUI()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50C0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostAO()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50C4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharOutlineDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50C8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PreZPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50CC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Silhouette()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50D0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVectorForOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50D4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50D8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50DC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50E0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Water()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50E4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfResDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50E8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50EC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50F0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowReceiver()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50F4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterNoTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50F8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_S()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x50FC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_D()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5100);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5104);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5108);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x510C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SpineOutlineMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5110);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparentPreview()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5114);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLight()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5118);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OceanEdgeFoam()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x511C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_RevertMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5120);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OapqueAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5124);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5128);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_AvatarGeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x512C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5130);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5134);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterSSR()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5138);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterDepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x513C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLightMVOff()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5140);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DistortionOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5144);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5148);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPassForOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x514C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET))();
		}
	};
}
