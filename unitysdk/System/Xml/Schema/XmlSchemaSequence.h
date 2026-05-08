#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaGroupBase.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BACC400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1BACC3F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_SETITEMS_OFFSET UNITYSDK_OFFSET(0x1BACC450)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACC460)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSequence_TypeDefinitionIndex = 2184;

	class XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_SETITEMS_OFFSET))(this, newItems);
		}
	};
}
