#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFFCA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPassNames_TypeDefinitionIndex = 27929;

	class ShaderPassNames : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FXStencilOverride()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EB0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorPreZ()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EB4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DistortionOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EB8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_S()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EBC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Ocean()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EC0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FullResCharacterToon()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EC4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EC8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Caustics()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4ECC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4ED0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SpineOutlineMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4ED4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterHairOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4ED8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EDC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_AvatarGeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EE0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLightMVOff()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EE4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPassForOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EE8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PlanarReflectionCubeCorrected()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EEC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FluidSourcePass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EF0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EF4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EF8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PreZPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4EFC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F00);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Water()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F04);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OapqueAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F08);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OverlayFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F0C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentFullRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F10);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F14);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Silhouette()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F18);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryAlphaBlendPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F1C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparentPreview()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F24);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OpaqueForwardAfterDeferredShading()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F28);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferredWithStencilShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F2C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLight()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F30);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_RevertMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F34);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_UIAvatarShadowPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F38);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteTransparentMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F3C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F40);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowReceiver()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F44);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OceanEdgeFoam()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F48);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F4C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CountDownNumber()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F54);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharOutlineDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F58);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterNoTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F5C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PartialBlur()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F60);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_D()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F64);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostAO()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F68);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOffscreenTransparentEye()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F6C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GpuCrowdToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F70);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVectorForOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F74);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F78);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfResDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F7C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ReadMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVector()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F84);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterSSR()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F88);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F8C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F90);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_BeforeTransparentFullRes()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F94);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F98);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4F9C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FA0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FA4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MirrorReflection()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FA8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterDepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FAC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Chessboard3DUI()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FB0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentModulateCG()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FB4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparent()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FB8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EasyShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FBC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SeparateEmission()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FC0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FC4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FC8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x4FCC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET))();
		}
	};
}
