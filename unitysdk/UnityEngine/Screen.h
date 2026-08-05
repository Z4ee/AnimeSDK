#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FullScreenMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"

#define UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E60D8F0)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60D960)
#define UNITYENGINE_SCREEN_GET_CURRENTRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E60D920)
#define UNITYENGINE_SCREEN_GET_CUTOUTS_OFFSET UNITYSDK_OFFSET(0x1E60D9E0)
#define UNITYENGINE_SCREEN_GET_DPI_OFFSET UNITYSDK_OFFSET(0x1E60D8E0)
#define UNITYENGINE_SCREEN_GET_FULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0x1E60D990)
#define UNITYENGINE_SCREEN_GET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1E60D970)
#define UNITYENGINE_SCREEN_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E60D8D0)
#define UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E60D900)
#define UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x1E60DA40)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E60D9D0)
#define UNITYENGINE_SCREEN_GET_SAFEAREA_OFFSET UNITYSDK_OFFSET(0x1E60D9A0)
#define UNITYENGINE_SCREEN_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E60D8C0)
#define UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET UNITYSDK_OFFSET(0x1E60DA00)
#define UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET UNITYSDK_OFFSET(0x1E60DA20)
#define UNITYENGINE_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1E60D9F0)
#define UNITYENGINE_SCREEN_SET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1E60D980)
#define UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E60D910)
#define UNITYENGINE_SCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E60DA50)

namespace UnityEngine
{
	inline static constexpr unsigned int Screen_TypeDefinitionIndex = 5177;

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

		static ::UnityEngine::ScreenOrientation GetScreenOrientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GETSCREENORIENTATION_OFFSET))();
		}

		static ::UnityEngine::ScreenOrientation get_orientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_ORIENTATION_OFFSET))();
		}

		static ::System::Void set_sleepTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SET_SLEEPTIMEOUT_OFFSET))(value);
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

		static ::System::Void SetResolution_1(::System::Int32 width, ::System::Int32 height, ::System::Boolean fullscreen, ::System::Int32 preferredRefreshRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_1_OFFSET))(width, height, fullscreen, preferredRefreshRate);
		}

		static ::System::Void SetResolution_2(::System::Int32 width, ::System::Int32 height, ::System::Boolean fullscreen)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_SETRESOLUTION_2_OFFSET))(width, height, fullscreen);
		}

		static ::Il2CppArray<::UnityEngine::Resolution>* get_resolutions()
		{
			return ((::Il2CppArray<::UnityEngine::Resolution>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCREEN_GET_RESOLUTIONS_OFFSET))();
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
