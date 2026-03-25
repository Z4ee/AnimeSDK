#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x189FB240)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETFLOATFORMANAGED_OFFSET UNITYSDK_OFFSET(0x189FB270)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETINTFORMANAGED_OFFSET UNITYSDK_OFFSET(0x189FB260)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETSTRINGFORMANAGED_OFFSET UNITYSDK_OFFSET(0x189FB290)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x189FB0B0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x2110A80)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x2110AE0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x2110B30)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1493180)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x2110C50)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x189FAC80)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x189FACA0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x189FACC0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189FAC60)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x189FB250)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x2110A90)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2110C10)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2110C20)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2110C30)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x2110C40)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x2110B40)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableProperty_TypeDefinitionIndex = 3865;

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
