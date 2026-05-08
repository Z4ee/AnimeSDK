#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEANRENDERERS_OFFSET UNITYSDK_OFFSET(0xF7F7FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0xF7F99A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0xF7F8140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINERENDERTYPE_OFFSET UNITYSDK_OFFSET(0xF7F99E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_DISABLEOUTLINE_OFFSET UNITYSDK_OFFSET(0xF7F7DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNERBEHINDSCENE_OFFSET UNITYSDK_OFFSET(0xF7F7E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNER_OFFSET UNITYSDK_OFFSET(0xF7F7E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0xF7F7F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLOR_OFFSET UNITYSDK_OFFSET(0xF7F7EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xF7F7D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF7F76E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF7F6EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xF7F7CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xF7F7D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xF7F77A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xF7F6FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0xF7F9930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF7F8180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xF7F9A20)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer_TypeDefinitionIndex = 30389;

	class OutlineObjectRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>* rendererMaterial; // 0x18
		::UnityEngine::Gradient* OutlineColorGradient; // 0x20
		::System::Single OutlineColorIntensity; // 0x28
		::System::Single OutlineAnimLifetime; // 0x2C
		::System::Boolean OccludedByDepth; // 0x30
		::System::Boolean OccludedByCharacters; // 0x31
		::System::Boolean enableMultiOutline; // 0x32
		::System::Boolean enableAvatarUI; // 0x33
		::System::Boolean forceVisible; // 0x34
		::System::Boolean outlineInUICamera; // 0x35
		::System::Boolean UseLODGroup; // 0x36
		::UnityEngine::Renderer* renderer; // 0x38
		::UnityEngine::Material* material; // 0x40
		::System::Single timer; // 0x48
		::System::Int32 layerMask; // 0x4C
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x50
		::System::Boolean rendererNeedHizCulling; // 0x58
		::System::Boolean m_Is3DMap; // 0x59
		::System::Boolean m_EnableBoxClip; // 0x5A
		::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x5C
		::UnityEngine::Vector4 m_LayerSize; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Single get_OutlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET))(this);
		}

		static ::System::Boolean get_DisableOutline()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_DISABLEOUTLINE_OFFSET))();
		}

		static ::System::Boolean get_FillInner()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNER_OFFSET))();
		}

		static ::System::Boolean get_FillInnerBehindScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNERBEHINDSCENE_OFFSET))();
		}

		static ::UnityEngine::Color get_InnerColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLOR_OFFSET))();
		}

		static ::System::Single get_InnerColorIntensity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLORINTENSITY_OFFSET))();
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALDISABLE_OFFSET))(this);
		}

		::System::Int32 GetOutlinePass()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void CleanRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEANRENDERERS_OFFSET))(this);
		}

		::System::Void SetBoxClipBounds(::UnityEngine::Vector4 layerCenterAndHeight, ::UnityEngine::Vector4 layerSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET))(this, layerCenterAndHeight, layerSize);
		}

		::System::Void ClearBoxClipBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType GetOutlineRenderType()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINERENDERTYPE_OFFSET))(this);
		}
	};
}
