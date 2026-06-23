#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseInput.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D1100)
#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D1110)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int BaseInputOverride_TypeDefinitionIndex = 31762;

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
