#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x3C23180)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DECBBC0)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DECBBB0)
#define UNITYENGINE_CONSOLEVARIABLEINTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x3C23140)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableIntProperty_TypeDefinitionIndex = 4056;

	struct alignas(8) ConsoleVariableIntProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		static ::System::Int32 op_Implicit(::UnityEngine::ConsoleVariableIntProperty a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableIntProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_1(::UnityEngine::ConsoleVariableIntProperty a1)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableIntProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEINTPROPERTY_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
