#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_ADDFINGERS_OFFSET UNITYSDK_OFFSET(0xA65B40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0xA65B60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_REMOVEFINGERS_OFFSET UNITYSDK_OFFSET(0xA65B50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_UPDATEACTIVEFINGERS_OFFSET UNITYSDK_OFFSET(0xA65B70)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_UPDATEACTIVETOUCHES_OFFSET UNITYSDK_OFFSET(0xA65B80)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_FingerAndTouchState_TypeDefinitionIndex = 32432;

	struct alignas(8) Touch_FingerAndTouchState
	{
		::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* fingers; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* activeFingers; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::EnhancedTouch::Touch>* activeTouches; // 0x28
		::System::Int32 activeFingerCount; // 0x30
		::System::Int32 activeTouchCount; // 0x34
		::System::Int32 totalFingerCount; // 0x38
		::System::UInt32 lastId; // 0x3C
		::System::Boolean haveBuiltActiveTouches; // 0x40
		::System::Boolean haveActiveTouchesNeedingRefreshNextUpdate; // 0x41
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState; // 0x48

		::System::Void AddFingers(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_ADDFINGERS_OFFSET))(this, screen);
		}

		::System::Void RemoveFingers(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_REMOVEFINGERS_OFFSET))(this, screen);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_DESTROY_OFFSET))(this);
		}

		::System::Void UpdateActiveFingers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_UPDATEACTIVEFINGERS_OFFSET))(this);
		}

		::System::Void UpdateActiveTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_FINGERANDTOUCHSTATE_UPDATEACTIVETOUCHES_OFFSET))(this);
		}
	};
}
