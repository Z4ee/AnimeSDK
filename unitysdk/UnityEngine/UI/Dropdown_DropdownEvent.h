#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75EB10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_DropdownEvent_TypeDefinitionIndex = 18865;

	class Dropdown_DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
