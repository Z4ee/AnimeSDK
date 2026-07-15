#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1AAF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ConditionalAttribute_TypeDefinitionIndex = 1565;

	class ConditionalAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_conditionString; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
