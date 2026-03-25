#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_INT32_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x20D93E0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_STRING_OFFSET UNITYSDK_OFFSET(0x20D93C0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x16364C30)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2BD80)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x20D93B0)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_FormatParam_TypeDefinitionIndex = 426;

	struct alignas(8) ParameterizedStrings_FormatParam
	{
		::System::Int32 _int32; // 0x10
		::System::String* _string; // 0x18

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 intValue, ::System::String* stringValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_1_OFFSET))(this, intValue, stringValue);
		}

		static ::System::ParameterizedStrings_FormatParam op_Implicit(::System::Int32 value)
		{
			return ((::System::ParameterizedStrings_FormatParam(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Int32 get_Int32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_INT32_OFFSET))(this);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_STRING_OFFSET))(this);
		}

		::System::Object* get_Object()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_OBJECT_OFFSET))(this);
		}
	};
}
