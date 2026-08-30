#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParameterizedStrings_FormatParam.h"

#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC0CBA0)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_POP_OFFSET UNITYSDK_OFFSET(0x1CC0DC50)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1CC0E1F0)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0CB60)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_LowLevelStack_TypeDefinitionIndex = 429;

	class ParameterizedStrings_LowLevelStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::ParameterizedStrings_FormatParam>* _arr; // 0x10
		::System::Int32 _count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK__CTOR_OFFSET))(this);
		}

		::System::ParameterizedStrings_FormatParam Pop()
		{
			return ((::System::ParameterizedStrings_FormatParam(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_POP_OFFSET))(this);
		}

		::System::Void Push(::System::ParameterizedStrings_FormatParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParameterizedStrings_FormatParam))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_PUSH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_CLEAR_OFFSET))(this);
		}
	};
}
