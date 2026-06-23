#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"

namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C1700F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_HASDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1C170210)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C170140)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1C170150)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISUNIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C170240)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1C170160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1701D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1C1701A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C170170)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1C170130)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1C170200)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1701E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1C1701B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C170180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C170110)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1700D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInfo_TypeDefinitionIndex = 2168;

	class XmlSchemaInfo : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute; // 0x10
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x18
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x20
		::System::Xml::Schema::XmlSchemaElement* schemaElement; // 0x28
		::System::Boolean isDefault; // 0x30
		::System::Boolean isNil; // 0x31
		::System::Xml::Schema::XmlSchemaValidity validity; // 0x34
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaValidity validity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidity))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO__CTOR_1_OFFSET))(this, validity);
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

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMATYPE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Void set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAELEMENT_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAATTRIBUTE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_HASDEFAULTVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsUnionType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISUNIONTYPE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET))(this);
		}
	};
}
