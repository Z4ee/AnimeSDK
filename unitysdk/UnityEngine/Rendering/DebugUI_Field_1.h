#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Rendering { template <typename T> class DebugUI_Field_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Field_1_TypeDefinitionIndex = 34092;

	template <typename T>
	class DebugUI_Field_1 : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::System::Func_1<T>* _getter_k__BackingField; // 0x0
		::System::Action_1<T>* _setter_k__BackingField; // 0x0
		::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* onValueChanged; // 0x0
	};
}
