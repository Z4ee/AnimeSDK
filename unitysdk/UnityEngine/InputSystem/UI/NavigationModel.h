#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class AxisEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_NAVIGATIONMODEL_RESET_OFFSET UNITYSDK_OFFSET(0x881530)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int NavigationModel_TypeDefinitionIndex = 29114;

	struct alignas(8) NavigationModel
	{
		::UnityEngine::Vector2 move; // 0x10
		::System::Int32 consecutiveMoveCount; // 0x18
		::UnityEngine::EventSystems::MoveDirection lastMoveDirection; // 0x1C
		::System::Single lastMoveTime; // 0x20
		::UnityEngine::EventSystems::AxisEventData* eventData; // 0x28

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_NAVIGATIONMODEL_RESET_OFFSET))(this);
		}
	};
}
