#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_VALUE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AE510)
#define UNITYENGINE_RENDERING_DEBUGUI_VALUE_GET_GETTER_OFFSET UNITYSDK_OFFSET(0x1B4AE4F0)
#define UNITYENGINE_RENDERING_DEBUGUI_VALUE_SET_GETTER_OFFSET UNITYSDK_OFFSET(0x1B4AE500)
#define UNITYENGINE_RENDERING_DEBUGUI_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE590)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Value_TypeDefinitionIndex = 18302;

	class DebugUI_Value : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::System::Func_1<::System::Object*>* _getter_k__BackingField; // 0x38
		::System::Single refreshRate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VALUE__CTOR_OFFSET))(this);
		}

		::System::Func_1<::System::Object*>* get_getter()
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VALUE_GET_GETTER_OFFSET))(this);
		}

		::System::Void set_getter(::System::Func_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VALUE_SET_GETTER_OFFSET))(this, value);
		}

		::System::Object* GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VALUE_GETVALUE_OFFSET))(this);
		}
	};
}
