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

#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1AE3D300)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1AE3CD60)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1AE3CD30)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE3D350)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3CD20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceListNode_TypeDefinitionIndex = 2059;

	class NamespaceListNode : public ::System::Xml::Schema::SyntaxTreeNode
	{
	public:
		::System::Object* particle; // 0x10
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x18

		::System::Void _ctor(::System::Xml::Schema::NamespaceList* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::NamespaceList*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::ICollection* GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* a1)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::Xml::Schema::SymbolsDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET))(this, a1);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* a1, ::System::Xml::Schema::BitSet* a2, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
