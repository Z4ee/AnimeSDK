#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185949A0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x185949D0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x185949B0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x185949E0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x185949C0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18594990)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNotation_TypeDefinitionIndex = 2164;

	class SchemaNotation : public ::System::Object
	{
	public:
		::System::Xml::XmlQualifiedName* name; // 0x10
		::System::String* systemLiteral; // 0x18
		::System::String* pubid; // 0x20

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET))(this, name);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_SystemLiteral()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET))(this);
		}

		::System::Void set_SystemLiteral(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET))(this, value);
		}

		::System::String* get_Pubid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET))(this);
		}

		::System::Void set_Pubid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET))(this, value);
		}
	};
}
