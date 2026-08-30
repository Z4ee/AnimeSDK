#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYMETADATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8AEE0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyMetadataAttribute_TypeDefinitionIndex = 552;

	class AssemblyMetadataAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_value; // 0x10
		::System::String* m_key; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYMETADATAATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
