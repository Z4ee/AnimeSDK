#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1B5948C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_1_OFFSET UNITYSDK_OFFSET(0x1B5947E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1B594730)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1B594BD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1B594A70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B594E70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1B594A60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1B594A90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1B594B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROMDATATYPE_OFFSET UNITYSDK_OFFSET(0x1B594DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x1B594BF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1B594BC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1B594BE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1B594A80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B594E80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B594E90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaType_TypeDefinitionIndex = 2196;

	class XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::XmlQualifiedName* qname; // 0x58
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x60
		::System::Xml::Schema::XmlSchemaType* baseSchemaType; // 0x68
		::System::Xml::Schema::SchemaElementDecl* elementDecl; // 0x70
		::System::Xml::Schema::XmlSchemaType* redefined; // 0x78
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x80
		::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved; // 0x84
		::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy; // 0x88
		::System::Xml::Schema::XmlSchemaDerivationMethod final; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::XmlQualifiedName* qualifiedName)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_OFFSET))(qualifiedName);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType_1(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINSIMPLETYPE_1_OFFSET))(typeCode);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(::System::Xml::XmlQualifiedName* qualifiedName)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GETBUILTINCOMPLEXTYPE_OFFSET))(qualifiedName);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_QUALIFIEDNAME_OFFSET))(this);
		}

		::System::Boolean get_IsMixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ISMIXED_OFFSET))(this);
		}

		::System::Void set_IsMixed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ISMIXED_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_VALUECONVERTER_OFFSET))(this);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SETQUALIFIEDNAME_OFFSET))(this, value);
		}

		::System::Xml::Schema::SchemaElementDecl* get_ElementDecl()
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_ELEMENTDECL_OFFSET))(this);
		}

		::System::Void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_ELEMENTDECL_OFFSET))(this, value);
		}

		static ::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaType* derivedType, ::System::Xml::Schema::XmlSchemaType* baseType, ::System::Xml::Schema::XmlSchemaDerivationMethod except)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaDerivationMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROM_OFFSET))(derivedType, baseType, except);
		}

		static ::System::Boolean IsDerivedFromDatatype(::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, ::System::Xml::Schema::XmlSchemaDatatype* baseDataType, ::System::Xml::Schema::XmlSchemaDerivationMethod except)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDerivationMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_ISDERIVEDFROMDATATYPE_OFFSET))(derivedDataType, baseDataType, except);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMATYPE_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}
	};
}
