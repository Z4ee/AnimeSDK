#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_Dropdown; }
namespace TMPro { class TMP_Dropdown_DropdownItem; }

#define TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A349BD0)
#define TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A34A7E0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown___c__DisplayClass69_0_TypeDefinitionIndex = 40120;

	class TMP_Dropdown___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::TMPro::TMP_Dropdown* __4__this; // 0x10
		::TMPro::TMP_Dropdown_DropdownItem* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::System::Boolean x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__SHOW_B__0_OFFSET))(this, x);
		}
	};
}
