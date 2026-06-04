#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PointerInputModule.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_ONGUI_OFFSET UNITYSDK_OFFSET(0xD0EE800)
#define UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0xD0EE250)
#define UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_START_OFFSET UNITYSDK_OFFSET(0xD0EE120)
#define UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0EEAF0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int VirtualCursorInputModule_TypeDefinitionIndex = 45046;

	class VirtualCursorInputModule : public ::UnityEngine::EventSystems::PointerInputModule
	{
	public:
		::UnityEngine::GameObject* cursorObject; // 0x58
		::UnityEngine::Camera* uiCamera; // 0x60
		::UnityEngine::EventSystems::EventSystem* eventSystem; // 0x68
		::UnityEngine::Vector2 Field_8_3; // 0x70
		::System::String* m_SubmitButton; // 0x78
		::System::Int32 playerNumber; // 0x80
		::UnityEngine::EventSystems::PointerEventData* Field_8_6; // 0x88
		::UnityEngine::Vector3 debugPos; // 0x90
		::UnityEngine::Vector3 mousePos; // 0x9C
		::UnityEngine::Resolution resolution; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_START_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_PROCESS_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_VIRTUALCURSORINPUTMODULE_ONGUI_OFFSET))(this);
		}
	};
}
