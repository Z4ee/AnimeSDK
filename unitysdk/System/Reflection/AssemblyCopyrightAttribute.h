#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYCOPYRIGHTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3C00)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyCopyrightAttribute_TypeDefinitionIndex = 537;

	class AssemblyCopyrightAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_copyright; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCOPYRIGHTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
