#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas_WillRenderCanvases; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D2C0)
#define UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D3E0)
#define UNITYENGINE_CANVAS_CACHEDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B36D850)
#define UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D860)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B36D820)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B36D810)
#define UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B36D830)
#define UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B36D6E0)
#define UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET UNITYSDK_OFFSET(0x1B36D6D0)
#define UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1B36D540)
#define UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x1B36D7D0)
#define UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B36D5E0)
#define UNITYENGINE_CANVAS_GET_OVERRIDERENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B36D520)
#define UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x1B36D650)
#define UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B36D600)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B36D590)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET UNITYSDK_OFFSET(0x1B36D550)
#define UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B36D620)
#define UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B36D5C0)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B36D780)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0x1B36D750)
#define UNITYENGINE_CANVAS_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B36D790)
#define UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B36D500)
#define UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET UNITYSDK_OFFSET(0x1B36D640)
#define UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1B36D740)
#define UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B36D5A0)
#define UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B36D7F0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B36D6B0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B36D720)
#define UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B36D670)
#define UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B36D690)
#define UNITYENGINE_CANVAS_GET_UVCHANNELDIMENSION_OFFSET UNITYSDK_OFFSET(0x1B36D700)
#define UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B36D7B0)
#define UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D350)
#define UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D470)
#define UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D8B0)
#define UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B36D8E0)
#define UNITYENGINE_CANVAS_SETRUNTIMEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B36D840)
#define UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B36D6F0)
#define UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x1B36D7E0)
#define UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B36D5F0)
#define UNITYENGINE_CANVAS_SET_OVERRIDERENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B36D530)
#define UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x1B36D660)
#define UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B36D610)
#define UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B36D630)
#define UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B36D5D0)
#define UNITYENGINE_CANVAS_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B36D7A0)
#define UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B36D510)
#define UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B36D5B0)
#define UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B36D800)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B36D6C0)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B36D730)
#define UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B36D680)
#define UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B36D6A0)
#define UNITYENGINE_CANVAS_SET_UVCHANNELDIMENSION_OFFSET UNITYSDK_OFFSET(0x1B36D710)
#define UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B36D7C0)
#define UNITYENGINE_CANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36D920)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_TypeDefinitionIndex = 5344;

	class Canvas : public ::UnityEngine::Behaviour
	{
	public:
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_preWillRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x340);
		}
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_willRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x348);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS__CTOR_OFFSET))(this);
		}

		static ::System::Void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET))(a1);
		}

		static ::System::Void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET))(a1);
		}

		static ::System::Void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET))(a1);
		}

		static ::System::Void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET))(a1);
		}

		::UnityEngine::RenderMode get_renderMode()
		{
			return ((::UnityEngine::RenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::RenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_overrideRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDERENDERMODE_OFFSET))(this);
		}

		::System::Void set_overrideRenderMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDERENDERMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_isRootCanvas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Rect get_pixelRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET))(this);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET))(this, a1);
		}

		::System::Boolean get_overridePixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_overridePixelPerfect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_pixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_pixelPerfect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET))(this, a1);
		}

		::System::Single get_planeDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET))(this);
		}

		::System::Void set_planeDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_renderOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET))(this);
		}

		::System::Boolean get_overrideSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET))(this);
		}

		::System::Void set_overrideSorting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET))(this, a1);
		}

		::System::Int32 get_targetDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET))(this);
		}

		::System::Void set_targetDisplay(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Int32 get_cachedSortingLayerValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET))(this, a1);
		}

		::System::UInt32 get_uvChannelDimension()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_UVCHANNELDIMENSION_OFFSET))(this);
		}

		::System::Void set_uvChannelDimension(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_UVCHANNELDIMENSION_OFFSET))(this, a1);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Canvas* get_rootCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_renderingDisplaySize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET))(this);
		}

		::System::UInt32 get_renderingLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERINGLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_worldCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET))(this);
		}

		::System::Void set_worldCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET))(this, a1);
		}

		::System::Single get_normalizedSortingGridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this);
		}

		::System::Void set_normalizedSortingGridSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingGridNormalizedSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this);
		}

		::System::Void set_sortingGridNormalizedSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Material* GetDefaultCanvasTextMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetDefaultCanvasMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetETC1SupportedCanvasMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET))();
		}

		static ::System::Void SetRuntimeAtlasTexture(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SETRUNTIMEATLASTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void CacheDefaultCanvasMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_CACHEDEFAULTCANVASMATERIAL_OFFSET))(a1);
		}

		static ::System::Void ForceUpdateCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET))();
		}

		static ::System::Void SendPreWillRenderCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET))();
		}

		static ::System::Void SendWillRenderCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET))();
		}

		::System::Void get_pixelRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_renderingDisplaySize_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET))(this, a1);
		}
	};
}
