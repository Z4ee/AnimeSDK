#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaGroupBase.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x185B0560)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x185AEDE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSequence_TypeDefinitionIndex = 2197;

	class XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET))(this);
		}
	};
}
