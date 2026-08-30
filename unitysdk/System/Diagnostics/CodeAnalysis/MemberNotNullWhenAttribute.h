#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1A000)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MemberNotNullWhenAttribute_TypeDefinitionIndex = 35220;

	class MemberNotNullWhenAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Members_k__BackingField; // 0x10
		::System::Boolean _ReturnValue_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
