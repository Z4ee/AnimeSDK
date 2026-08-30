#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
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

#define SYSTEM_XML_SCHEMA_SCHEMAINFO_FINISH_OFFSET UNITYSDK_OFFSET(0x1B05A030)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLS_OFFSET UNITYSDK_OFFSET(0x1B059DE0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET UNITYSDK_OFFSET(0x1B059E00)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET UNITYSDK_OFFSET(0x1B059F80)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET UNITYSDK_OFFSET(0x1B059EB0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1B059F60)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_UNDECLAREDELEMENTDECLS_OFFSET UNITYSDK_OFFSET(0x1B059DF0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_DOCTYPENAME_OFFSET UNITYSDK_OFFSET(0x1B059DC0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x1B059DD0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1B059F70)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B05A2D0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B05A2E0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_INTERNALDTDSUBSET_OFFSET UNITYSDK_OFFSET(0x1B05A560)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B05A550)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x1B05A2F0)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET UNITYSDK_OFFSET(0x1B05A450)
#define SYSTEM_XML_SCHEMA_SCHEMAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B059B20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaInfo_TypeDefinitionIndex = 2175;

	class SchemaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* parameterEntities; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* targetNamespaces; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>* notations; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attributeDecls; // 0x28
		::System::Xml::XmlQualifiedName* docTypeName; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* undeclaredElementDecls; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* generalEntities; // 0x40
		::System::String* internalDtdSubset; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDeclsByType; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDecls; // 0x58
		::System::Boolean hasNonCDataAttributes; // 0x60
		::System::Boolean hasDefaultAttributes; // 0x61
		::System::Xml::Schema::SchemaType schemaType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO__CTOR_OFFSET))(this);
		}

		::System::Void set_DocTypeName(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_DOCTYPENAME_OFFSET))(this, a1);
		}

		::System::Void set_InternalDtdSubset(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_INTERNALDTDSUBSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_ElementDecls()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_ELEMENTDECLS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_UndeclaredElementDecls()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_UNDECLAREDELEMENTDECLS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_GeneralEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_GENERALENTITIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_ParameterEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_PARAMETERENTITIES_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaType get_SchemaType()
		{
			return ((::System::Xml::Schema::SchemaType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::SchemaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SET_SCHEMATYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>* get_Notations()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::Schema::SchemaNotation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_GET_NOTATIONS_OFFSET))(this);
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

		::System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::IDtdAttributeListInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPATTRIBUTELIST_OFFSET))(this, a1, a2);
		}

		::System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(::System::String* a1)
		{
			return ((::System::Xml::IDtdEntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAINFO_SYSTEM_XML_IDTDINFO_LOOKUPENTITY_OFFSET))(this, a1);
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
