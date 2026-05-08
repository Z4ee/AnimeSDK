#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUI_Scope.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GUILayoutOption; }

#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_CLOSESCOPE_OFFSET UNITYSDK_OFFSET(0x1ACE9220)
#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_GET_HANDLESCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x1ACEC7C0)
#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_GET_SCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACEC7A0)
#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_SET_HANDLESCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x1ACEC7D0)
#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_SET_SCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACEC7B0)
#define UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEC7E0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_ScrollViewScope_TypeDefinitionIndex = 6364;

	class GUILayout_ScrollViewScope : public ::UnityEngine::GUI_Scope
	{
	public:
		::UnityEngine::Vector2 _scrollPosition_k__BackingField; // 0x18
		::System::Boolean _handleScrollWheel_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 scrollPosition, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE__CTOR_OFFSET))(this, scrollPosition, options);
		}

		::UnityEngine::Vector2 get_scrollPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_GET_SCROLLPOSITION_OFFSET))(this);
		}

		::System::Void set_scrollPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_SET_SCROLLPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_handleScrollWheel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_GET_HANDLESCROLLWHEEL_OFFSET))(this);
		}

		::System::Void set_handleScrollWheel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_SET_HANDLESCROLLWHEEL_OFFSET))(this, value);
		}

		::System::Void CloseScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SCROLLVIEWSCOPE_CLOSESCOPE_OFFSET))(this);
		}
	};
}
