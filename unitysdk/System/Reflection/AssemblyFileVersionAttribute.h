#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYFILEVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3C40)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyFileVersionAttribute_TypeDefinitionIndex = 546;

	class AssemblyFileVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _version; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYFILEVERSIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
