#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseInput.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1C0B3E70)
#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B3E80)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int BaseInputOverride_TypeDefinitionIndex = 29106;

	class BaseInputOverride : public ::UnityEngine::EventSystems::BaseInput
	{
	public:
		::System::String* _compositionString_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::String* get_compositionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_GET_COMPOSITIONSTRING_OFFSET))(this);
		}
	};
}
