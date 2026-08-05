#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaRedefine; }

#define SYSTEM_XML_SCHEMA_REDEFINEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61BFB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RedefineEntry_TypeDefinitionIndex = 2074;

	class RedefineEntry : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaRedefine* redefine; // 0x10
		::System::Xml::Schema::XmlSchema* schemaToUpdate; // 0x18

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaRedefine*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_REDEFINEENTRY__CTOR_OFFSET))(this, external, schema);
		}
	};
}
