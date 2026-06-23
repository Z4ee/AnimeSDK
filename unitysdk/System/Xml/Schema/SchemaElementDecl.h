#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class IDtdAttributeInfo; }
namespace System::Xml { class IDtdDefaultAttributeInfo; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class CompiledIdentityConstraint; }
namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaElement; }

#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_ADDATTDEF_OFFSET UNITYSDK_OFFSET(0x1DC42330)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CHECKATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DC42540)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC42230)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CREATEANYTYPEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1DC41F00)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GETATTDEF_OFFSET UNITYSDK_OFFSET(0x1DC42480)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_DEFAULTATTDEFS_OFFSET UNITYSDK_OFFSET(0x1DC42530)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DC42320)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DC42220)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DC42100)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DC42110)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM_XML_IDTDATTRIBUTELISTINFO_LOOKUPDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DC42210)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC428C0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC41BB0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DC41D70)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC41A30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaElementDecl_TypeDefinitionIndex = 2084;

	class SchemaElementDecl : public ::System::Xml::Schema::SchemaDeclBase
	{
	public:
		static ::System::Xml::Schema::SchemaElementDecl** StaticGet_Empty()
		{
			return (::System::Xml::Schema::SchemaElementDecl**)Il2CppClass::FromTypeDefinitionIndex(SchemaElementDecl_TypeDefinitionIndex)->GetStaticField(0x18C0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attdefs; // 0x60
		::Il2CppArray<::System::Xml::Schema::CompiledIdentityConstraint*>* constraints; // 0x68
		::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* defaultAttdefs; // 0x70
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* prohibitedAttributes; // 0x80
		::System::Xml::Schema::XmlSchemaElement* schemaElement; // 0x88
		::System::Xml::Schema::ContentValidator* contentValidator; // 0x90
		::System::Xml::Schema::XmlSchemaDerivationMethod block; // 0x98
		::System::Boolean hasNonCDataAttribute; // 0x9C
		::System::Boolean isIdDeclared; // 0x9D
		::System::Boolean hasRequiredAttribute; // 0x9E
		::System::Boolean isNotationDeclared; // 0x9F
		::System::Boolean isNillable; // 0xA0
		::System::Boolean isAbstract; // 0xA1

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

		::System::Boolean get_HasNonCDataAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaElementDecl* Clone()
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CLONE_OFFSET))(this);
		}

		::System::Boolean get_HasDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASDEFAULTATTRIBUTE_OFFSET))(this);
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

		::System::Void CheckAttributes(::System::Collections::Hashtable* presence, ::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CHECKATTRIBUTES_OFFSET))(this, presence, standalone);
		}
	};
}
