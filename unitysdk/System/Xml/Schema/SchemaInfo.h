#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/AttributeMatchState.h"
#include "unitysdk/System/Xml/Schema/SchemaType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class IDtdAttributeListInfo; }
namespace System::Xml { class IDtdEntityInfo; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class SchemaEntity; }
namespace System::Xml::Schema { class SchemaNotation; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_SCHEMAINFO_ADD_OFFSET UNITYSDK_OFFSET(0x1A45D090)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A45C9C0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_FINISH_OFFSET UNITYSDK_OFFSET(0x1A45DB30)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXDR_OFFSET UNITYSDK_OFFSET(0x1A45CA40)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_1_OFFSET UNITYSDK_OFFSET(0x1A45CF80)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET UNITYSDK_OFFSET(0x1A45CC60)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1A45C720)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1A45C880)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GETTYPEDECL_OFFSET UNITYSDK_OFFSET(0x1A45C7D0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET UNITYSDK_OFFSET(0x1A45C510)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET UNITYSDK_OFFSET(0x1A45C670)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET UNITYSDK_OFFSET(0x1A45C5C0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A45C940)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A45DD30)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A45DD40)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x1A45DFE0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A45DFD0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x1A45DD50)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET UNITYSDK_OFFSET(0x1A45DED0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45C270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaInfo_TypeDefinitionIndex = 2088;

	class SchemaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* parameterEntities; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDeclsByType; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* targetNamespaces; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* undeclaredElementDecls; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDecls; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>* notations; // 0x38
		::System::Xml::XmlQualifiedName* docTypeName; // 0x40
		::System::String* internalDtdSubset; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attributeDecls; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* generalEntities; // 0x58
		::System::Xml::Schema::SchemaType schemaType; // 0x60
		::System::Int32 errorCount; // 0x64
		::System::Boolean hasNonCDataAttributes; // 0x68
		::System::Boolean hasDefaultAttributes; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_GeneralEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_ParameterEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>* get_Notations()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaElementDecl* GetElementDecl(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENTDECL_OFFSET))(this, qname);
		}

		::System::Xml::Schema::SchemaElementDecl* GetTypeDecl(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETTYPEDECL_OFFSET))(this, qname);
		}

		::System::Xml::Schema::XmlSchemaElement* GetElement(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETELEMENT_OFFSET))(this, qname);
		}

		::System::Boolean HasSchema(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_HASSCHEMA_OFFSET))(this, ns);
		}

		::System::Boolean Contains(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_CONTAINS_OFFSET))(this, ns);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXdr(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXDR_OFFSET))(this, ed, qname);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* partialValidationType, ::System::Xml::Schema::AttributeMatchState& attributeMatchState)
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::AttributeMatchState&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_OFFSET))(this, ed, qname, partialValidationType, attributeMatchState);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttributeXsd_1(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname, ::System::Boolean& skip)
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GETATTRIBUTEXSD_1_OFFSET))(this, ed, qname, skip);
		}

		::System::Void Add(::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::Schema::ValidationEventHandler* eventhandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_ADD_OFFSET))(this, sinfo, eventhandler);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_FINISH_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdInfo_get_HasDefaultAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASDEFAULTATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdInfo_get_HasNonCDataAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASNONCDATAATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(::System::String* prefix, ::System::String* localName)
		{
			return ((::System::Xml::IDtdAttributeListInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET))(this, prefix, localName);
		}

		::System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(::System::String* name)
		{
			return ((::System::Xml::IDtdEntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET))(this, name);
		}

		::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdInfo_get_InternalDtdSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_INTERNALDTDSUBSET_OFFSET))(this);
		}
	};
}
