#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1636A560)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyProductAttribute_TypeDefinitionIndex = 540;

	class AssemblyProductAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_product; // 0x10

		::System::Void _ctor(::System::String* product)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE__CTOR_OFFSET))(this, product);
		}
	};
}
