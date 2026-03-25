#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x18A7F770)
#define UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A7F7B0)
#define UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET UNITYSDK_OFFSET(0x18A7ECC0)
#define UNITYENGINE_GUISTYLESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x18A7F760)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A7F750)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x18A7E1A0)
#define UNITYENGINE_GUISTYLESTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A7F7A0)
#define UNITYENGINE_GUISTYLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7F780)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyleState_TypeDefinitionIndex = 5122;

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

		::System::Void set_textColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET))(this, value);
		}
	};
}
