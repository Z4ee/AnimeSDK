#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x9D49F0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_GET_STRING_OFFSET UNITYSDK_OFFSET(0x9D49D0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DCF0DB0)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x41FE00)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D49C0)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_FormatParam_TypeDefinitionIndex = 413;

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
