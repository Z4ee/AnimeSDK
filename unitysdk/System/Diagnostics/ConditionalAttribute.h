#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x162B2420)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ConditionalAttribute_TypeDefinitionIndex = 1562;

	class ConditionalAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_conditionString; // 0x10

		::System::Void _ctor(::System::String* conditionString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE__CTOR_OFFSET))(this, conditionString);
		}
	};
}
