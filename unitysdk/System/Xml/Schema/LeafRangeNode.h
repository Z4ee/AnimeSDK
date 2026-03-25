#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/LeafNode.h"

namespace System::Xml::Schema { class BitSet; }

#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MAX_OFFSET UNITYSDK_OFFSET(0x1858D720)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1858D730)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_NEXTITERATION_OFFSET UNITYSDK_OFFSET(0x1858D740)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_SET_NEXTITERATION_OFFSET UNITYSDK_OFFSET(0x1858D750)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafRangeNode_TypeDefinitionIndex = 2066;

	class LeafRangeNode : public ::System::Xml::Schema::LeafNode
	{
	public:
		::System::Xml::Schema::BitSet* nextIteration; // 0x18
		::System::Decimal max; // 0x20
		::System::Decimal min; // 0x30

		::System::Decimal get_Max()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MAX_OFFSET))(this);
		}

		::System::Decimal get_Min()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MIN_OFFSET))(this);
		}

		::System::Xml::Schema::BitSet* get_NextIteration()
		{
			return ((::System::Xml::Schema::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_NEXTITERATION_OFFSET))(this);
		}

		::System::Void set_NextIteration(::System::Xml::Schema::BitSet* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_SET_NEXTITERATION_OFFSET))(this, value);
		}
	};
}
