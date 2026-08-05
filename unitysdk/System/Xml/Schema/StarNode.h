#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }

#define SYSTEM_XML_SCHEMA_STARNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1F14B7B0)
#define SYSTEM_XML_SCHEMA_STARNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1F14B9B0)
#define SYSTEM_XML_SCHEMA_STARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14B9C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StarNode_TypeDefinitionIndex = 1972;

	class StarNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE__CTOR_OFFSET))(this);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
