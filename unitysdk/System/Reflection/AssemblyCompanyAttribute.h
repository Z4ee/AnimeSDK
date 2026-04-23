#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYCOMPANYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179953B0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyCompanyAttribute_TypeDefinitionIndex = 541;

	class AssemblyCompanyAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_company; // 0x10

		::System::Void _ctor(::System::String* company)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCOMPANYATTRIBUTE__CTOR_OFFSET))(this, company);
		}
	};
}
