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

#define UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE61B0)
#define UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE62D0)
#define UNITYENGINE_CANVAS_CACHEDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6740)
#define UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET UNITYSDK_OFFSET(0x18AE6750)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6710)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6700)
#define UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6720)
#define UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x18AE65D0)
#define UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET UNITYSDK_OFFSET(0x18AE65C0)
#define UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x18AE6430)
#define UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x18AE66C0)
#define UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x18AE64D0)
#define UNITYENGINE_CANVAS_GET_OVERRIDERENDERMODE_OFFSET UNITYSDK_OFFSET(0x18AE6410)
#define UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x18AE6540)
#define UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x18AE64F0)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6480)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET UNITYSDK_OFFSET(0x18AE6440)
#define UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x18AE6510)
#define UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x18AE64B0)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6670)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0x18AE6640)
#define UNITYENGINE_CANVAS_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x18AE6680)
#define UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18AE63F0)
#define UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET UNITYSDK_OFFSET(0x18AE6530)
#define UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x18AE6630)
#define UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x18AE6490)
#define UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x18AE66E0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x18AE65A0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x18AE6610)
#define UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x18AE6560)
#define UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x18AE6580)
#define UNITYENGINE_CANVAS_GET_UVCHANNELDIMENSION_OFFSET UNITYSDK_OFFSET(0x18AE65F0)
#define UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x18AE66A0)
#define UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE6240)
#define UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE6360)
#define UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE6790)
#define UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x18AE67B0)
#define UNITYENGINE_CANVAS_SETRUNTIMEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x18AE6730)
#define UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x18AE65E0)
#define UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x18AE66D0)
#define UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x18AE64E0)
#define UNITYENGINE_CANVAS_SET_OVERRIDERENDERMODE_OFFSET UNITYSDK_OFFSET(0x18AE6420)
#define UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x18AE6550)
#define UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x18AE6500)
#define UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x18AE6520)
#define UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x18AE64C0)
#define UNITYENGINE_CANVAS_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x18AE6690)
#define UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18AE6400)
#define UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x18AE64A0)
#define UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x18AE66F0)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x18AE65B0)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x18AE6620)
#define UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x18AE6570)
#define UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x18AE6590)
#define UNITYENGINE_CANVAS_SET_UVCHANNELDIMENSION_OFFSET UNITYSDK_OFFSET(0x18AE6600)
#define UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x18AE66B0)
#define UNITYENGINE_CANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE6A70)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_TypeDefinitionIndex = 5257;

	class Canvas : public ::UnityEngine::Behaviour
	{
	public:
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_willRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x300);
		}
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_preWillRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x308);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS__CTOR_OFFSET))(this);
		}

		static ::System::Void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET))(value);
		}

		::UnityEngine::RenderMode get_renderMode()
		{
			return ((::UnityEngine::RenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::RenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_overrideRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDERENDERMODE_OFFSET))(this);
		}

		::System::Void set_overrideRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDERENDERMODE_OFFSET))(this, value);
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

		::System::Void set_scaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET))(this, value);
		}

		::System::Boolean get_overridePixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_overridePixelPerfect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET))(this, value);
		}

		::System::Boolean get_pixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_pixelPerfect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET))(this, value);
		}

		::System::Single get_planeDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET))(this);
		}

		::System::Void set_planeDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_renderOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET))(this);
		}

		::System::Boolean get_overrideSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET))(this);
		}

		::System::Void set_overrideSorting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET))(this, value);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Int32 get_targetDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET))(this);
		}

		::System::Void set_targetDisplay(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET))(this, value);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_cachedSortingLayerValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET))(this, value);
		}

		::System::UInt32 get_uvChannelDimension()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_UVCHANNELDIMENSION_OFFSET))(this);
		}

		::System::Void set_uvChannelDimension(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_UVCHANNELDIMENSION_OFFSET))(this, value);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET))(this, value);
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

		::System::Void set_renderingLayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERINGLAYERMASK_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_worldCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET))(this);
		}

		::System::Void set_worldCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET))(this, value);
		}

		::System::Single get_normalizedSortingGridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this);
		}

		::System::Void set_normalizedSortingGridSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_sortingGridNormalizedSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this);
		}

		::System::Void set_sortingGridNormalizedSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this, value);
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

		static ::System::Void SetRuntimeAtlasTexture(::System::Int32 texID, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SETRUNTIMEATLASTEXTURE_OFFSET))(texID, texture);
		}

		static ::System::Void CacheDefaultCanvasMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_CACHEDEFAULTCANVASMATERIAL_OFFSET))(material);
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

		::System::Void get_pixelRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_renderingDisplaySize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET))(this, ret);
		}
	};
}
