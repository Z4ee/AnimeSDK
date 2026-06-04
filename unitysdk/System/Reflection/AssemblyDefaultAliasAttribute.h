#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x187490E0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDefaultAliasAttribute_TypeDefinitionIndex = 544;

	class AssemblyDefaultAliasAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_defaultAlias; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
