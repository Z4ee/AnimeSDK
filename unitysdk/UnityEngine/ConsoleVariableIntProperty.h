#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x22E36E0)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A434AE0)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A434AD0)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x22E36A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableIntProperty_TypeDefinitionIndex = 3869;

	struct alignas(8) ConsoleVariableIntProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* name, ::System::String* description, ::System::Int32 defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY__CTOR_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		static ::System::Int32 op_Implicit(::UnityEngine::ConsoleVariableIntProperty property)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableIntProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_OFFSET))(property);
		}

		static ::System::Single op_Implicit_1(::UnityEngine::ConsoleVariableIntProperty property)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableIntProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_1_OFFSET))(property);
		}
	};
}
