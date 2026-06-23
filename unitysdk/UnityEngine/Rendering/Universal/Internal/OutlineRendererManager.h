#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class IOutlineObjectRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x1AEE5760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AF0FAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1AF0E350)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETRENDERERMESHNAME_OFFSET UNITYSDK_OFFSET(0x1AF10740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1AF0E3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REQUIRECAMERADEPTHFOROUTLINEOBJECTPASS_OFFSET UNITYSDK_OFFSET(0x1AF10150)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET UNITYSDK_OFFSET(0x1AF0FA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1AF0E2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET UNITYSDK_OFFSET(0x1AF0F410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET UNITYSDK_OFFSET(0x1AF0E5F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1AEEE760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SHOULDSKIPOUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x1AF10090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1AEF1810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1AF0E540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF10A70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererManager_TypeDefinitionIndex = 26192;

	class OutlineRendererManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>** StaticGet_s_OutlineRenderers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x223A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>** StaticGet_s_OutlineObjRendererMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x223A8);
		}
		static ::System::Int32* StaticGet__SingleColorParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7540);
		}
		static ::System::Int32* StaticGet__OutlineTextureOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7544);
		}
		static ::System::Int32* StaticGet__WindParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7548);
		}
		static ::System::Single* StaticGet_s_OutlineThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x754C);
		}
		static ::System::Int32* StaticGet_s_UiCameraOutlineCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7550);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7554);
		}
		static ::System::Boolean* StaticGet_s_FillInnerBehindScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7558);
		}
		static ::System::Boolean* StaticGet_s_OutlineFlicker()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7559);
		}
		static ::System::Int32* StaticGet__IsAvatarUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x755C);
		}
		static ::System::Int32* StaticGet__OutlineThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7560);
		}
		static ::System::Int32* StaticGet__Cutoff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7564);
		}
		static ::System::Boolean* StaticGet_s_FillInner()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7568);
		}
		static ::System::Boolean* StaticGet_s_RequireOutlineBlit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7569);
		}
		static ::System::Boolean* StaticGet_s_DisableOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x756A);
		}
		static ::System::Int32* StaticGet__OutlineTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x756C);
		}
		static ::System::Single* StaticGet_s_InnerColorIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7570);
		}
		static ::System::Int32* StaticGet__SingleColorParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7574);
		}
		static ::System::Int32* StaticGet__WindParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7578);
		}
		static ::UnityEngine::Color* StaticGet_s_InnerColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x757C);
		}
		static ::System::Int32* StaticGet__OutlineTextureTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x758C);
		}
		static ::System::Int32* StaticGet__InnerColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7590);
		}
		static ::System::Int32* StaticGet__FlickerSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7594);
		}
		static ::System::Int32* StaticGet__SingleColorParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7598);
		}
		static ::System::Int32* StaticGet__WindParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x759C);
		}
		static ::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType* StaticGet_s_LastActiveOutlineRenderType()
		{
			return (::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x75A0);
		}
		static ::System::Int32* StaticGet__WindParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x75A4);
		}
		static ::System::Int32* StaticGet__EnableFlicker()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x75A8);
		}
		static ::System::Int32* StaticGet__BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x75AC);
		}
		// static const ::System::String* kSkipOutlineMeshNameToken; // 0x0
		// static const ::System::String* kDepthOcclusionPerObjectKeyword; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET))(thickness);
		}

		static ::System::Single GetOutlineThickness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Void Unregister(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Boolean CheckRequireOutlinePass(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState, ::System::Boolean applyPostProcessing)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET))(renderState, applyPostProcessing);
		}

		static ::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineNormal(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineEtherEye(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void ResetGlobalOutlineParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET))();
		}

		static ::System::Void DrawOutlineObjectRenderers(::System::Int32 cullingMask, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET))(cullingMask, cmd);
		}

		static ::System::Boolean RequireCameraDepthForOutlineObjectPass()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REQUIRECAMERADEPTHFOROUTLINEOBJECTPASS_OFFSET))();
		}

		static ::System::Boolean ShouldSkipOutlineRenderer(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SHOULDSKIPOUTLINERENDERER_OFFSET))(renderer);
		}

		static ::System::String* GetRendererMeshName(::UnityEngine::Renderer* renderer)
		{
			return ((::System::String*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETRENDERERMESHNAME_OFFSET))(renderer);
		}

		static ::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(cmd);
		}
	};
}
