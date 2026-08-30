#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class SequenceNode; }

#define SYSTEM_XML_SCHEMA_SEQUENCENODE_SEQUENCECONSTRUCTPOSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3B760D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SequenceNode_SequenceConstructPosContext_TypeDefinitionIndex = 2073;

	struct alignas(8) SequenceNode_SequenceConstructPosContext
	{
		::System::Xml::Schema::SequenceNode* this_; // 0x10
		::System::Xml::Schema::BitSet* firstpos; // 0x18
		::System::Xml::Schema::BitSet* lastpos; // 0x20
		::System::Xml::Schema::BitSet* lastposLeft; // 0x28
		::System::Xml::Schema::BitSet* firstposRight; // 0x30

		::System::Void _ctor(::System::Xml::Schema::SequenceNode* a1, ::System::Xml::Schema::BitSet* a2, ::System::Xml::Schema::BitSet* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SequenceNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_SEQUENCECONSTRUCTPOSCONTEXT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
