#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3A8C570)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C16A1E0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1C16A200)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1C16A220)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C16A1C0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3A8C580)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x3A8C530)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableBoolProperty_TypeDefinitionIndex = 4047;

	struct alignas(8) ConsoleVariableBoolProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_SET_BOOLVALUE_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::ConsoleVariableBoolProperty a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_1(::UnityEngine::ConsoleVariableBoolProperty a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_2(::UnityEngine::ConsoleVariableBoolProperty a1)
		{
			return ((::System::String*(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_3(::UnityEngine::ConsoleVariableBoolProperty a1)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableBoolProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_3_OFFSET))(a1);
		}
	};
}
