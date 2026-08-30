#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaAttDef_Reserve.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET UNITYSDK_OFFSET(0x1B0586B0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x1B0583E0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B058450)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058430)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1B058690)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B058310)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B058490)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058470)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x1B0584B0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B058460)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058440)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1B0586A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B0584C0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B0584A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058480)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1B0583A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET UNITYSDK_OFFSET(0x1B058280)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B0583B0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B058260)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058270)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1B058240)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B058200)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x1B0583C0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x1B058400)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B058410)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B058420)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B058BE0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B058120)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B058020)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaAttDef_TypeDefinitionIndex = 2169;

	class SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase
	{
	public:
		static ::System::Xml::Schema::SchemaAttDef** StaticGet_Empty()
		{
			return (::System::Xml::Schema::SchemaAttDef**)Il2CppClass::FromTypeDefinitionIndex(SchemaAttDef_TypeDefinitionIndex)->GetStaticField(0x1D440);
		}
		::System::String* defExpanded; // 0x60
		::System::Xml::Schema::SchemaAttDef_Reserve reserved; // 0x68
		::System::Int32 valueLineNum; // 0x6C
		::System::Int32 linePos; // 0x70
		::System::Int32 lineNum; // 0x74
		::System::Int32 valueLinePos; // 0x78

		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF__CTOR_1_OFFSET))(this);
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

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Void set_LinePosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void set_LineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_ValueLinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET))(this);
		}

		::System::Void set_ValueLinePosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_ValueLineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET))(this);
		}

		::System::Void set_ValueLineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET))(this, a1);
		}

		::System::String* get_DefaultValueExpanded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET))(this);
		}

		::System::Void set_DefaultValueExpanded(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET))(this, a1);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Void set_TokenizedType(::System::Xml::XmlTokenizedType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SchemaAttDef_Reserve get_Reserved()
		{
			return ((::System::Xml::Schema::SchemaAttDef_Reserve(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET))(this);
		}

		::System::Void set_Reserved(::System::Xml::Schema::SchemaAttDef_Reserve a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef_Reserve))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET))(this, a1);
		}

		::System::Void CheckXmlSpace(::System::Xml::IValidationEventHandling* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET))(this, a1);
		}
	};
}
