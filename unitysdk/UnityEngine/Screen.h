#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EnabledOrientation.h"
#include "unitysdk/UnityEngine/FullScreenMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"

#define UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B2D5480)
#define UNITYENGINE_SCREEN_GETVKPRETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2D5490)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPELEFT_OFFSET UNITYSDK_OFFSET(0x1B2D5620)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPERIGHT_OFFSET UNITYSDK_OFFSET(0x1B2D5650)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET UNITYSDK_OFFSET(0x1B2D55F0)
#define UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1B2D55C0)
#define UNITYENGINE_SCREEN_GET_BRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1B2D57D0)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D56C0)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B2D5680)
#define UNITYENGINE_SCREEN_GET_CUTOUTS_OFFSET UNITYSDK_OFFSET(0x1B2D5750)
#define UNITYENGINE_SCREEN_GET_DPI_OFFSET UNITYSDK_OFFSET(0x1B2D5460)
#define UNITYENGINE_SCREEN_GET_FULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0x1B2D56F0)
#define UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1B2D56D0)
#define UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2D5450)
#define UNITYENGINE_SCREEN_GET_LOCKCURSOR_OFFSET UNITYSDK_OFFSET(0x1B2D57F0)
#define UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B2D54A0)
#define UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x1B2D57C0)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5740)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET UNITYSDK_OFFSET(0x1B2D5710)
#define UNITYENGINE_SCREEN_GET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B2D5580)
#define UNITYENGINE_SCREEN_GET_VKPRETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2D5570)
#define UNITYENGINE_SCREEN_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B2D5440)
#define UNITYENGINE_SCREEN_ISORIENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1B2D55A0)
#define UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B2D5470)
#define UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1B2D55B0)
#define UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET UNITYSDK_OFFSET(0x1B2D5770)
#define UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET UNITYSDK_OFFSET(0x1B2D5780)
#define UNITYENGINE_SCREEN_SETRESOLUTION_3_OFFSET UNITYSDK_OFFSET(0x1B2D57A0)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B2D5760)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET UNITYSDK_OFFSET(0x1B2D5630)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET UNITYSDK_OFFSET(0x1B2D5660)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET UNITYSDK_OFFSET(0x1B2D5600)
#define UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1B2D55D0)
#define UNITYENGINE_SCREEN_SET_BRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1B2D57E0)
#define UNITYENGINE_SCREEN_SET_FULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0x1B2D5700)
#define UNITYENGINE_SCREEN_SET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1B2D56E0)
#define UNITYENGINE_SCREEN_SET_LOCKCURSOR_OFFSET UNITYSDK_OFFSET(0x1B2D5810)
#define UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B2D54B0)
#define UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B2D5590)
#define UNITYENGINE_SCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D5850)

namespace UnityEngine
{
	inline static constexpr unsigned int Screen_TypeDefinitionIndex = 4103;

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

		static ::System::Void RequestOrientation(::UnityEngine::ScreenOrientation a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScreenOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_REQUESTORIENTATION_OFFSET))(a1);
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

		static ::System::Void set_orientation(::UnityEngine::ScreenOrientation a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScreenOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_ORIENTATION_OFFSET))(a1);
		}

		static ::System::Int32 get_vkPreTransform()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_VKPRETRANSFORM_OFFSET))();
		}

		static ::System::Int32 get_sleepTimeout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SLEEPTIMEOUT_OFFSET))();
		}

		static ::System::Void set_sleepTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET))(a1);
		}

		static ::System::Boolean IsOrientationEnabled(::UnityEngine::EnabledOrientation a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::EnabledOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_ISORIENTATIONENABLED_OFFSET))(a1);
		}

		static ::System::Void SetOrientationEnabled(::UnityEngine::EnabledOrientation a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::EnabledOrientation, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETORIENTATIONENABLED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_autorotateToPortrait()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAIT_OFFSET))();
		}

		static ::System::Void set_autorotateToPortrait(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAIT_OFFSET))(a1);
		}

		static ::System::Boolean get_autorotateToPortraitUpsideDown()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET))();
		}

		static ::System::Void set_autorotateToPortraitUpsideDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOPORTRAITUPSIDEDOWN_OFFSET))(a1);
		}

		static ::System::Boolean get_autorotateToLandscapeLeft()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPELEFT_OFFSET))();
		}

		static ::System::Void set_autorotateToLandscapeLeft(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPELEFT_OFFSET))(a1);
		}

		static ::System::Boolean get_autorotateToLandscapeRight()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_AUTOROTATETOLANDSCAPERIGHT_OFFSET))();
		}

		static ::System::Void set_autorotateToLandscapeRight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_AUTOROTATETOLANDSCAPERIGHT_OFFSET))(a1);
		}

		static ::UnityEngine::Resolution get_currentResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET))();
		}

		static ::System::Boolean get_fullScreen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET))();
		}

		static ::System::Void set_fullScreen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_FULLSCREEN_OFFSET))(a1);
		}

		static ::UnityEngine::FullScreenMode get_fullScreenMode()
		{
			return ((::UnityEngine::FullScreenMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_FULLSCREENMODE_OFFSET))();
		}

		static ::System::Void set_fullScreenMode(::UnityEngine::FullScreenMode a1)
		{
			return ((::System::Void(*)(::UnityEngine::FullScreenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_FULLSCREENMODE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect get_safeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Rect>* get_cutouts()
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CUTOUTS_OFFSET))();
		}

		static ::System::Void SetResolution(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::FullScreenMode a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetResolution_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::FullScreenMode a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::FullScreenMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetResolution_2(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetResolution_3(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_3_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Resolution>* get_resolutions()
		{
			return ((::Il2CppArray<::UnityEngine::Resolution>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET))();
		}

		static ::System::Single get_brightness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_BRIGHTNESS_OFFSET))();
		}

		static ::System::Void set_brightness(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_BRIGHTNESS_OFFSET))(a1);
		}

		static ::System::Boolean get_lockCursor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_LOCKCURSOR_OFFSET))();
		}

		static ::System::Void set_lockCursor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_LOCKCURSOR_OFFSET))(a1);
		}

		static ::System::Void get_currentResolution_Injected(::UnityEngine::Resolution& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Resolution&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_safeArea_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET))(a1);
		}
	};
}
