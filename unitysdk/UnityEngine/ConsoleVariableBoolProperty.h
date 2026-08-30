#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3BB86C0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1ED14800)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1ED14820)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1ED14840)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ED147E0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3BB86D0)
#define UNITYENGINE_CONSOLEVARIABLEBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB8680)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableBoolProperty_TypeDefinitionIndex = 4055;

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
