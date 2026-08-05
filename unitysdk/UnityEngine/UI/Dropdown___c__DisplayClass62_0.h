#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }

#define UNITYENGINE_UI_DROPDOWN___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F23A0)
#define UNITYENGINE_UI_DROPDOWN___C__DISPLAYCLASS62_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1F0F23B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown___c__DisplayClass62_0_TypeDefinitionIndex = 19208;

	class Dropdown___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Dropdown_DropdownItem* item; // 0x10
		::UnityEngine::UI::Dropdown* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::System::Boolean x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN___C__DISPLAYCLASS62_0__SHOW_B__0_OFFSET))(this, x);
		}
	};
}
