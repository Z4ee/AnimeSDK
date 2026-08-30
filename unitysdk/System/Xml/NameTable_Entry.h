#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_NAMETABLE_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCE10)

namespace System::Xml
{
	inline static constexpr unsigned int NameTable_Entry_TypeDefinitionIndex = 1929;

	class NameTable_Entry : public ::System::Object
	{
	public:
		::System::Xml::NameTable_Entry* next; // 0x10
		::System::String* str; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Xml::NameTable_Entry* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Xml::NameTable_Entry*))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
