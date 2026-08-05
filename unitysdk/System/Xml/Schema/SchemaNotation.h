#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61BFC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNotation_TypeDefinitionIndex = 2091;

	class SchemaNotation : public ::System::Object
	{
	public:
		::System::String* pubid; // 0x10
		::System::String* systemLiteral; // 0x18
		::System::Xml::XmlQualifiedName* name; // 0x20

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION__CTOR_OFFSET))(this, name);
		}
	};
}
