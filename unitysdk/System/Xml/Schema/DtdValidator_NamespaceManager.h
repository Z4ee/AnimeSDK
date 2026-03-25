#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamespaceManager.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_NAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1858CB40)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_NAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1858CB30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DtdValidator_NamespaceManager_TypeDefinitionIndex = 2142;

	class DtdValidator_NamespaceManager : public ::System::Xml::XmlNamespaceManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_NAMESPACEMANAGER__CTOR_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_NAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}
	};
}
