#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"

namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B07A8E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B07A930)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1B07A940)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1B07A950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B07A980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1B07A970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1B07A960)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1B07A920)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B07A900)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07A8C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInfo_TypeDefinitionIndex = 2203;

	class XmlSchemaInfo : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute; // 0x10
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x18
		::System::Xml::Schema::XmlSchemaElement* schemaElement; // 0x20
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x28
		::System::Boolean isDefault; // 0x30
		::System::Boolean isNil; // 0x31
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x34
		::System::Xml::Schema::XmlSchemaValidity validity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaValidity a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidity))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchemaValidity get_Validity()
		{
			return ((::System::Xml::Schema::XmlSchemaValidity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_VALIDITY_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISNIL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET))(this);
		}
	};
}
