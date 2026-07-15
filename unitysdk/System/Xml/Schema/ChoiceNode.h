#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }
namespace System::Xml::Schema { class SyntaxTreeNode; }

#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET UNITYSDK_OFFSET(0x19F93260)
#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x19F933D0)
#define SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x19F936F0)
#define SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x19F93570)
#define SYSTEM_XML_SCHEMA_CHOICENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F93990)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ChoiceNode_TypeDefinitionIndex = 2067;

	class ChoiceNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* a1, ::System::Xml::Schema::BitSet* a2, ::System::Xml::Schema::BitSet* a3, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a4)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* a1, ::System::Xml::Schema::BitSet* a2, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::Positions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET))(this, a1, a2, a3);
		}
	};
}
