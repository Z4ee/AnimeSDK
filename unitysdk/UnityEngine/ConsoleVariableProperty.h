#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1DECBD60)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETFLOATFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1DECBD90)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETINTFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1DECBD80)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETSTRINGFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1DECBDB0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DECBBD0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3C230D0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x3C23130)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x3C23180)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B79410)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x3C232A0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DECB7A0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1DECB7C0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1DECB7E0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DECB780)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SETBOOLFORMANAGED_OFFSET UNITYSDK_OFFSET(0x1DECBD70)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x3C230E0)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C23260)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C23270)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C23280)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C23290)
#define UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x3C23190)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableProperty_TypeDefinitionIndex = 4054;

	struct alignas(8) ConsoleVariableProperty
	{
		::System::String* _Name_k__BackingField; // 0x10
		::System::IntPtr _value; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_SET_BOOLVALUE_OFFSET))(this, a1);
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

		static ::System::IntPtr GetVariable(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETVARIABLE_OFFSET))(a1);
		}

		static ::System::Boolean GetBoolForManaged(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETBOOLFORMANAGED_OFFSET))(a1);
		}

		static ::System::Void SetBoolForManaged(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_SETBOOLFORMANAGED_OFFSET))(a1, a2);
		}

		static ::System::String* GetStringForManaged(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETSTRINGFORMANAGED_OFFSET))(a1);
		}

		static ::System::Single GetFloatForManaged(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETFLOATFORMANAGED_OFFSET))(a1);
		}

		static ::System::Int32 GetIntForManaged(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_GETINTFORMANAGED_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::ConsoleVariableProperty a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_1(::UnityEngine::ConsoleVariableProperty a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_2(::UnityEngine::ConsoleVariableProperty a1)
		{
			return ((::System::String*(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_3(::UnityEngine::ConsoleVariableProperty a1)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEPROPERTY_OP_IMPLICIT_3_OFFSET))(a1);
		}
	};
}
