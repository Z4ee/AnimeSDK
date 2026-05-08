#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserChange.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_OngoingAccountSelection.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_UserData.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_GlobalState_TypeDefinitionIndex = 29100;

	struct alignas(8) InputUser_GlobalState
	{
		::System::Int32 pairingStateVersion; // 0x10
		::System::UInt32 lastUserId; // 0x14
		::System::Int32 allUserCount; // 0x18
		::System::Int32 allPairedDeviceCount; // 0x1C
		::System::Int32 allLostDeviceCount; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::Users::InputUser>* allUsers; // 0x28
		::Il2CppArray<::UnityEngine::InputSystem::Users::InputUser_UserData>* allUserData; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* allPairedDevices; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* allLostDevices; // 0x40
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection> ongoingAccountSelections; // 0x48
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*> onChange; // 0x68
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> onUnpairedDeviceUsed; // 0xB8
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>*> onPreFilterUnpairedDeviceUsed; // 0x108
		::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* actionChangeDelegate; // 0x158
		::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* onDeviceChangeDelegate; // 0x160
		::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate; // 0x168
		::System::Boolean onActionChangeHooked; // 0x170
		::System::Boolean onDeviceChangeHooked; // 0x171
		::System::Boolean onEventHooked; // 0x172
		::System::Int32 listenForUnpairedDeviceActivity; // 0x174
	};
}
