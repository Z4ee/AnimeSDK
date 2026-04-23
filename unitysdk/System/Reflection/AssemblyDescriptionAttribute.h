#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17995410)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDescriptionAttribute_TypeDefinitionIndex = 542;

	class AssemblyDescriptionAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_description; // 0x10

		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}
	};
}
