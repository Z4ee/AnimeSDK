#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/AxisEventData.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E785080)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E785060)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int ExtendedAxisEventData_TypeDefinitionIndex = 32383;

	class ExtendedAxisEventData : public ::UnityEngine::EventSystems::AxisEventData
	{
	public:
		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA__CTOR_OFFSET))(this, eventSystem);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
