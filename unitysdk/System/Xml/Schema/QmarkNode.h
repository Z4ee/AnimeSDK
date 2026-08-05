#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }

#define SYSTEM_XML_SCHEMA_QMARKNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1F250F30)
#define SYSTEM_XML_SCHEMA_QMARKNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1F250F60)
#define SYSTEM_XML_SCHEMA_QMARKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F250F70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int QmarkNode_TypeDefinitionIndex = 1971;

	class QmarkNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QMARKNODE__CTOR_OFFSET))(this);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QMARKNODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QMARKNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
