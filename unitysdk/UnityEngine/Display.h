#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Display_DisplaysUpdatedDelegate; }

#define UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET UNITYSDK_OFFSET(0x1DED6C90)
#define UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET UNITYSDK_OFFSET(0x1DED6900)
#define UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET UNITYSDK_OFFSET(0x1DED69B0)
#define UNITYENGINE_DISPLAY_GET_MAIN_OFFSET UNITYSDK_OFFSET(0x1DED6AB0)
#define UNITYENGINE_DISPLAY_GET_RENDERINGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DED6910)
#define UNITYENGINE_DISPLAY_GET_RENDERINGWIDTH_OFFSET UNITYSDK_OFFSET(0x1DED68B0)
#define UNITYENGINE_DISPLAY_GET_SYSTEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DED69C0)
#define UNITYENGINE_DISPLAY_GET_SYSTEMWIDTH_OFFSET UNITYSDK_OFFSET(0x1DED6960)
#define UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1DED6AE0)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET UNITYSDK_OFFSET(0x1DED6AA0)
#define UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET UNITYSDK_OFFSET(0x1DED6A10)
#define UNITYENGINE_DISPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED6D30)
#define UNITYENGINE_DISPLAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED68A0)
#define UNITYENGINE_DISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED6890)

namespace UnityEngine
{
	inline static constexpr unsigned int Display_TypeDefinitionIndex = 4111;

	class Display : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Display*>** StaticGet_displays()
		{
			return (::Il2CppArray<::UnityEngine::Display*>**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		static ::UnityEngine::Display_DisplaysUpdatedDelegate** StaticGet_onDisplaysUpdated()
		{
			return (::UnityEngine::Display_DisplaysUpdatedDelegate**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x368);
		}
		static ::UnityEngine::Display** StaticGet__mainDisplay()
		{
			return (::UnityEngine::Display**)Il2CppClass::FromTypeDefinitionIndex(Display_TypeDefinitionIndex)->GetStaticField(0x370);
		}
		::System::IntPtr nativeDisplay; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY__CTOR_1_OFFSET))(this, a1);
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

		static ::UnityEngine::Vector3 RelativeMouseAt(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEAT_OFFSET))(a1);
		}

		static ::UnityEngine::Display* get_main()
		{
			return ((::UnityEngine::Display*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GET_MAIN_OFFSET))();
		}

		static ::System::Void RecreateDisplayList(::Il2CppArray<::System::IntPtr>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RECREATEDISPLAYLIST_OFFSET))(a1);
		}

		static ::System::Void FireDisplaysUpdated()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_FIREDISPLAYSUPDATED_OFFSET))();
		}

		static ::System::Void GetSystemExtImpl(::System::IntPtr a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETSYSTEMEXTIMPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetRenderingExtImpl(::System::IntPtr a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_GETRENDERINGEXTIMPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 RelativeMouseAtImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_DISPLAY_RELATIVEMOUSEATIMPL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
