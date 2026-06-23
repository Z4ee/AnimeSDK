#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1CA4A510)
#define SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1CA4A500)
#define SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1CA4A550)
#define SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET UNITYSDK_OFFSET(0x1CA4A4F0)
#define SYSTEM_XML_SCHEMA_LEAFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4A4E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafNode_TypeDefinitionIndex = 1964;

	class LeafNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Int32 pos; // 0x10

		::System::Void _ctor(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE__CTOR_OFFSET))(this, pos);
		}

		::System::Void set_Pos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET))(this, value);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
