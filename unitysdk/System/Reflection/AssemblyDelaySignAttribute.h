#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_REFLECTION_ASSEMBLYDELAYSIGNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3C20)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDelaySignAttribute_TypeDefinitionIndex = 548;

	class AssemblyDelaySignAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_delaySign; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDELAYSIGNATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
