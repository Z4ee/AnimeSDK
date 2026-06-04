#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_ScaleMode.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_ScreenMatchMode.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler_Unit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }

#define UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0x1B385BC0)
#define UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B385BF0)
#define UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1B385BA0)
#define UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B385B60)
#define UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0x1B385B80)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B385A60)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B385AB0)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B385A80)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B385B40)
#define UNITYENGINE_UI_CANVASSCALER_GET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0x1B385A40)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPHYSICALSIZE_OFFSET UNITYSDK_OFFSET(0x1B3862A0)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPIXELSIZE_OFFSET UNITYSDK_OFFSET(0x1B385F10)
#define UNITYENGINE_UI_CANVASSCALER_HANDLESCALEWITHSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1B385F90)
#define UNITYENGINE_UI_CANVASSCALER_HANDLEWORLDCANVAS_OFFSET UNITYSDK_OFFSET(0x1B385E90)
#define UNITYENGINE_UI_CANVASSCALER_HANDLE_OFFSET UNITYSDK_OFFSET(0x1B385E10)
#define UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B385CD0)
#define UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B385C50)
#define UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B385DB0)
#define UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B385D60)
#define UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0x1B385BD0)
#define UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B385C00)
#define UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1B385BB0)
#define UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B385B70)
#define UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0x1B385B90)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B385A70)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B385AC0)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B385A90)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0x1B385B50)
#define UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0x1B385A50)
#define UNITYENGINE_UI_CANVASSCALER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B385E00)
#define UNITYENGINE_UI_CANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B385C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_TypeDefinitionIndex = 5918;

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

		::System::Void set_uiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_ScaleMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET))(this, a1);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET))(this, a1);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_referenceResolution()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET))(this);
		}

		::System::Void set_referenceResolution(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET))(this, a1);
		}

		::UnityEngine::UI::CanvasScaler_ScreenMatchMode get_screenMatchMode()
		{
			return ((::UnityEngine::UI::CanvasScaler_ScreenMatchMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET))(this);
		}

		::System::Void set_screenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_ScreenMatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET))(this, a1);
		}

		::System::Single get_matchWidthOrHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET))(this);
		}

		::System::Void set_matchWidthOrHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::CanvasScaler_Unit get_physicalUnit()
		{
			return ((::UnityEngine::UI::CanvasScaler_Unit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET))(this);
		}

		::System::Void set_physicalUnit(::UnityEngine::UI::CanvasScaler_Unit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasScaler_Unit))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET))(this, a1);
		}

		::System::Single get_fallbackScreenDPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET))(this);
		}

		::System::Void set_fallbackScreenDPI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET))(this, a1);
		}

		::System::Single get_defaultSpriteDPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET))(this);
		}

		::System::Void set_defaultSpriteDPI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET))(this, a1);
		}

		::System::Single get_dynamicPixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_dynamicPixelsPerUnit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_UPDATE_OFFSET))(this);
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

		::System::Void SetScaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET))(this, a1);
		}

		::System::Void SetReferencePixelsPerUnit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET))(this, a1);
		}
	};
}
