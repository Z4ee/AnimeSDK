#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET UNITYSDK_OFFSET(0x1F24F280)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1F24F410)
#define SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F24F480)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int InteriorNode_TypeDefinitionIndex = 1966;

	class InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Xml::Schema::SyntaxTreeNode* leftChild; // 0x10
		::System::Xml::Schema::SyntaxTreeNode* rightChild; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET))(this);
		}

		::System::Void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET))(this, parent, symbols, positions);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}
	};
}
