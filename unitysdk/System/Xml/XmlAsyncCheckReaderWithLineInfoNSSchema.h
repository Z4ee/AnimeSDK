#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"
#include "unitysdk/System/Xml/XmlAsyncCheckReaderWithLineInfoNS.h"

namespace System::Xml { class XmlReader; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1ACDC490)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1ACDC570)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1ACDC650)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ACDC8F0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1ACDC810)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1ACDC730)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1ACDC3B0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDC310)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReaderWithLineInfoNSSchema_TypeDefinitionIndex = 1708;

	class XmlAsyncCheckReaderWithLineInfoNSSchema : public ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS
	{
	public:
		::System::Xml::Schema::IXmlSchemaInfo* readerAsIXmlSchemaInfo; // 0x30

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA__CTOR_OFFSET))(this, reader);
		}

		::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity()
		{
			return ((::System::Xml::Schema::XmlSchemaValidity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_VALIDITY_OFFSET))(this);
		}

		::System::Boolean System_Xml_Schema_IXmlSchemaInfo_get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean System_Xml_Schema_IXmlSchemaInfo_get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISNIL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONSSCHEMA_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}
	};
}
