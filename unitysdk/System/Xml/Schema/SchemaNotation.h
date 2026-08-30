#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E7FFEF0)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x1E7FFF20)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x1E7FFF00)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x1E7FFF30)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x1E7FFF10)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FFEE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNotation_TypeDefinitionIndex = 2176;

	class SchemaNotation : public ::System::Object
	{
	public:
		::System::String* systemLiteral; // 0x10
		::System::Xml::XmlQualifiedName* name; // 0x18
		::System::String* pubid; // 0x20

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
