#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x19656B10)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x19657860)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x19657510)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19657870)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SequenceNode_TypeDefinitionIndex = 2065;

	class SequenceNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE__CTOR_OFFSET))(this);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* a1, ::System::Xml::Schema::BitSet* a2, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET))(this, a1, a2, a3);
		}
	};
}
