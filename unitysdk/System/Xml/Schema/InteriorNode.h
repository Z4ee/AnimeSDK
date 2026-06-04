#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AE27E10)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1AE3BE50)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x1AE3BE10)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x1AE3BE30)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x1AE3BE20)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x1AE3BE40)
#define SYSTEM_XML_SCHEMA_INTERIORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE27FD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int InteriorNode_TypeDefinitionIndex = 2060;

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

		::System::Void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SyntaxTreeNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SyntaxTreeNode* get_RightChild()
		{
			return ((::System::Xml::Schema::SyntaxTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET))(this);
		}

		::System::Void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SyntaxTreeNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET))(this, a1);
		}

		::System::Void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET))(this, a1, a2, a3);
		}
	};
}
