#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaGroupBase.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F10B180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1F10B170)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET UNITYSDK_OFFSET(0x1F10B1D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B1E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAll_TypeDefinitionIndex = 2114;

	class XmlSchemaAll : public ::System::Xml::Schema::XmlSchemaGroupBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET))(this, newItems);
		}
	};
}
