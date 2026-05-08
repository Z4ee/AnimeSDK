#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::XR { class XRLayoutBuilder; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F06A0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER___C__DISPLAYCLASS5_0__ONFINDLAYOUTFORDEVICE_B__0_OFFSET UNITYSDK_OFFSET(0x1B4F06B0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRLayoutBuilder___c__DisplayClass5_0_TypeDefinitionIndex = 29065;

	class XRLayoutBuilder___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::XR::XRLayoutBuilder* layout; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER___C__DISPLAYCLASS5_0__ONFINDLAYOUTFORDEVICE_B__0_OFFSET))(this);
		}
	};
}
