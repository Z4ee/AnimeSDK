#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define TMPRO_TMP_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC277D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_DropdownEvent_TypeDefinitionIndex = 43372;

	class TMP_Dropdown_DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
