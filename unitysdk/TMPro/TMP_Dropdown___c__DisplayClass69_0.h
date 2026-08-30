#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_Dropdown; }
namespace TMPro { class TMP_Dropdown_DropdownItem; }

#define TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC29F10)
#define TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1EC2AC90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown___c__DisplayClass69_0_TypeDefinitionIndex = 43373;

	class TMP_Dropdown___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::TMPro::TMP_Dropdown* __4__this; // 0x10
		::TMPro::TMP_Dropdown_DropdownItem* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN___C__DISPLAYCLASS69_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
