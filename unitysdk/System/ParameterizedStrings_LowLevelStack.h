#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParameterizedStrings_FormatParam.h"

#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B8AA0A0)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_POP_OFFSET UNITYSDK_OFFSET(0x1B8A9F00)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1B8A9FB0)
#define SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9EC0)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_LowLevelStack_TypeDefinitionIndex = 414;

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

		::System::Void Push(::System::ParameterizedStrings_FormatParam item)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParameterizedStrings_FormatParam))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_PUSH_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_LOWLEVELSTACK_CLEAR_OFFSET))(this);
		}
	};
}
