#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParameterizedStrings_FormatParam.h"

namespace System { class ParameterizedStrings_LowLevelStack; }
namespace System { class String; }

#define SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1C6D6140)
#define SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET UNITYSDK_OFFSET(0x1C6D6130)
#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6D4C10)
#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C6D4A20)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET UNITYSDK_OFFSET(0x1C6D5BD0)
#define SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET UNITYSDK_OFFSET(0x1C6D6050)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_1_OFFSET UNITYSDK_OFFSET(0x1C6D63B0)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET UNITYSDK_OFFSET(0x1C6D62E0)
#define SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET UNITYSDK_OFFSET(0x1C6D6150)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_TypeDefinitionIndex = 412;

	class ParameterizedStrings : public ::System::Object
	{
	public:
		static ::System::ParameterizedStrings_LowLevelStack** StaticGet__cachedStack()
		{
			return (::System::ParameterizedStrings_LowLevelStack**)Il2CppClass::FromTypeDefinitionIndex(ParameterizedStrings_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::String* Evaluate(::System::String* format, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET))(format, args);
		}

		static ::System::String* EvaluateInternal(::System::String* format, ::System::Int32& pos, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* args, ::System::ParameterizedStrings_LowLevelStack* stack, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& dynamicVars, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& staticVars)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*, ::System::ParameterizedStrings_LowLevelStack*, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET))(format, pos, args, stack, dynamicVars, staticVars);
		}

		static ::System::Boolean AsBool(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET))(i);
		}

		static ::System::Int32 AsInt(::System::Boolean b)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET))(b);
		}

		static ::System::String* StringFromAsciiBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET))(buffer, offset, length);
		}

		static ::System::Int32 snprintf(::System::Byte* str, ::System::IntPtr size, ::System::String* format, ::System::String* arg1)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET))(str, size, format, arg1);
		}

		static ::System::Int32 snprintf_1(::System::Byte* str, ::System::IntPtr size, ::System::String* format, ::System::Int32 arg1)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_1_OFFSET))(str, size, format, arg1);
		}

		static ::System::String* FormatPrintF(::System::String* format, ::System::Object* arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET))(format, arg);
		}

		static ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* GetDynamicOrStaticVariables(::System::Char c, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& dynamicVars, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& staticVars, ::System::Int32& index)
		{
			return ((::Il2CppArray<::System::ParameterizedStrings_FormatParam>*(*)(::System::Char, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET))(c, dynamicVars, staticVars, index);
		}
	};
}
