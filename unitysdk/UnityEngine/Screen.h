#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EnabledOrientation.h"
#include "unitysdk/UnityEngine/FullScreenMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"

#define UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x18A4D130)
#define UNITYENGINE_SCREEN_GETVKPRETRANSFORM_OFFSET UNITYSDK_OFFSET(0x18A4D140)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPELEFT_OFFSET UNITYSDK_OFFSET(0x18A4D2D0)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPERIGHT_OFFSET UNITYSDK_OFFSET(0x18A4D300)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET UNITYSDK_OFFSET(0x18A4D2A0)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAIT_OFFSET UNITYSDK_OFFSET(0x18A4D270)
#define UNITYENGINE_SCREEN_GET_BRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x18A4D480)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A4D370)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A4D330)
#define UNITYENGINE_SCREEN_GET_CUTOUTS_OFFSET UNITYSDK_OFFSET(0x18A4D400)
#define UNITYENGINE_SCREEN_GET_DPI_OFFSET UNITYSDK_OFFSET(0x18A4D110)
#define UNITYENGINE_SCREEN_GET_FULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0x18A4D3A0)
#define UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x18A4D380)
#define UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x18A4D100)
#define UNITYENGINE_SCREEN_GET_LOCKCURSOR_OFFSET UNITYSDK_OFFSET(0x18A4D4A0)
#define UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x18A4D150)
#define UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x18A4D470)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A4D3F0)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET UNITYSDK_OFFSET(0x18A4D3C0)
#define UNITYENGINE_SCREEN_GET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18A4D230)
#define UNITYENGINE_SCREEN_GET_VKPRETRANSFORM_OFFSET UNITYSDK_OFFSET(0x18A4D220)
#define UNITYENGINE_SCREEN_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x18A4D0F0)
#define UNITYENGINE_SCREEN_ISORIENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0x18A4D250)
#define UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET UNITYSDK_OFFSET(0x18A4D120)
#define UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0x18A4D260)
#define UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET UNITYSDK_OFFSET(0x18A4D420)
#define UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET UNITYSDK_OFFSET(0x18A4D430)
#define UNITYENGINE_SCREEN_SETRESOLUTION_3_OFFSET UNITYSDK_OFFSET(0x18A4D450)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A4D410)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET UNITYSDK_OFFSET(0x18A4D2E0)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET UNITYSDK_OFFSET(0x18A4D310)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET UNITYSDK_OFFSET(0x18A4D2B0)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET UNITYSDK_OFFSET(0x18A4D280)
#define UNITYENGINE_SCREEN_SET_BRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x18A4D490)
#define UNITYENGINE_SCREEN_SET_FULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0x18A4D3B0)
#define UNITYENGINE_SCREEN_SET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x18A4D390)
#define UNITYENGINE_SCREEN_SET_LOCKCURSOR_OFFSET UNITYSDK_OFFSET(0x18A4D4C0)
#define UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x18A4D160)
#define UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18A4D240)
#define UNITYENGINE_SCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D500)

namespace UnityEngine
{
	inline static constexpr unsigned int Screen_TypeDefinitionIndex = 3927;

	class Screen : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_width()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_WIDTH_OFFSET))();
		}

		static ::System::Int32 get_height()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET))();
		}

		static ::System::Single get_dpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_DPI_OFFSET))();
		}

		static ::System::Void RequestOrientation(::UnityEngine::ScreenOrientation orient)
		{
			return ((::System::Void(*)(::UnityEngine::ScreenOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET))(orient);
		}

		static ::UnityEngine::ScreenOrientation GetScreenOrientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET))();
		}

		static ::System::Int32 GetVKPreTransform()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GETVKPRETRANSFORM_OFFSET))();
		}

		static ::UnityEngine::ScreenOrientation get_orientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET))();
		}

		static ::System::Void set_orientation(::UnityEngine::ScreenOrientation value)
		{
			return ((::System::Void(*)(::UnityEngine::ScreenOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET))(value);
		}

		static ::System::Int32 get_vkPreTransform()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_VKPRETRANSFORM_OFFSET))();
		}

		static ::System::Int32 get_sleepTimeout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SLEEPTIMEOUT_OFFSET))();
		}

		static ::System::Void set_sleepTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET))(value);
		}

		static ::System::Boolean IsOrientationEnabled(::UnityEngine::EnabledOrientation orient)
		{
			return ((::System::Boolean(*)(::UnityEngine::EnabledOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_ISORIENTATIONENABLED_OFFSET))(orient);
		}

		static ::System::Void SetOrientationEnabled(::UnityEngine::EnabledOrientation orient, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::UnityEngine::EnabledOrientation, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET))(orient, enabled);
		}

		static ::System::Boolean get_autorotateToPortrait()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAIT_OFFSET))();
		}

		static ::System::Void set_autorotateToPortrait(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET))(value);
		}

		static ::System::Boolean get_autorotateToPortraitUpsideDown()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET))();
		}

		static ::System::Void set_autorotateToPortraitUpsideDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET))(value);
		}

		static ::System::Boolean get_autorotateToLandscapeLeft()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPELEFT_OFFSET))();
		}

		static ::System::Void set_autorotateToLandscapeLeft(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET))(value);
		}

		static ::System::Boolean get_autorotateToLandscapeRight()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPERIGHT_OFFSET))();
		}

		static ::System::Void set_autorotateToLandscapeRight(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET))(value);
		}

		static ::UnityEngine::Resolution get_currentResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET))();
		}

		static ::System::Boolean get_fullScreen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET))();
		}

		static ::System::Void set_fullScreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_FULLSCREEN_OFFSET))(value);
		}

		static ::UnityEngine::FullScreenMode get_fullScreenMode()
		{
			return ((::UnityEngine::FullScreenMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_FULLSCREENMODE_OFFSET))();
		}

		static ::System::Void set_fullScreenMode(::UnityEngine::FullScreenMode value)
		{
			return ((::System::Void(*)(::UnityEngine::FullScreenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_FULLSCREENMODE_OFFSET))(value);
		}

		static ::UnityEngine::Rect get_safeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Rect>* get_cutouts()
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CUTOUTS_OFFSET))();
		}

		static ::System::Void SetResolution(::System::Int32 width, ::System::Int32 height, ::UnityEngine::FullScreenMode fullscreenMode, ::System::Int32 preferredRefreshRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(width, height, fullscreenMode, preferredRefreshRate);
		}

		static ::System::Void SetResolution_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::FullScreenMode fullscreenMode)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET))(width, height, fullscreenMode);
		}

		static ::System::Void SetResolution_2(::System::Int32 width, ::System::Int32 height, ::System::Boolean fullscreen, ::System::Int32 preferredRefreshRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET))(width, height, fullscreen, preferredRefreshRate);
		}

		static ::System::Void SetResolution_3(::System::Int32 width, ::System::Int32 height, ::System::Boolean fullscreen)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_3_OFFSET))(width, height, fullscreen);
		}

		static ::Il2CppArray<::UnityEngine::Resolution>* get_resolutions()
		{
			return ((::Il2CppArray<::UnityEngine::Resolution>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET))();
		}

		static ::System::Single get_brightness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_BRIGHTNESS_OFFSET))();
		}

		static ::System::Void set_brightness(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_BRIGHTNESS_OFFSET))(value);
		}

		static ::System::Boolean get_lockCursor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_LOCKCURSOR_OFFSET))();
		}

		static ::System::Void set_lockCursor(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_LOCKCURSOR_OFFSET))(value);
		}

		static ::System::Void get_currentResolution_Injected(::UnityEngine::Resolution& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Resolution&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_safeArea_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET))(ret);
		}
	};
}
