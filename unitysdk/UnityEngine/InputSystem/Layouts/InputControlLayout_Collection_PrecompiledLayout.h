#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Collection_PrecompiledLayout_TypeDefinitionIndex = 32610;

	struct alignas(8) InputControlLayout_Collection_PrecompiledLayout
	{
		::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod; // 0x10
		::System::String* metadata; // 0x18
	};
}
