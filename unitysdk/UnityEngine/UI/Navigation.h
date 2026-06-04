#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Navigation_Mode.h"

namespace UnityEngine::UI { class Selectable; }

#define UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x389BA40)
#define UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1B3CD820)
#define UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x2AD20)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x11290)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x60D0)
#define UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x2AD30)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0xBBE0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_TypeDefinitionIndex = 5955;

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

		::System::Void set_mode(::UnityEngine::UI::Navigation_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation_Mode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET))(this);
		}

		::System::Void set_selectOnUp(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET))(this);
		}

		::System::Void set_selectOnDown(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET))(this);
		}

		::System::Void set_selectOnLeft(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET))(this);
		}

		::System::Void set_selectOnRight(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET))(this, a1);
		}

		static ::UnityEngine::UI::Navigation get_defaultNavigation()
		{
			return ((::UnityEngine::UI::Navigation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::UI::Navigation a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET))(this, a1);
		}
	};
}
