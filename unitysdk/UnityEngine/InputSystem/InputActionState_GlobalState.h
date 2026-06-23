#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_GlobalState_TypeDefinitionIndex = 31570;

	struct alignas(8) InputActionState_GlobalState
	{
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> globalList; // 0x10
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> onActionChange; // 0x20
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*> onActionControlsChanged; // 0x70
	};
}
