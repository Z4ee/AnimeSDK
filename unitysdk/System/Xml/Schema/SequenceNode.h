#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x185949F0)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x18595120)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x18594F70)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18595130)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SequenceNode_TypeDefinitionIndex = 2060;

	class SequenceNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE__CTOR_OFFSET))(this);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}
	};
}
