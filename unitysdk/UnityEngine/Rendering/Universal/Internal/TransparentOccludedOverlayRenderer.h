#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_DRAWALL_OFFSET UNITYSDK_OFFSET(0x1BC62830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_DRAWINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC62D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ENSURERUNTIMEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC632A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_GETDEFAULTTEMPLATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC63EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_GETRENDERERMESHNAME_OFFSET UNITYSDK_OFFSET(0x1BC646A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_HASANYVALIDRENDERER_OFFSET UNITYSDK_OFFSET(0x1BC625A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ISSUPPORTEDRENDERER_OFFSET UNITYSDK_OFFSET(0x1BC623D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC61FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC61A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BC62330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_REFRESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1BC61B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_RELEASERUNTIMEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC620B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SHOULDSKIPRENDERER_OFFSET UNITYSDK_OFFSET(0x1BC63E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SYNCMATERIALPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1BC643E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SYNCMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BC61E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC64B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC649D0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int TransparentOccludedOverlayRenderer_TypeDefinitionIndex = 26986;

	class TransparentOccludedOverlayRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::TransparentOccludedOverlayRenderer*>** StaticGet_s_TempInstances()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::TransparentOccludedOverlayRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x217D0);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultTemplateMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x217D8);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::TransparentOccludedOverlayRenderer*>** StaticGet_s_Instances()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::TransparentOccludedOverlayRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x217E0);
		}
		static ::System::Int32* StaticGet_OverlayBaseOcclusionThresholdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51D0);
		}
		static ::System::Int32* StaticGet_OcclusionDepthEpsilonID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51D4);
		}
		static ::System::Int32* StaticGet_OverlayBaseColorAID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51D8);
		}
		static ::System::Int32* StaticGet_OverlayBaseTexIntensityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51DC);
		}
		static ::System::Int32* StaticGet_OverlayBaseColorBID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51E0);
		}
		static ::System::Int32* StaticGet_OverlayIntensityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51E4);
		}
		static ::System::Int32* StaticGet__CameraNormalTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51E8);
		}
		static ::System::Int32* StaticGet_OverlayBaseTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51EC);
		}
		static ::System::Int32* StaticGet_OverlayBaseScrollSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51F0);
		}
		static ::System::Int32* StaticGet_OverlayColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransparentOccludedOverlayRenderer_TypeDefinitionIndex)->GetStaticField(0x51F4);
		}
		// static const ::System::String* kShaderName; // 0x0
		// static const ::System::String* kSkipMeshNameToken; // 0x0
		::UnityEngine::Color overlayColor; // 0x18
		::System::Single overlayIntensity; // 0x28
		::UnityEngine::Texture2D* overlayBaseTexture; // 0x30
		::System::Single overlayBaseTextureIntensity; // 0x38
		::UnityEngine::Vector2 overlayBaseTextureTiling; // 0x3C
		::UnityEngine::Color overlayBaseColorA; // 0x44
		::UnityEngine::Color overlayBaseColorB; // 0x54
		::System::Single overlayBaseScrollSpeed; // 0x64
		::System::Single occlusionDepthEpsilon; // 0x68
		::System::Single overlayBaseOcclusionThreshold; // 0x6C
		::System::Boolean includeChildren; // 0x70
		::System::Boolean forceVisible; // 0x71
		::UnityEngine::Material* overrideMaterial; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* m_Renderers; // 0x80
		::UnityEngine::Material* m_RuntimeMaterial; // 0x88
		::UnityEngine::Material* m_RuntimeMaterialSource; // 0x90
		::System::Boolean m_LastIncludeChildren; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void RefreshRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_REFRESHRENDERERS_OFFSET))(this);
		}

		static ::System::Boolean HasAnyValidRenderer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_HASANYVALIDRENDERER_OFFSET))();
		}

		static ::System::Void DrawAll(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::System::Int32 cameraCullingMask)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_DRAWALL_OFFSET))(cmd, camera, cameraCullingMask);
		}

		::System::Void DrawInternal(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 cameraCullingMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_DRAWINTERNAL_OFFSET))(this, cmd, cameraCullingMask);
		}

		::UnityEngine::Material* EnsureRuntimeMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ENSURERUNTIMEMATERIAL_OFFSET))(this);
		}

		::System::Void SyncMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SYNCMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void SyncMaterialProperties_1(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SYNCMATERIALPROPERTIES_1_OFFSET))(this, material);
		}

		::System::Void ReleaseRuntimeMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_RELEASERUNTIMEMATERIAL_OFFSET))(this);
		}

		static ::UnityEngine::Material* GetDefaultTemplateMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_GETDEFAULTTEMPLATEMATERIAL_OFFSET))();
		}

		static ::System::Boolean IsSupportedRenderer(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_ISSUPPORTEDRENDERER_OFFSET))(renderer);
		}

		static ::System::Boolean ShouldSkipRenderer(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_SHOULDSKIPRENDERER_OFFSET))(renderer);
		}

		static ::System::String* GetRendererMeshName(::UnityEngine::Renderer* renderer)
		{
			return ((::System::String*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TRANSPARENTOCCLUDEDOVERLAYRENDERER_GETRENDERERMESHNAME_OFFSET))(renderer);
		}
	};
}
