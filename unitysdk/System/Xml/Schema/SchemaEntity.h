#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1C16D820)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x1C16D860)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_ISPREDEFINEDENTITY_OFFSET UNITYSDK_OFFSET(0x1C16D8D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x1C16DA20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C16DA10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET UNITYSDK_OFFSET(0x1C16DA00)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x1C16D800)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x1C16D840)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1C16D790)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1C16D780)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x1C16D7F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x1C16D7A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1C16D8B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C16D8C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C16D760)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x1C16D890)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1C16D880)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C16D8A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16D6E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaEntity_TypeDefinitionIndex = 2085;

	class SchemaEntity : public ::System::Object
	{
	public:
		::System::Xml::XmlQualifiedName* qname; // 0x10
		::System::String* text; // 0x18
		::System::Xml::XmlQualifiedName* ndata; // 0x20
		::System::String* pubid; // 0x28
		::System::String* url; // 0x30
		::System::String* baseURI; // 0x38
		::System::String* declaredURI; // 0x40
		::System::Int32 linePosition; // 0x48
		::System::Int32 lineNumber; // 0x4C
		::System::Boolean isParameter; // 0x50
		::System::Boolean parsingInProgress; // 0x51
		::System::Boolean isDeclaredInExternal; // 0x52
		::System::Boolean isExternal; // 0x53

		::System::Void _ctor(::System::Xml::XmlQualifiedName* qname, ::System::Boolean isParameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY__CTOR_OFFSET))(this, qname, isParameter);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsUnparsedEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsParameterEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_BaseUriString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_DeclaredUriString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_PublicId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdEntityInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdEntityInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		static ::System::Boolean IsPredefinedEntity(::System::String* n)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_ISPREDEFINEDENTITY_OFFSET))(n);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET))(this, value);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET))(this, value);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET))(this);
		}

		::System::String* get_DeclaredURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET))(this);
		}

		::System::Void set_DeclaredURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET))(this, value);
		}
	};
}
