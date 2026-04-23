#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_ENUM_VALUESANDNAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1790D9F0)

namespace System
{
	inline static constexpr unsigned int Enum_ValuesAndNames_TypeDefinitionIndex = 241;

	class Enum_ValuesAndNames : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt64>* Values; // 0x10
		::Il2CppArray<::System::String*>* Names; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt64>* values, ::Il2CppArray<::System::String*>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_VALUESANDNAMES__CTOR_OFFSET))(this, values, names);
		}
	};
}
