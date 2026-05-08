#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/NamespaceList.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_ALLOWS_OFFSET UNITYSDK_OFFSET(0x1B972A10)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B972A00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceListV1Compat_TypeDefinitionIndex = 2072;

	class NamespaceListV1Compat : public ::System::Xml::Schema::NamespaceList
	{
	public:
		::System::Void _ctor(::System::String* namespaces, ::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT__CTOR_OFFSET))(this, namespaces, targetNamespace);
		}

		::System::Boolean Allows(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTV1COMPAT_ALLOWS_OFFSET))(this, ns);
		}
	};
}
