#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Display_DisplaysUpdatedDelegate; }

#define UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET UNITYSDK_OFFSET(0x1D4F3F50)
#define UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F39B0)
#define UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F3AA0)
#define UNITYENGINE_DISPLAY_GET_MAIN_OFFSET UNITYSDK_OFFSET(0x1D4F3CC0)
#define UNITYENGINE_DISPLAY_GET_RENDERINGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D4F39C0)
#define UNITYENGINE_DISPLAY_GET_RENDERINGWIDTH_OFFSET UNITYSDK_OFFSET(0x1D4F3940)
#define UNITYENGINE_DISPLAY_GET_REQUIRESBLITTOBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1D4F3B20)
#define UNITYENGINE_DISPLAY_GET_REQUIRESSRGBBLITTOBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1D4F3B90)
#define UNITYENGINE_DISPLAY_GET_SYSTEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D4F3AB0)
#define UNITYENGINE_DISPLAY_GET_SYSTEMWIDTH_OFFSET UNITYSDK_OFFSET(0x1D4F3A30)
#define UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1D4F3D20)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F3CB0)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET UNITYSDK_OFFSET(0x1D4F3C00)
#define UNITYENGINE_DISPLAY_REQUIRESBLITTOBACKBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F3B80)
#define UNITYENGINE_DISPLAY_REQUIRESSRGBBLITTOBACKBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F3BF0)
#define UNITYENGINE_DISPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4000)
#define UNITYENGINE_DISPLAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4F3930)
#define UNITYENGINE_DISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F3920)

namespace UnityEngine
{
	inline static constexpr unsigned int Display_TypeDefinitionIndex = 5174;

	class Display : public ::System::Object
	{
	public:
		static ::UnityEngine::Display** StaticGet__mainDisplay()
		{
			return (::UnityEngine::Display**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x53A0);
		}
		static ::Il2CppArray<::UnityEngine::Display*>** StaticGet_displays()
		{
			return (::Il2CppArray<::UnityEngine::Display*>**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x53A8);
		}
		static ::UnityEngine::Display_DisplaysUpdatedDelegate** StaticGet_onDisplaysUpdated()
		{
			return (::UnityEngine::Display_DisplaysUpdatedDelegate**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x53B0);
		}
		::System::IntPtr nativeDisplay; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr nativeDisplay)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY__CTOR_1_OFFSET))(this, nativeDisplay);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY__CCTOR_OFFSET))();
		}

		::System::Int32 get_renderingWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_RENDERINGWIDTH_OFFSET))(this);
		}

		::System::Int32 get_renderingHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_RENDERINGHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_systemWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_SYSTEMWIDTH_OFFSET))(this);
		}

		::System::Int32 get_systemHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_SYSTEMHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_requiresBlitToBackbuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_REQUIRESBLITTOBACKBUFFER_OFFSET))(this);
		}

		::System::Boolean get_requiresSrgbBlitToBackbuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_REQUIRESSRGBBLITTOBACKBUFFER_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 RelativeMouseAt(::UnityEngine::Vector3 inputMouseCoordinates)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET))(inputMouseCoordinates);
		}

		static ::UnityEngine::Display* get_main()
		{
			return ((::UnityEngine::Display*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_MAIN_OFFSET))();
		}

		static ::System::Void RecreateDisplayList(::Il2CppArray<::System::IntPtr>* nativeDisplay)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET))(nativeDisplay);
		}

		static ::System::Void FireDisplaysUpdated()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET))();
		}

		static ::System::Void GetSystemExtImpl(::System::IntPtr nativeDisplay, ::System::Int32& w, ::System::Int32& h)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET))(nativeDisplay, w, h);
		}

		static ::System::Void GetRenderingExtImpl(::System::IntPtr nativeDisplay, ::System::Int32& w, ::System::Int32& h)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET))(nativeDisplay, w, h);
		}

		static ::System::Int32 RelativeMouseAtImpl(::System::Int32 x, ::System::Int32 y, ::System::Int32& rx, ::System::Int32& ry)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET))(x, y, rx, ry);
		}

		static ::System::Boolean RequiresBlitToBackbufferImpl(::System::IntPtr nativeDisplay)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_REQUIRESBLITTOBACKBUFFERIMPL_OFFSET))(nativeDisplay);
		}

		static ::System::Boolean RequiresSrgbBlitToBackbufferImpl(::System::IntPtr nativeDisplay)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_REQUIRESSRGBBLITTOBACKBUFFERIMPL_OFFSET))(nativeDisplay);
		}
	};
}
