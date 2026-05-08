#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_ScaleMode.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_ScreenMatchMode.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_Unit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }

#define UNITYENGINE_UI_CANVASSCALER_CANVAS_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B95B650)
#define UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0x1B95B350)
#define UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B3D0)
#define UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1B95B330)
#define UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B95B2F0)
#define UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B310)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B160)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B95B200)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B95B180)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B95B2D0)
#define UNITYENGINE_UI_CANVASSCALER_GET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0x1B95B140)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPHYSICALSIZE_OFFSET UNITYSDK_OFFSET(0x1B95C290)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPIXELSIZE_OFFSET UNITYSDK_OFFSET(0x1B95BD10)
#define UNITYENGINE_UI_CANVASSCALER_HANDLESCALEWITHSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1B95BE40)
#define UNITYENGINE_UI_CANVASSCALER_HANDLEWORLDCANVAS_OFFSET UNITYSDK_OFFSET(0x1B95BBE0)
#define UNITYENGINE_UI_CANVASSCALER_HANDLE_OFFSET UNITYSDK_OFFSET(0x1B95B9F0)
#define UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B95B6A0)
#define UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B95B470)
#define UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B970)
#define UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B95B8F0)
#define UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0x1B95B360)
#define UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B3E0)
#define UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1B95B340)
#define UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B95B300)
#define UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B320)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B95B170)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B95B210)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B95B190)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B95B2E0)
#define UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0x1B95B150)
#define UNITYENGINE_UI_CANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95B3F0)
#define UNITYENGINE_UI_CANVASSCALER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B95C420)
#define UNITYENGINE_UI_CANVASSCALER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B95C4B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_TypeDefinitionIndex = 8386;

	class CanvasScaler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		// static const ::System::Single kLogBase; // 0x0
		::UnityEngine::UI::CanvasScaler_ScaleMode m_UiScaleMode; // 0x18
		::System::Single m_ReferencePixelsPerUnit; // 0x1C
		::System::Single m_ScaleFactor; // 0x20
		::UnityEngine::Vector2 m_ReferenceResolution; // 0x24
		::UnityEngine::UI::CanvasScaler_ScreenMatchMode m_ScreenMatchMode; // 0x2C
		::System::Single m_MatchWidthOrHeight; // 0x30
		::UnityEngine::UI::CanvasScaler_Unit m_PhysicalUnit; // 0x34
		::System::Single m_FallbackScreenDPI; // 0x38
		::System::Single m_DefaultSpriteDPI; // 0x3C
		::System::Single m_DynamicPixelsPerUnit; // 0x40
		::UnityEngine::Canvas* m_Canvas; // 0x48
		::System::Single m_PrevScaleFactor; // 0x50
		::System::Single m_PrevReferencePixelsPerUnit; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::CanvasScaler_ScaleMode get_uiScaleMode()
		{
			return ((::UnityEngine::UI::CanvasScaler_ScaleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_UISCALEMODE_OFFSET))(this);
		}

		::System::Void set_uiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_ScaleMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET))(this, value);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET))(this, value);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_referenceResolution()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET))(this);
		}

		::System::Void set_referenceResolution(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET))(this, value);
		}

		::UnityEngine::UI::CanvasScaler_ScreenMatchMode get_screenMatchMode()
		{
			return ((::UnityEngine::UI::CanvasScaler_ScreenMatchMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET))(this);
		}

		::System::Void set_screenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_ScreenMatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET))(this, value);
		}

		::System::Single get_matchWidthOrHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET))(this);
		}

		::System::Void set_matchWidthOrHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::UI::CanvasScaler_Unit get_physicalUnit()
		{
			return ((::UnityEngine::UI::CanvasScaler_Unit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET))(this);
		}

		::System::Void set_physicalUnit(::UnityEngine::UI::CanvasScaler_Unit value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_Unit))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET))(this, value);
		}

		::System::Single get_fallbackScreenDPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET))(this);
		}

		::System::Void set_fallbackScreenDPI(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET))(this, value);
		}

		::System::Single get_defaultSpriteDPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET))(this);
		}

		::System::Void set_defaultSpriteDPI(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET))(this, value);
		}

		::System::Single get_dynamicPixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_dynamicPixelsPerUnit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET))(this);
		}

		::System::Void Canvas_preWillRenderCanvases()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_CANVAS_PREWILLRENDERCANVASES_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLE_OFFSET))(this);
		}

		::System::Void HandleWorldCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLEWORLDCANVAS_OFFSET))(this);
		}

		::System::Void HandleConstantPixelSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPIXELSIZE_OFFSET))(this);
		}

		::System::Void HandleScaleWithScreenSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLESCALEWITHSCREENSIZE_OFFSET))(this);
		}

		::System::Void HandleConstantPhysicalSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPHYSICALSIZE_OFFSET))(this);
		}

		::System::Void SetScaleFactor(::System::Single scaleFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET))(this, scaleFactor);
		}

		::System::Void SetReferencePixelsPerUnit(::System::Single referencePixelsPerUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET))(this, referencePixelsPerUnit);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
