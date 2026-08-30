#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1E805D00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_BASEXMLSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1E8211E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1E8211F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1E81E860)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1E80E020)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E8094C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1E809CF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETBASESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1E821210)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E821240)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E821230)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDERIVEDBY_OFFSET UNITYSDK_OFFSET(0x1E821220)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1E81E830)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1E81E850)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1E821200)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81EF30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaType_TypeDefinitionIndex = 2216;

	class XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x10
		::System::Xml::XmlQualifiedName* qname; // 0x18
		::System::Xml::Schema::XmlSchemaType* baseSchemaType; // 0x20
		::System::Xml::Schema::SchemaElementDecl* elementDecl; // 0x28
		::System::Xml::Schema::XmlSchemaDerivationMethod final; // 0x30
		::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy; // 0x34
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode a1)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET))(a1);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_BASEXMLSCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_IsMixed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET))(this);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET))(this, a1);
		}

		::System::Void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETBASESCHEMATYPE_OFFSET))(this, a1);
		}

		::System::Void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDerivationMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDERIVEDBY_OFFSET))(this, a1);
		}

		::System::Void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETDATATYPE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SchemaElementDecl* get_ElementDecl()
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET))(this);
		}

		::System::Void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET))(this, a1);
		}

		::System::Void SetContentType(::System::Xml::Schema::XmlSchemaContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETCONTENTTYPE_OFFSET))(this, a1);
		}
	};
}
