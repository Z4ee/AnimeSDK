#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Navigation_Mode.h"

namespace UnityEngine::UI { class Selectable; }

#define UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8EEC0)
#define UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1F103630)
#define UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x2BBFE0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x3C9DB0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x7B41A0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x7BA870)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x462A80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_TypeDefinitionIndex = 19274;

	struct alignas(8) Navigation
	{
		::UnityEngine::UI::Navigation_Mode m_Mode; // 0x10
		::UnityEngine::UI::Selectable* m_SelectOnUp; // 0x18
		::UnityEngine::UI::Selectable* m_SelectOnDown; // 0x20
		::UnityEngine::UI::Selectable* m_SelectOnLeft; // 0x28
		::UnityEngine::UI::Selectable* m_SelectOnRight; // 0x30

		::UnityEngine::UI::Navigation_Mode get_mode()
		{
			return ((::UnityEngine::UI::Navigation_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::UI::Navigation_Mode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation_Mode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Selectable* get_selectOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET))(this);
		}

		::System::Void set_selectOnUp(::UnityEngine::UI::Selectable* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET))(this, value);
		}

		::UnityEngine::UI::Selectable* get_selectOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET))(this);
		}

		::System::Void set_selectOnDown(::UnityEngine::UI::Selectable* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET))(this, value);
		}

		::UnityEngine::UI::Selectable* get_selectOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET))(this);
		}

		::System::Void set_selectOnLeft(::UnityEngine::UI::Selectable* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Selectable* get_selectOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET))(this);
		}

		::System::Void set_selectOnRight(::UnityEngine::UI::Selectable* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET))(this, value);
		}

		static ::UnityEngine::UI::Navigation get_defaultNavigation()
		{
			return ((::UnityEngine::UI::Navigation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::UI::Navigation other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET))(this, other);
		}
	};
}
