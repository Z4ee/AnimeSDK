#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AE424E0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE42600)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x1AE42520)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE425E0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET UNITYSDK_OFFSET(0x1AE42660)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE42590)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET UNITYSDK_OFFSET(0x1AE42620)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE426B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET UNITYSDK_OFFSET(0x1AE42680)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x1AE425C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AE42640)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET UNITYSDK_OFFSET(0x1AE425A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AE426A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE42610)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x1AE426D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE425F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET UNITYSDK_OFFSET(0x1AE42670)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET UNITYSDK_OFFSET(0x1AE42630)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE426C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET UNITYSDK_OFFSET(0x1AE42690)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x1AE425D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AE42650)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET UNITYSDK_OFFSET(0x1AE425B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x1AE424C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x1AE42500)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE42450)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE42440)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x1AE424B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x1AE42460)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1AE42570)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AE42580)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE42420)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x1AE42550)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1AE42540)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AE42560)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE423A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaEntity_TypeDefinitionIndex = 2163;

	class SchemaEntity : public ::System::Object
	{
	public:
		::System::String* baseURI; // 0x10
		::System::Xml::XmlQualifiedName* qname; // 0x18
		::System::String* declaredURI; // 0x20
		::System::String* url; // 0x28
		::System::String* text; // 0x30
		::System::Xml::XmlQualifiedName* ndata; // 0x38
		::System::String* pubid; // 0x40
		::System::Boolean isParameter; // 0x48
		::System::Boolean isDeclaredInExternal; // 0x49
		::System::Boolean parsingInProgress; // 0x4A
		::System::Boolean isExternal; // 0x4B
		::System::Int32 lineNumber; // 0x4C
		::System::Int32 linePosition; // 0x50

		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY__CTOR_OFFSET))(this, a1, a2);
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

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET))(this, a1);
		}

		::System::String* get_Pubid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET))(this);
		}

		::System::Void set_Pubid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET))(this);
		}

		::System::Void set_IsExternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean get_DeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Void set_DeclaredInExternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* get_NData()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET))(this);
		}

		::System::Void set_NData(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET))(this);
		}

		::System::Void set_Line(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET))(this, a1);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET))(this, a1);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET))(this);
		}

		::System::Void set_BaseURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET))(this, a1);
		}

		::System::Boolean get_ParsingInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_ParsingInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET))(this, a1);
		}

		::System::String* get_DeclaredURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET))(this);
		}

		::System::Void set_DeclaredURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET))(this, a1);
		}
	};
}
