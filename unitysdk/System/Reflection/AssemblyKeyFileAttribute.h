#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYKEYFILEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC14790)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyKeyFileAttribute_TypeDefinitionIndex = 550;

	class AssemblyKeyFileAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_keyFile; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYKEYFILEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
