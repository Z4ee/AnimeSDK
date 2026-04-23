#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x22E3690)
#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A434890)
#define UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x22E3650)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableFloatProperty_TypeDefinitionIndex = 3870;

	struct alignas(8) ConsoleVariableFloatProperty
	{
		::UnityEngine::ConsoleVariableProperty property; // 0x10

		::System::Void _ctor(::System::String* name, ::System::String* description, ::System::Single defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY__CTOR_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		static ::System::Single op_Implicit(::UnityEngine::ConsoleVariableFloatProperty property)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableFloatProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEFLOATPROPERTY_OP_IMPLICIT_OFFSET))(property);
		}
	};
}
