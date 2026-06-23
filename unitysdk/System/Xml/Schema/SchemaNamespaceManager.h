#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamespaceManager.h"

namespace System { class String; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CA520F0)
#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1CA52320)
#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA520E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNamespaceManager_TypeDefinitionIndex = 2090;

	class SchemaNamespaceManager : public ::System::Xml::XmlNamespaceManager
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* node; // 0x48

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaObject* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER__CTOR_OFFSET))(this, node);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(this, ns);
		}
	};
}
