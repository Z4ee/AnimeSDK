#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaType.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class String; }
namespace System::Xml { class PositionInfo; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlEntityReference; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaBuilder; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }

#define SYSTEM_XML_SCHEMA_PARSER_CHECKSCHEMAROOT_OFFSET UNITYSDK_OFFSET(0x1ECA7C20)
#define SYSTEM_XML_SCHEMA_PARSER_CREATEXMLNSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ECA8610)
#define SYSTEM_XML_SCHEMA_PARSER_LOADATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1ECA8430)
#define SYSTEM_XML_SCHEMA_PARSER_LOADELEMENTNODE_OFFSET UNITYSDK_OFFSET(0x1ECA7F70)
#define SYSTEM_XML_SCHEMA_PARSER_LOADENTITYREFERENCEINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ECA8730)
#define SYSTEM_XML_SCHEMA_PARSER_PARSEREADERNODE_OFFSET UNITYSDK_OFFSET(0x1ECA73A0)
#define SYSTEM_XML_SCHEMA_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1ECA6E90)
#define SYSTEM_XML_SCHEMA_PARSER_PROCESSAPPINFODOCMARKUP_OFFSET UNITYSDK_OFFSET(0x1ECA7CD0)
#define SYSTEM_XML_SCHEMA_PARSER_STARTPARSING_OFFSET UNITYSDK_OFFSET(0x1ECA6EF0)
#define SYSTEM_XML_SCHEMA_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA6DB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 2072;

	class Parser : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaInfo* xdrSchema; // 0x10
		::System::Xml::XmlCharType xmlCharType; // 0x18
		::System::Xml::XmlNameTable* nameTable; // 0x20
		::System::Xml::Schema::XmlSchema* schema; // 0x28
		::System::String* xmlns; // 0x30
		::System::Xml::XmlDocument* dummyDocument; // 0x38
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x40
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x48
		::System::Xml::XmlReader* reader; // 0x50
		::System::Xml::Schema::SchemaBuilder* builder; // 0x58
		::System::Xml::XmlNamespaceManager* namespaceManager; // 0x60
		::System::Xml::XmlResolver* xmlResolver; // 0x68
		::System::Xml::XmlNode* parentNode; // 0x70
		::System::Xml::XmlNamespaceManager* annotationNSManager; // 0x78
		::System::Xml::PositionInfo* positionInfo; // 0x80
		::System::Int32 markupDepth; // 0x88
		::System::Xml::Schema::SchemaType schemaType; // 0x8C
		::System::Boolean isProcessNamespaces; // 0x90
		::System::Boolean processMarkup; // 0x91
		::System::Int32 schemaXmlDepth; // 0x94

		::System::Void _ctor(::System::Xml::Schema::SchemaType schemaType, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaType, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER__CTOR_OFFSET))(this, schemaType, nameTable, schemaNames, eventHandler);
		}

		::System::Xml::Schema::SchemaType Parse(::System::Xml::XmlReader* reader, ::System::String* targetNamespace)
		{
			return ((::System::Xml::Schema::SchemaType(*)(::PVOID, ::System::Xml::XmlReader*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PARSE_OFFSET))(this, reader, targetNamespace);
		}

		::System::Void StartParsing(::System::Xml::XmlReader* reader, ::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_STARTPARSING_OFFSET))(this, reader, targetNamespace);
		}

		::System::Boolean CheckSchemaRoot(::System::Xml::Schema::SchemaType rootType, ::System::String*& code)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::SchemaType, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_CHECKSCHEMAROOT_OFFSET))(this, rootType, code);
		}

		::System::Boolean ParseReaderNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PARSEREADERNODE_OFFSET))(this);
		}

		::System::Void ProcessAppInfoDocMarkup(::System::Boolean root)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PROCESSAPPINFODOCMARKUP_OFFSET))(this, root);
		}

		::System::Xml::XmlElement* LoadElementNode(::System::Boolean root)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADELEMENTNODE_OFFSET))(this, root);
		}

		::System::Xml::XmlAttribute* CreateXmlNsAttribute(::System::String* prefix, ::System::String* value)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_CREATEXMLNSATTRIBUTE_OFFSET))(this, prefix, value);
		}

		::System::Xml::XmlAttribute* LoadAttributeNode()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADATTRIBUTENODE_OFFSET))(this);
		}

		::System::Xml::XmlEntityReference* LoadEntityReferenceInAttribute()
		{
			return ((::System::Xml::XmlEntityReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADENTITYREFERENCEINATTRIBUTE_OFFSET))(this);
		}
	};
}
