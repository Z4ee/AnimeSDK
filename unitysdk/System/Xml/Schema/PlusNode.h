#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/InteriorNode.h"

namespace System::Xml::Schema { class BitSet; }

#define SYSTEM_XML_SCHEMA_PLUSNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x1CA4A560)
#define SYSTEM_XML_SCHEMA_PLUSNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1CA4A760)
#define SYSTEM_XML_SCHEMA_PLUSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4A790)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int PlusNode_TypeDefinitionIndex = 1970;

	class PlusNode : public ::System::Xml::Schema::InteriorNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE__CTOR_OFFSET))(this);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE_CONSTRUCTPOS_OFFSET))(this, firstpos, lastpos, followpos);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE_GET_ISNULLABLE_OFFSET))(this);
		}
	};
}
