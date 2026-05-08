#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamespaceManager.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDERNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B975290)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDERNAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B975270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_BuilderNamespaceManager_TypeDefinitionIndex = 2227;

	class XsdBuilder_BuilderNamespaceManager : public ::System::Xml::XmlNamespaceManager
	{
	public:
		::System::Xml::XmlNamespaceManager* nsMgr; // 0x48
		::System::Xml::XmlReader* reader; // 0x50

		::System::Void _ctor(::System::Xml::XmlNamespaceManager* nsMgr, ::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDERNAMESPACEMANAGER__CTOR_OFFSET))(this, nsMgr, reader);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDERNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}
	};
}
