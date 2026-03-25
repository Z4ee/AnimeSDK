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
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::CoroutineTween { template <typename T> class TweenRunner_1; }

#define UNITYENGINE_UI_GRAPHIC_CACHECANVAS_OFFSET UNITYSDK_OFFSET(0x18B11050)
#define UNITYENGINE_UI_GRAPHIC_CHECKORINITTWEENRUNNER_OFFSET UNITYSDK_OFFSET(0x18B10A40)
#define UNITYENGINE_UI_GRAPHIC_CREATECOLORFROMALPHA_OFFSET UNITYSDK_OFFSET(0x18B145A0)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADEALPHA_OFFSET UNITYSDK_OFFSET(0x18B145C0)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_1_OFFSET UNITYSDK_OFFSET(0x18B14040)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0x18B14000)
#define UNITYENGINE_UI_GRAPHIC_DOLEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x18B12120)
#define UNITYENGINE_UI_GRAPHIC_DOMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x18B12640)
#define UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET UNITYSDK_OFFSET(0x18B135D0)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x18B103B0)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x18B10DD0)
#define UNITYENGINE_UI_GRAPHIC_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x18B10970)
#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTGRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B108C0)
#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B114F0)
#define UNITYENGINE_UI_GRAPHIC_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x18B11430)
#define UNITYENGINE_UI_GRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B11840)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18B10A00)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18B11620)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18B115A0)
#define UNITYENGINE_UI_GRAPHIC_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x18B10980)
#define UNITYENGINE_UI_GRAPHIC_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B10BB0)
#define UNITYENGINE_UI_GRAPHIC_GET_ROOTCANVASINCLUDEINACTIVE_OFFSET UNITYSDK_OFFSET(0x18B114C0)
#define UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x18B109C0)
#define UNITYENGINE_UI_GRAPHIC_GET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x18B13DB0)
#define UNITYENGINE_UI_GRAPHIC_GET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18B109E0)
#define UNITYENGINE_UI_GRAPHIC_GET_WORKERMESH_OFFSET UNITYSDK_OFFSET(0x18B130E0)
#define UNITYENGINE_UI_GRAPHIC_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B11EF0)
#define UNITYENGINE_UI_GRAPHIC_INITUIDEFAULTMAT_OFFSET UNITYSDK_OFFSET(0x18B14890)
#define UNITYENGINE_UI_GRAPHIC_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B11EE0)
#define UNITYENGINE_UI_GRAPHIC_LINEARTOGAMMASPACE_1_OFFSET UNITYSDK_OFFSET(0x18B13F80)
#define UNITYENGINE_UI_GRAPHIC_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x18B13DE0)
#define UNITYENGINE_UI_GRAPHIC_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18B10D80)
#define UNITYENGINE_UI_GRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18B11BE0)
#define UNITYENGINE_UI_GRAPHIC_ONCULLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x18B11C90)
#define UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B11BA0)
#define UNITYENGINE_UI_GRAPHIC_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B137D0)
#define UNITYENGINE_UI_GRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B11930)
#define UNITYENGINE_UI_GRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B11870)
#define UNITYENGINE_UI_GRAPHIC_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0x18B13200)
#define UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x18B11A90)
#define UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x18B11AF0)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_1_OFFSET UNITYSDK_OFFSET(0x18B13280)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18B13210)
#define UNITYENGINE_UI_GRAPHIC_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x18B10CD0)
#define UNITYENGINE_UI_GRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18B10FE0)
#define UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0x18B13C50)
#define UNITYENGINE_UI_GRAPHIC_RAYCAST_OFFSET UNITYSDK_OFFSET(0x18B137F0)
#define UNITYENGINE_UI_GRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0x18B11D40)
#define UNITYENGINE_UI_GRAPHIC_REGISTERCHANGERAYCASTTARGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B147D0)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14650)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14750)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B146D0)
#define UNITYENGINE_UI_GRAPHIC_RESETUIDEFAULTMAT_OFFSET UNITYSDK_OFFSET(0x18B14850)
#define UNITYENGINE_UI_GRAPHIC_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x18B10A80)
#define UNITYENGINE_UI_GRAPHIC_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x18B10AE0)
#define UNITYENGINE_UI_GRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x18B10C80)
#define UNITYENGINE_UI_GRAPHIC_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x18B137E0)
#define UNITYENGINE_UI_GRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x18B10C30)
#define UNITYENGINE_UI_GRAPHIC_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x18B03C50)
#define UNITYENGINE_UI_GRAPHIC_SET_MATERIALDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18B10A10)
#define UNITYENGINE_UI_GRAPHIC_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18B115C0)
#define UNITYENGINE_UI_GRAPHIC_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x18B10990)
#define UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x18B109D0)
#define UNITYENGINE_UI_GRAPHIC_SET_USERENDERERCOLOR_OFFSET UNITYSDK_OFFSET(0x18B13DC0)
#define UNITYENGINE_UI_GRAPHIC_SET_VERTICESDIRTYWHENLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18B109F0)
#define UNITYENGINE_UI_GRAPHIC_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B14910)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERCHANGERAYCASTTARGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14810)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14690)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14790)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B14710)
#define UNITYENGINE_UI_GRAPHIC_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18B12100)
#define UNITYENGINE_UI_GRAPHIC_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B11F00)
#define UNITYENGINE_UI_GRAPHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B148D0)
#define UNITYENGINE_UI_GRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B10A20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Graphic_TypeDefinitionIndex = 5584;

	class Graphic : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_Mesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x4F40);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x4F48);
		}
		static ::UnityEngine::Texture2D** StaticGet_s_WhiteTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultUI()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Graphic_TypeDefinitionIndex)->GetStaticField(0x4F58);
		}
		::UnityEngine::Material* m_Material; // 0x18
		::UnityEngine::Color m_Color; // 0x20
		::System::Boolean m_SkipLayoutUpdate; // 0x30
		::System::Boolean m_SkipMaterialUpdate; // 0x31
		::System::Boolean m_RaycastTarget; // 0x32
		::UnityEngine::RectTransform* m_RectTransform; // 0x38
		::UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x40
		::UnityEngine::Canvas* m_Canvas; // 0x48
		::UnityEngine::Canvas* m_RootCanvasIncludeInactive; // 0x50
		::System::Boolean m_VertsDirty; // 0x58
		::System::Boolean m_MaterialDirty; // 0x59
		::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback; // 0x60
		::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback; // 0x68
		::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback; // 0x70
		::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>* m_OnRaycastTargetChangeCallback; // 0x78
		::UnityEngine::Mesh* m_CachedMesh; // 0x80
		::Il2CppArray<::UnityEngine::Vector2>* m_CachedUvs; // 0x88
		::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner; // 0x90
		::System::Boolean _useLegacyMeshGeneration_k__BackingField; // 0x98
		::System::Boolean _verticesDirtyWhenLightweightDeactive_k__BackingField; // 0x99
		::System::Boolean _materialDirtyWhenLightweightDeactive_k__BackingField; // 0x9A
		::System::Boolean m_UseRendererColor; // 0x9B

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

		::System::Boolean get_useLegacyMeshGeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET))(this);
		}

		::System::Void set_useLegacyMeshGeneration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET))(this, value);
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

		::System::Void CheckOrInitTweenRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CHECKORINITTWEENRUNNER_OFFSET))(this);
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

		::UnityEngine::Canvas* get_rootCanvasIncludeInactive()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_ROOTCANVASINCLUDEINACTIVE_OFFSET))(this);
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

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET))(this);
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

		::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Rect GetPixelAdjustedRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET))(this);
		}

		::System::Boolean get_useRendererColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_USERENDERERCOLOR_OFFSET))(this);
		}

		::System::Void set_useRendererColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_USERENDERERCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color LinearToGammaSpace(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_LINEARTOGAMMASPACE_OFFSET))(this, color);
		}

		::System::Single LinearToGammaSpace_1(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_LINEARTOGAMMASPACE_1_OFFSET))(this, value);
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

		::System::Void RegisterChangeRaycastTargetCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERCHANGERAYCASTTARGETCALLBACK_OFFSET))(this, action);
		}

		::System::Void UnregisterChangeRaycastTargetCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::UI::Graphic*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERCHANGERAYCASTTARGETCALLBACK_OFFSET))(this, action);
		}

		static ::System::Void ResetUIDefaultMat()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_RESETUIDEFAULTMAT_OFFSET))();
		}

		static ::System::Void InitUIDefaultMat()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_INITUIDEFAULTMAT_OFFSET))();
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
