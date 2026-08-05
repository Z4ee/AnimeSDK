#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class XmlSchema; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B480)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollectionNode_TypeDefinitionIndex = 2125;

	class XmlSchemaCollectionNode : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x10
		::System::Xml::Schema::XmlSchema* schema; // 0x18
		::System::String* namespaceUri; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE__CTOR_OFFSET))(this);
		}
	};
}
