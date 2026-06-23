#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XMLSCHEMAOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_XmlSchemaObjectEntry_TypeDefinitionIndex = 2175;

	struct alignas(8) XmlSchemaObjectTable_XmlSchemaObjectEntry
	{
		::System::Xml::XmlQualifiedName* qname; // 0x10
		::System::Xml::Schema::XmlSchemaObject* xso; // 0x18

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XMLSCHEMAOBJECTENTRY__CTOR_OFFSET))(this, name, value);
		}
	};
}
