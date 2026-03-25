#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x2110A80)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x189FAC70)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x189FAC90)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x189FACB0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189FAC50)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x2110A90)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x2110A40)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableBoolProperty_TypeDefinitionIndex = 3866;

	struct alignas(8) ConsoleVariableBoolProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* name, ::System::String* description, ::System::Boolean defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY__CTOR_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_SET_BOOLVALUE_OFFSET))(this, value);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::ConsoleVariableBoolProperty property)
		{
			return ((::System::Boolean(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_OFFSET))(property);
		}

		static ::System::Int32 op_Implicit_1(::UnityEngine::ConsoleVariableBoolProperty property)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_1_OFFSET))(property);
		}

		static ::System::String* op_Implicit_2(::UnityEngine::ConsoleVariableBoolProperty property)
		{
			return ((::System::String*(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_2_OFFSET))(property);
		}

		static ::System::Single op_Implicit_3(::UnityEngine::ConsoleVariableBoolProperty property)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_3_OFFSET))(property);
		}
	};
}
