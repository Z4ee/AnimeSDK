#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_1_OFFSET UNITYSDK_OFFSET(0x198919C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x198919B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x19872F10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x19881040)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891920)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x19891940)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x19891910)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x19891710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISNILLABLE_OFFSET UNITYSDK_OFFSET(0x19891720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891930)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x19891730)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x19891870)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x198917D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19891C60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaElement_TypeDefinitionIndex = 2140;

	class XmlSchemaElement : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Xml::XmlQualifiedName* substitutionGroup; // 0x78
		::System::Xml::Schema::XmlSchemaType* type; // 0x80
		::System::String* defaultValue; // 0x88
		::System::Xml::Schema::XmlSchemaObjectCollection* constraints; // 0x90
		::System::Xml::XmlQualifiedName* qualifiedName; // 0x98
		::System::Xml::XmlQualifiedName* refName; // 0xA0
		::System::String* name; // 0xA8
		::System::Xml::XmlQualifiedName* typeName; // 0xB0
		::System::String* fixedValue; // 0xB8
		::System::Xml::Schema::XmlSchemaType* elementType; // 0xC0
		::System::Xml::Schema::SchemaElementDecl* elementDecl; // 0xC8
		::System::Boolean hasAbstractAttribute; // 0xD0
		::System::Boolean isAbstract; // 0xD1
		::System::Boolean hasNillableAttribute; // 0xD2
		::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved; // 0xD4
		::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved; // 0xD8
		::System::Boolean isNillable; // 0xDC
		::System::Boolean isLocalTypeDerivationChecked; // 0xDD
		::System::Xml::Schema::XmlSchemaForm form; // 0xE0
		::System::Xml::Schema::XmlSchemaDerivationMethod final; // 0xE4
		::System::Xml::Schema::XmlSchemaDerivationMethod block; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void set_IsAbstract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISABSTRACT_OFFSET))(this, value);
		}

		::System::Void set_IsNillable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISNILLABLE_OFFSET))(this, value);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_REFNAME_OFFSET))(this, value);
		}

		::System::Void set_SubstitutionGroup(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SUBSTITUTIONGROUP_OFFSET))(this, value);
		}

		::System::Void set_SchemaTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPENAME_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Constraints()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETQUALIFIEDNAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasConstraints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASCONSTRAINTS_OFFSET))(this);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}

		::System::String* get_NameString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMESTRING_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone_1(::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_1_OFFSET))(this, parentSchema);
		}
	};
}
