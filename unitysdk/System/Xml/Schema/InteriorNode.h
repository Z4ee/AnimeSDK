#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET UNITYSDK_OFFSET(0x185782B0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1858D620)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x1858D5E0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x1858D600)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x1858D5F0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x1858D610)
#define SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18578450)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int InteriorNode_TypeDefinitionIndex = 2059;

	class InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Xml::Schema::SyntaxTreeNode* leftChild; // 0x10
		::System::Xml::Schema::SyntaxTreeNode* rightChild; // 0x18

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
