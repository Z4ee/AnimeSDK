#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParameterizedStrings_FormatParam.h"

namespace System { class ParameterizedStrings_LowLevelStack; }
namespace System { class String; }

#define SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1AFBD8A0)
#define SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET UNITYSDK_OFFSET(0x1AFBD890)
#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFBC0C0)
#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AFBBE80)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET UNITYSDK_OFFSET(0x1AFBD230)
#define SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AFBD7C0)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_1_OFFSET UNITYSDK_OFFSET(0x1AFBDAC0)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET UNITYSDK_OFFSET(0x1AFBD9F0)
#define SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET UNITYSDK_OFFSET(0x1AFBD8B0)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_TypeDefinitionIndex = 424;

	class ParameterizedStrings : public ::System::Object
	{
	public:
		static ::System::ParameterizedStrings_LowLevelStack** StaticGet__cachedStack()
		{
			return (::System::ParameterizedStrings_LowLevelStack**)Il2CppClass::FromTypeDefinitionIndex(ParameterizedStrings_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::String* Evaluate(::System::String* a1, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET))(a1, a2);
		}

		static ::System::String* EvaluateInternal(::System::String* a1, ::System::Int32& a2, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* a3, ::System::ParameterizedStrings_LowLevelStack* a4, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& a5, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& a6)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*, ::System::ParameterizedStrings_LowLevelStack*, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean AsBool(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET))(a1);
		}

		static ::System::Int32 AsInt(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET))(a1);
		}

		static ::System::String* StringFromAsciiBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 snprintf(::System::Byte* a1, ::System::IntPtr a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 snprintf_1(::System::Byte* a1, ::System::IntPtr a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatPrintF(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::ParameterizedStrings_FormatParam>* GetDynamicOrStaticVariables(::System::Char a1, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& a2, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*& a3, ::System::Int32& a4)
		{
			return ((::Il2CppArray<::System::ParameterizedStrings_FormatParam>*(*)(::System::Char, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::Il2CppArray<::System::ParameterizedStrings_FormatParam>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET))(a1, a2, a3, a4);
		}
	};
}
