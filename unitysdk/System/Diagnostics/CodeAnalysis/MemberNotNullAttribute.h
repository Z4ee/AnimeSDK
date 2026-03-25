#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEF430)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MemberNotNullAttribute_TypeDefinitionIndex = 6456;

	class MemberNotNullAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Members_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLATTRIBUTE__CTOR_OFFSET))(this, member);
		}
	};
}
