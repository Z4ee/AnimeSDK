#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D0F9CC0)
#define UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0F9D00)
#define UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1D0F9210)
#define UNITYENGINE_GUISTYLESTATE_GET_BACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D0F9C30)
#define UNITYENGINE_GUISTYLESTATE_GET_TEXTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F9C90)
#define UNITYENGINE_GUISTYLESTATE_GET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D0F9C50)
#define UNITYENGINE_GUISTYLESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1D0F9CB0)
#define UNITYENGINE_GUISTYLESTATE_SET_BACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D0F9C40)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F9CA0)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D0F8610)
#define UNITYENGINE_GUISTYLESTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0F9CF0)
#define UNITYENGINE_GUISTYLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9CD0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyleState_TypeDefinitionIndex = 6418;

	class GUIStyleState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GUIStyle* m_SourceStyle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE__CTOR_1_OFFSET))(this, sourceStyle, source);
		}

		::UnityEngine::Texture2D* get_background()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GET_BACKGROUND_OFFSET))(this);
		}

		::System::Void set_background(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_BACKGROUND_OFFSET))(this, value);
		}

		::UnityEngine::Color get_textColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GET_TEXTCOLOR_OFFSET))(this);
		}

		::System::Void set_textColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET))(this, value);
		}

		static ::System::IntPtr Init()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_INIT_OFFSET))();
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET))(this);
		}

		static ::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source)
		{
			return ((::UnityEngine::GUIStyleState*(*)(::UnityEngine::GUIStyle*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET))(sourceStyle, source);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void get_textColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GET_TEXTCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_textColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET))(this, value);
		}
	};
}
