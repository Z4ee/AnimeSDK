#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/LeafNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1ECA6D70)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x1ECA6D60)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECA6D40)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA6D00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafRangeNode_TypeDefinitionIndex = 1973;

	class LeafRangeNode : public ::System::Xml::Schema::LeafNode
	{
	public:
		::System::Xml::Schema::BitSet* nextIteration; // 0x18
		::System::Decimal max; // 0x20
		::System::Decimal min; // 0x30

		::System::Void _ctor(::System::Decimal min, ::System::Decimal max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE__CTOR_OFFSET))(this, min, max);
		}

		::System::Void _ctor_1(::System::Int32 pos, ::System::Decimal min, ::System::Decimal max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE__CTOR_1_OFFSET))(this, pos, min, max);
		}

		::System::Boolean get_IsRangeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_ISRANGENODE_OFFSET))(this);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}
	};
}
