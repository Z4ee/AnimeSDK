#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class IDtdAttributeInfo; }
namespace System::Xml { class IDtdDefaultAttributeInfo; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_ADDATTDEF_OFFSET UNITYSDK_OFFSET(0x185939C0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CREATEANYTYPEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x18593730)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GETATTDEF_OFFSET UNITYSDK_OFFSET(0x18593B00)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ATTDEFS_OFFSET UNITYSDK_OFFSET(0x18593BC0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x18593990)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_DEFAULTATTDEFS_OFFSET UNITYSDK_OFFSET(0x18593BB0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18593950)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISIDDECLARED_OFFSET UNITYSDK_OFFSET(0x18593930)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNOTATIONDECLARED_OFFSET UNITYSDK_OFFSET(0x18593970)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185939B0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x185939A0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_HASNONCDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18593960)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISIDDECLARED_OFFSET UNITYSDK_OFFSET(0x18593940)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNOTATIONDECLARED_OFFSET UNITYSDK_OFFSET(0x18593980)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18593810)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18593820)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18593920)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18593BD0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185933F0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185935A0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_OFFSET UNITYSDK_OFFSET(0x18593270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaElementDecl_TypeDefinitionIndex = 2161;

	class SchemaElementDecl : public ::System::Xml::Schema::SchemaDeclBase
	{
	public:
		static ::System::Xml::Schema::SchemaElementDecl** StaticGet_Empty()
		{
			return (::System::Xml::Schema::SchemaElementDecl**)Il2CppClass::FromTypeDefinitionIndex(SchemaElementDecl_TypeDefinitionIndex)->GetStaticField(0x80E0);
		}
		::System::Xml::Schema::ContentValidator* contentValidator; // 0x60
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* prohibitedAttributes; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attdefs; // 0x78
		::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* defaultAttdefs; // 0x80
		::System::Boolean hasRequiredAttribute; // 0x88
		::System::Boolean hasNonCDataAttribute; // 0x89
		::System::Boolean isIdDeclared; // 0x8A
		::System::Boolean isNotationDeclared; // 0x8B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaDatatype* dtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_1_OFFSET))(this, dtype);
		}

		::System::Void _ctor_2(::System::Xml::XmlQualifiedName* name, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_2_OFFSET))(this, name, prefix);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CCTOR_OFFSET))();
		}

		static ::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl()
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CREATEANYTYPEELEMENTDECL_OFFSET))();
		}

		::System::Boolean System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_GET_HASNONCDATAATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::IDtdAttributeInfo* System_Xml_IDtdAttributeListInfo_LookupAttribute(::System::String* prefix, ::System::String* localName)
		{
			return ((::System::Xml::IDtdAttributeInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPATTRIBUTE_OFFSET))(this, prefix, localName);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPDEFAULTATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_IsIdDeclared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISIDDECLARED_OFFSET))(this);
		}

		::System::Void set_IsIdDeclared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISIDDECLARED_OFFSET))(this, value);
		}

		::System::Boolean get_HasNonCDataAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_HasNonCDataAttribute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_HASNONCDATAATTRIBUTE_OFFSET))(this, value);
		}

		::System::Boolean get_IsNotationDeclared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNOTATIONDECLARED_OFFSET))(this);
		}

		::System::Void set_IsNotationDeclared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNOTATIONDECLARED_OFFSET))(this, value);
		}

		::System::Xml::Schema::ContentValidator* get_ContentValidator()
		{
			return ((::System::Xml::Schema::ContentValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONTENTVALIDATOR_OFFSET))(this);
		}

		::System::Void set_ContentValidator(::System::Xml::Schema::ContentValidator* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ContentValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONTENTVALIDATOR_OFFSET))(this, value);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ANYATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void AddAttDef(::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_ADDATTDEF_OFFSET))(this, attdef);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttDef(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GETATTDEF_OFFSET))(this, qname);
		}

		::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* get_DefaultAttDefs()
		{
			return ((::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_DEFAULTATTDEFS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* get_AttDefs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ATTDEFS_OFFSET))(this);
		}
	};
}
