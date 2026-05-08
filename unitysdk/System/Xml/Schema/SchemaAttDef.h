#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaAttDef_Reserve.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }

#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET UNITYSDK_OFFSET(0x1A761C20)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1A761E30)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x1A761BB0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A761B40)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A761C00)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1A761B70)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET UNITYSDK_OFFSET(0x1A761B10)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A761B80)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1A761AF0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A761B00)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A761AD0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A761AB0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x1A761B90)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x1A761BD0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1A761BE0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A761BF0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A761F20)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7619D0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A761A40)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A761960)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaAttDef_TypeDefinitionIndex = 2077;

	class SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase
	{
	public:
		static ::System::Xml::Schema::SchemaAttDef** StaticGet_Empty()
		{
			return (::System::Xml::Schema::SchemaAttDef**)Il2CppClass::FromTypeDefinitionIndex(SchemaAttDef_TypeDefinitionIndex)->GetStaticField(0x18A0);
		}
		::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute; // 0x60
		::System::String* defExpanded; // 0x68
		::System::Boolean defaultValueChecked; // 0x70
		::System::Xml::Schema::SchemaAttDef_Reserve reserved; // 0x74
		::System::Int32 linePos; // 0x78
		::System::Int32 valueLinePos; // 0x7C
		::System::Int32 valueLineNum; // 0x80
		::System::Int32 lineNum; // 0x84

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_OFFSET))(this, name, prefix);
		}

		::System::Void _ctor_1(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_2_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CCTOR_OFFSET))();
		}

		::System::String* System_Xml_IDtdAttributeInfo_get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdAttributeInfo_get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdAttributeInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdAttributeInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsNonCDataType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsXmlAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET))(this);
		}

		::System::Object* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET))(this);
		}

		::System::String* get_DefaultValueExpanded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Void set_TokenizedType(::System::Xml::XmlTokenizedType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET))(this, value);
		}

		::System::Void CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET))(this, validationEventHandling);
		}

		::System::Xml::Schema::SchemaAttDef* Clone()
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CLONE_OFFSET))(this);
		}
	};
}
