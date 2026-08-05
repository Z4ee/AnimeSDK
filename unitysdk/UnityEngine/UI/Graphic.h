#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/CoroutineTween/ColorTween.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class ICanvasRaycastFilter; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class GraphicRaycaster; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::CoroutineTween { template <typename T> class TweenRunner_1; }

#define UNITYENGINE_UI_GRAPHIC_CACHECANVAS_OFFSET UNITYSDK_OFFSET(0x1F445E90)
#define UNITYENGINE_UI_GRAPHIC_CACHERAYCASTFILTERS_OFFSET UNITYSDK_OFFSET(0x1F44B110)
#define UNITYENGINE_UI_GRAPHIC_CREATECOLORFROMALPHA_OFFSET UNITYSDK_OFFSET(0x1F44BFF0)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADEALPHA_OFFSET UNITYSDK_OFFSET(0x1F44C060)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_1_OFFSET UNITYSDK_OFFSET(0x1F44B790)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0x1F44B6E0)
#define UNITYENGINE_UI_GRAPHIC_DOLEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F448390)
#define UNITYENGINE_UI_GRAPHIC_DOMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F448CC0)
#define UNITYENGINE_UI_GRAPHIC_FASTRAYCASTISBLOCKEDBYPARENTCANVASGROUP_OFFSET UNITYSDK_OFFSET(0x1F44AEA0)
#define UNITYENGINE_UI_GRAPHIC_FASTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1F44AA90)
#define UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET UNITYSDK_OFFSET(0x1F449E80)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x1F446230)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1F445C50)
#define UNITYENGINE_UI_GRAPHIC_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1F444D70)
#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTGRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F444B40)
#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F446480)
#define UNITYENGINE_UI_GRAPHIC_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1F4460F0)
#define UNITYENGINE_UI_GRAPHIC_GET_ISRAYCASTVALIDBYCANVASGROUP_OFFSET UNITYSDK_OFFSET(0x1F4451C0)
#define UNITYENGINE_UI_GRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F446A20)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F444D50)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1F4451E0)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1F4465A0)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1F43FB10)
#define UNITYENGINE_UI_GRAPHIC_GET_RAYCASTER_OFFSET UNITYSDK_OFFSET(0x1F446310)
#define UNITYENGINE_UI_GRAPHIC_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1F444E70)
#define UNITYENGINE_UI_GRAPHIC_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F443820)
#define UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F4451F0)
#define UNITYENGINE_UI_GRAPHIC_GET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F444D30)
#define UNITYENGINE_UI_GRAPHIC_GET_VERTSDIRTY_OFFSET UNITYSDK_OFFSET(0x1F4451D0)
#define UNITYENGINE_UI_GRAPHIC_GET_WORKERMESH_OFFSET UNITYSDK_OFFSET(0x1F449A80)
#define UNITYENGINE_UI_GRAPHIC_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F447E70)
#define UNITYENGINE_UI_GRAPHIC_ISRAYCASTBLOCKEDBYFILTERS_OFFSET UNITYSDK_OFFSET(0x1F44AB20)
#define UNITYENGINE_UI_GRAPHIC_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F447E30)
#define UNITYENGINE_UI_GRAPHIC_MODIFYMESHOPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1F449510)
#define UNITYENGINE_UI_GRAPHIC_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1F4497F0)
#define UNITYENGINE_UI_GRAPHIC_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F4458F0)
#define UNITYENGINE_UI_GRAPHIC_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1F447370)
#define UNITYENGINE_UI_GRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F447410)
#define UNITYENGINE_UI_GRAPHIC_ONCULLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1F447550)
#define UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F447170)
#define UNITYENGINE_UI_GRAPHIC_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F442270)
#define UNITYENGINE_UI_GRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F446CA0)
#define UNITYENGINE_UI_GRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F446A80)
#define UNITYENGINE_UI_GRAPHIC_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0x1F449D70)
#define UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F4456B0)
#define UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F445750)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_1_OFFSET UNITYSDK_OFFSET(0x1F442930)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F449DC0)
#define UNITYENGINE_UI_GRAPHIC_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F441DA0)
#define UNITYENGINE_UI_GRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F445DC0)
#define UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0x1F44B430)
#define UNITYENGINE_UI_GRAPHIC_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F44A2C0)
#define UNITYENGINE_UI_GRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0x1F4476A0)
#define UNITYENGINE_UI_GRAPHIC_REFRESHCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1F44AA40)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C1A0)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C460)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C300)
#define UNITYENGINE_UI_GRAPHIC_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1F4452E0)
#define UNITYENGINE_UI_GRAPHIC_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1F4454A0)
#define UNITYENGINE_UI_GRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1F443110)
#define UNITYENGINE_UI_GRAPHIC_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1F44A280)
#define UNITYENGINE_UI_GRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1F43FDD0)
#define UNITYENGINE_UI_GRAPHIC_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1F444D80)
#define UNITYENGINE_UI_GRAPHIC_SET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F444D60)
#define UNITYENGINE_UI_GRAPHIC_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1F4464E0)
#define UNITYENGINE_UI_GRAPHIC_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1F444E80)
#define UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F445200)
#define UNITYENGINE_UI_GRAPHIC_SET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F444D40)
#define UNITYENGINE_UI_GRAPHIC_TRIGGERMATERIALDIRTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F445660)
#define UNITYENGINE_UI_GRAPHIC_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F44C620)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C250)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C510)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F44C3B0)
#define UNITYENGINE_UI_GRAPHIC_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1F448330)
#define UNITYENGINE_UI_GRAPHIC_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F447EB0)
#define UNITYENGINE_UI_GRAPHIC_UPDATERAYCASTVALIDBYCANVASGROUP_OFFSET UNITYSDK_OFFSET(0x1F445000)
#define UNITYENGINE_UI_GRAPHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44C5C0)
#define UNITYENGINE_UI_GRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F445210)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F44C9D0)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1F44CA60)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F44C670)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F44C940)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F44C700)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F44C8B0)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F44CAF0)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F44CB80)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F44CC10)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F44C790)
#define UNITYENGINE_UI_GRAPHIC___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F44C820)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Graphic_TypeDefinitionIndex = 19212;

	class Graphic : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_DefaultUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x86E0);
		}
		static ::UnityEngine::Texture2D** StaticGet_s_WhiteTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x86E8);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}
		static ::UnityEngine::Mesh** StaticGet_s_Mesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x86F8);
		}
		static ::System::Boolean* StaticGet_s_UseRegistryForModifier()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x42C0);
		}
		::UnityEngine::Material* m_Material; // 0x18
		::System::Boolean _verticesDirtyWhenLightweightDeactive_k__BackingField; // 0x20
		::System::Boolean _materialDirtyWhenLightweightDeactive_k__BackingField; // 0x21
		::UnityEngine::Color m_Color; // 0x24
		::System::Boolean m_SkipLayoutUpdate; // 0x34
		::System::Boolean m_SkipMaterialUpdate; // 0x35
		::System::Boolean m_RaycastTarget; // 0x36
		::UnityEngine::RectTransform* m_RectTransform; // 0x38
		::UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x40
		::UnityEngine::Canvas* m_Canvas; // 0x48
		::UnityEngine::UI::GraphicRaycaster* m_Raycaster; // 0x50
		::System::Boolean m_VertsDirty; // 0x58
		::System::Boolean m_MaterialDirty; // 0x59
		::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback; // 0x60
		::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback; // 0x68
		::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback; // 0x70
		::UnityEngine::Mesh* m_CachedMesh; // 0x78
		::Il2CppArray<::UnityEngine::Vector2>* m_CachedUvs; // 0x80
		::System::Boolean m_ParentCanvasGroupAllowRaycast; // 0x88
		::System::Boolean m_RaycastFiltersCached; // 0x89
		::System::Collections::Generic::List_1<::UnityEngine::ICanvasRaycastFilter*>* m_RaycastFiltersCacheList; // 0x90
		::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner; // 0x98
		::System::Boolean _useLegacyMeshGeneration_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultGraphicMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEFAULTGRAPHICMATERIAL_OFFSET))();
		}

		::System::Boolean get_verticesDirtyWhenLightweightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void set_verticesDirtyWhenLightweightDeactive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_materialDirtyWhenLightweightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void set_materialDirtyWhenLightweightDeactive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_COLOR_OFFSET))(this, value);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::System::Void set_raycastTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_RAYCASTTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsRaycastValidByCanvasGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_ISRAYCASTVALIDBYCANVASGROUP_OFFSET))(this);
		}

		::System::Boolean get_VertsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_VERTSDIRTY_OFFSET))(this);
		}

		::System::Boolean get_MaterialDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIALDIRTY_OFFSET))(this);
		}

		::System::Boolean get_useLegacyMeshGeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET))(this);
		}

		::System::Void set_useLegacyMeshGeneration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET))(this, value);
		}

		::System::Void SetAllDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETALLDIRTY_OFFSET))(this);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void TriggerMaterialDirtyCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_TRIGGERMATERIALDIRTYCALLBACK_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEPTH_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_CANVAS_OFFSET))(this);
		}

		::UnityEngine::UI::GraphicRaycaster* get_raycaster()
		{
			return ((::UnityEngine::UI::GraphicRaycaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RAYCASTER_OFFSET))(this);
		}

		::System::Void CacheCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CACHECANVAS_OFFSET))(this);
		}

		::UnityEngine::CanvasRenderer* get_canvasRenderer()
		{
			return ((::UnityEngine::CanvasRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_CANVASRENDERER_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEFAULTMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnCullingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONCULLINGCHANGED_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REBUILD_OFFSET))(this, update);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void DoMeshGeneration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_DOMESHGENERATION_OFFSET))(this);
		}

		::System::Void ModifyMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_MODIFYMESH_OFFSET))(this);
		}

		::System::Void ModifyMeshOptimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_MODIFYMESHOPTIMIZE_OFFSET))(this);
		}

		::System::Void DoLegacyMeshGeneration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_DOLEGACYMESHGENERATION_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* get_workerMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_WORKERMESH_OFFSET))();
		}

		::System::Void OnFillVBO(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vbo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONFILLVBO_OFFSET))(this, vbo);
		}

		::System::Void OnPopulateMesh(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET))(this, m);
		}

		::System::Void OnPopulateMesh_1(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_1_OFFSET))(this, vh);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_RAYCAST_OFFSET))(this, sp, eventCamera);
		}

		::System::Void RefreshCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REFRESHCACHEDATA_OFFSET))(this);
		}

		::System::Boolean FastRaycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_FASTRAYCAST_OFFSET))(this, sp, eventCamera);
		}

		::System::Boolean UpdateRaycastValidByCanvasGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UPDATERAYCASTVALIDBYCANVASGROUP_OFFSET))(this);
		}

		static ::System::Boolean FastRaycastIsBlockedByParentCanvasGroup(::UnityEngine::Transform* transform, ::UnityEngine::Canvas* canvas)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_FASTRAYCASTISBLOCKEDBYPARENTCANVASGROUP_OFFSET))(transform, canvas);
		}

		static ::System::Void CacheRaycastFilters(::UnityEngine::Transform* transform, ::UnityEngine::Canvas* canvas, ::System::Collections::Generic::List_1<::UnityEngine::ICanvasRaycastFilter*>*& cacheList)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::System::Collections::Generic::List_1<::UnityEngine::ICanvasRaycastFilter*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CACHERAYCASTFILTERS_OFFSET))(transform, canvas, cacheList);
		}

		::System::Boolean IsRaycastBlockedByFilters(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ISRAYCASTBLOCKEDBYFILTERS_OFFSET))(this, sp, eventCamera);
		}

		::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Rect GetPixelAdjustedRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET))(this);
		}

		::System::Void CrossFadeColor(::UnityEngine::Color targetColor, ::System::Single duration, ::System::Boolean ignoreTimeScale, ::System::Boolean useAlpha)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET))(this, targetColor, duration, ignoreTimeScale, useAlpha);
		}

		::System::Void CrossFadeColor_1(::UnityEngine::Color targetColor, ::System::Single duration, ::System::Boolean ignoreTimeScale, ::System::Boolean useAlpha, ::System::Boolean useRGB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_1_OFFSET))(this, targetColor, duration, ignoreTimeScale, useAlpha, useRGB);
		}

		static ::UnityEngine::Color CreateColorFromAlpha(::System::Single alpha)
		{
			return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CREATECOLORFROMALPHA_OFFSET))(alpha);
		}

		::System::Void CrossFadeAlpha(::System::Single alpha, ::System::Single duration, ::System::Boolean ignoreTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADEALPHA_OFFSET))(this, alpha, duration, ignoreTimeScale);
		}

		::System::Void RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this, action);
		}

		::System::Void UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(this, action);
		}

		::System::Void RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYVERTICESCALLBACK_OFFSET))(this, action);
		}

		::System::Void UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYVERTICESCALLBACK_OFFSET))(this, action);
		}

		::System::Void RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYMATERIALCALLBACK_OFFSET))(this, action);
		}

		::System::Void UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYMATERIALCALLBACK_OFFSET))(this, action);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}
	};
}
