#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }
namespace System::Xml::Schema { class SyntaxTreeNode; }

#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET UNITYSDK_OFFSET(0x1A459950)
#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1A459AB0)
#define SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x1A459CE0)
#define SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1A459C40)
#define SYSTEM_XML_SCHEMA_CHOICENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A459CF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ChoiceNode_TypeDefinitionIndex = 1970;

	class ChoiceNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* child, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET))(child, firstpos, lastpos, followpos);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET))(this, parent, symbols, positions);
		}
	};
}
