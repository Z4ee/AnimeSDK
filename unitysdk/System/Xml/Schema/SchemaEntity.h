#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x18593D60)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593E80)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x18593DA0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593E60)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET UNITYSDK_OFFSET(0x18593EE0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18593E10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET UNITYSDK_OFFSET(0x18593EA0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x18593F30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET UNITYSDK_OFFSET(0x18593F00)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x18593E40)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18593EC0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET UNITYSDK_OFFSET(0x18593E20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x18593F20)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593E90)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x18593F50)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593E70)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET UNITYSDK_OFFSET(0x18593EF0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET UNITYSDK_OFFSET(0x18593EB0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x18593F40)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET UNITYSDK_OFFSET(0x18593F10)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x18593E50)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18593ED0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET UNITYSDK_OFFSET(0x18593E30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x18593D40)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x18593D80)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593CD0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593CC0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x18593D30)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x18593CE0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x18593DF0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x18593E00)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18593CA0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x18593DD0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x18593DC0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18593DE0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18593C20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaEntity_TypeDefinitionIndex = 2162;

	class SchemaEntity : public ::System::Object
	{
	public:
		::System::String* text; // 0x10
		::System::String* pubid; // 0x18
		::System::String* baseURI; // 0x20
		::System::String* declaredURI; // 0x28
		::System::Xml::XmlQualifiedName* qname; // 0x30
		::System::String* url; // 0x38
		::System::Xml::XmlQualifiedName* ndata; // 0x40
		::System::Int32 lineNumber; // 0x48
		::System::Int32 linePosition; // 0x4C
		::System::Boolean isExternal; // 0x50
		::System::Boolean parsingInProgress; // 0x51
		::System::Boolean isDeclaredInExternal; // 0x52
		::System::Boolean isParameter; // 0x53

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

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET))(this, value);
		}

		::System::String* get_Pubid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET))(this);
		}

		::System::Void set_Pubid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET))(this, value);
		}

		::System::Boolean get_IsExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET))(this);
		}

		::System::Void set_IsExternal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET))(this, value);
		}

		::System::Boolean get_DeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Void set_DeclaredInExternal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET))(this, value);
		}

		::System::Xml::XmlQualifiedName* get_NData()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET))(this);
		}

		::System::Void set_NData(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET))(this, value);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET))(this, value);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET))(this);
		}

		::System::Void set_Line(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET))(this, value);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET))(this, value);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET))(this);
		}

		::System::Void set_BaseURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET))(this, value);
		}

		::System::Boolean get_ParsingInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_ParsingInProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET))(this, value);
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
