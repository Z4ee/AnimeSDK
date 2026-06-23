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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEANRENDERERS_OFFSET UNITYSDK_OFFSET(0xF7A1110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0xF7A3030)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ENABLECUSTOMOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xF7A2F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0xF7A12A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINERENDERTYPE_OFFSET UNITYSDK_OFFSET(0xF7A3070)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_DISABLEOUTLINE_OFFSET UNITYSDK_OFFSET(0xF7A0D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNERBEHINDSCENE_OFFSET UNITYSDK_OFFSET(0xF7A0E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNER_OFFSET UNITYSDK_OFFSET(0xF7A0DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0xF7A0F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLOR_OFFSET UNITYSDK_OFFSET(0xF7A0EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xF7A0D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xF7A30B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_MARKDESTROYED_OFFSET UNITYSDK_OFFSET(0xF7A30F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF7A06A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF79FE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xF7A0C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xF7A0CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xF7A0760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xF79FEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0xF7A2FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETCUSTOMOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xF7A2F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_START_OFFSET UNITYSDK_OFFSET(0xF7A0F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF7A12E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A3130)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer_TypeDefinitionIndex = 27021;

	class OutlineObjectRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>* rendererMaterial; // 0x18
		::UnityEngine::Gradient* OutlineColorGradient; // 0x20
		::System::Single OutlineColorIntensity; // 0x28
		::System::Single OutlineAnimLifetime; // 0x2C
		::System::Boolean OccludedByDepth; // 0x30
		::System::Boolean OutlinePerObject; // 0x31
		::System::Boolean OccludedByDepthPerObject; // 0x32
		::System::Boolean OccludedByCharacters; // 0x33
		::System::Boolean enableMultiOutline; // 0x34
		::System::Boolean enableAvatarUI; // 0x35
		::System::Boolean forceVisible; // 0x36
		::System::Boolean outlineInUICamera; // 0x37
		::System::Boolean UseLODGroup; // 0x38
		::System::Boolean useCustomColor; // 0x39
		::UnityEngine::Color customColor; // 0x3C
		::UnityEngine::Renderer* renderer; // 0x50
		::UnityEngine::Material* material; // 0x58
		::System::Single timer; // 0x60
		::System::Int32 layerMask; // 0x64
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x68
		::System::Boolean rendererNeedHizCulling; // 0x70
		::System::Boolean isDestroyed; // 0x71
		::System::Boolean m_Is3DMap; // 0x72
		::System::Boolean m_EnableBoxClip; // 0x73
		::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x74
		::UnityEngine::Vector4 m_LayerSize; // 0x84

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

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_START_OFFSET))(this);
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

		::System::Void EnableCustomOutlineColor(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ENABLECUSTOMOUTLINECOLOR_OFFSET))(this, enable);
		}

		::System::Void SetCustomOutlineColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETCUSTOMOUTLINECOLOR_OFFSET))(this, color);
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

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ISDESTROYED_OFFSET))(this);
		}

		::System::Void MarkDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_MARKDESTROYED_OFFSET))(this);
		}
	};
}
