#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x2110C50)
#define UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x2110C60)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableStringProperty_TypeDefinitionIndex = 3869;

	struct alignas(8) ConsoleVariableStringProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* name, ::System::String* description, ::System::String* defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY__CTOR_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY_GET_STRINGVALUE_OFFSET))(this);
		}
	};
}
