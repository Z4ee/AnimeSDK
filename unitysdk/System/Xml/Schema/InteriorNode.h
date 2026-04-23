#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET UNITYSDK_OFFSET(0x19FB2FF0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x19FC8350)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x19FC8310)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x19FC8330)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x19FC8320)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x19FC8340)
#define SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3190)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int InteriorNode_TypeDefinitionIndex = 2060;

	class InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Xml::Schema::SyntaxTreeNode* rightChild; // 0x10
		::System::Xml::Schema::SyntaxTreeNode* leftChild; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::SyntaxTreeNode* get_LeftChild()
		{
			return ((::System::Xml::Schema::SyntaxTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET))(this);
		}

		::System::Void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SyntaxTreeNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET))(this, value);
		}

		::System::Xml::Schema::SyntaxTreeNode* get_RightChild()
		{
			return ((::System::Xml::Schema::SyntaxTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET))(this);
		}

		::System::Void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SyntaxTreeNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET))(this, value);
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
