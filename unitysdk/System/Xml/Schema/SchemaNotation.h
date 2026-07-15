#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19656AC0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x19656AF0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x19656AD0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x19656B00)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x19656AE0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19656AB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNotation_TypeDefinitionIndex = 2169;

	class SchemaNotation : public ::System::Object
	{
	public:
		::System::String* systemLiteral; // 0x10
		::System::String* pubid; // 0x18
		::System::Xml::XmlQualifiedName* name; // 0x20

		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_SystemLiteral()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET))(this);
		}

		::System::Void set_SystemLiteral(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET))(this, a1);
		}

		::System::String* get_Pubid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET))(this);
		}

		::System::Void set_Pubid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET))(this, a1);
		}
	};
}
