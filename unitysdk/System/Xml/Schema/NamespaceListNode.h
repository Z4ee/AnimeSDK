#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SyntaxTreeNode.h"

namespace System { class Object; }
namespace System::Collections { class ICollection; }
namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class NamespaceList; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1EA21F70)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1EA21A70)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1EA21A40)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1EA21FC0)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA21A30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceListNode_TypeDefinitionIndex = 1965;

	class NamespaceListNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x10
		::System::Object* particle; // 0x18

		::System::Void _ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::NamespaceList*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE__CTOR_OFFSET))(this, namespaceList, particle);
		}

		::System::Collections::ICollection* GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* symbols)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::Xml::Schema::SymbolsDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET))(this, symbols);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
