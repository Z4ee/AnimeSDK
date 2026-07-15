#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x3A8C680)
#define UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x3A8C690)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableStringProperty_TypeDefinitionIndex = 4050;

	struct alignas(8) ConsoleVariableStringProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLESTRINGPROPERTY_GET_STRINGVALUE_OFFSET))(this);
		}
	};
}
