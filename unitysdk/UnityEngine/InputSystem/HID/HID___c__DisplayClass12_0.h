#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem::HID { class HID_HIDLayoutBuilder; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8070)
#define UNITYENGINE_INPUTSYSTEM_HID_HID___C__DISPLAYCLASS12_0__ONFINDLAYOUTFORDEVICE_B__0_OFFSET UNITYSDK_OFFSET(0x1D3B8080)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID___c__DisplayClass12_0_TypeDefinitionIndex = 31800;

	class HID___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* layout; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID___C__DISPLAYCLASS12_0__ONFINDLAYOUTFORDEVICE_B__0_OFFSET))(this);
		}
	};
}
