#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1AE3BF00)
#define SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1AE3BEF0)
#define SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE3BF40)
#define SYSTEM_XML_SCHEMA_LEAFNODE_GET_POS_OFFSET UNITYSDK_OFFSET(0x1AE3BED0)
#define SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET UNITYSDK_OFFSET(0x1AE3BEE0)
#define SYSTEM_XML_SCHEMA_LEAFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3BEC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafNode_TypeDefinitionIndex = 2058;

	class LeafNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Int32 pos; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET))(this, a1);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* a1, ::System::Xml::Schema::BitSet* a2, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
