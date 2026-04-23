#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A434CE0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETFLOATFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A434D10)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETINTFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A434D00)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETSTRINGFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A434D30)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A434AF0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x22E3630)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x22E3690)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x22E36E0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD0C40)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x22E3740)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A434610)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A434630)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A434650)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A4345F0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1A434CF0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x22E3640)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22E3700)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22E3710)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22E3720)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22E3730)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x22E36F0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableProperty_TypeDefinitionIndex = 3867;

	struct alignas(8) ConsoleVariableProperty
	{
		::System::String* _Name_k__BackingField; // 0x10
		::System::IntPtr _value; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_OFFSET))(this, name, onValueChanged);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* description, ::System::Boolean defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_1_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Void _ctor_2(::System::String* name, ::System::String* description, ::System::Int32 defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_2_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Void _ctor_3(::System::String* name, ::System::String* description, ::System::Single defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_3_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Void _ctor_4(::System::String* name, ::System::String* description, ::System::String* defaultValue, ::System::Action* onValueChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_4_OFFSET))(this, name, description, defaultValue, onValueChanged);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_SET_BOOLVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_STRINGVALUE_OFFSET))(this);
		}

		static ::System::IntPtr GetVariable(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETVARIABLE_OFFSET))(name);
		}

		static ::System::Boolean GetBoolForManaged(::System::IntPtr variablePtr)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETBOOLFORMANAGED_OFFSET))(variablePtr);
		}

		static ::System::Void SetBoolForManaged(::System::IntPtr variablePtr, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_SETBOOLFORMANAGED_OFFSET))(variablePtr, value);
		}

		static ::System::String* GetStringForManaged(::System::IntPtr variablePtr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETSTRINGFORMANAGED_OFFSET))(variablePtr);
		}

		static ::System::Single GetFloatForManaged(::System::IntPtr variablePtr)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETFLOATFORMANAGED_OFFSET))(variablePtr);
		}

		static ::System::Int32 GetIntForManaged(::System::IntPtr variablePtr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETINTFORMANAGED_OFFSET))(variablePtr);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::ConsoleVariableProperty property)
		{
			return ((::System::Boolean(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_OFFSET))(property);
		}

		static ::System::Int32 op_Implicit_1(::UnityEngine::ConsoleVariableProperty property)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_1_OFFSET))(property);
		}

		static ::System::String* op_Implicit_2(::UnityEngine::ConsoleVariableProperty property)
		{
			return ((::System::String*(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_2_OFFSET))(property);
		}

		static ::System::Single op_Implicit_3(::UnityEngine::ConsoleVariableProperty property)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_3_OFFSET))(property);
		}
	};
}
