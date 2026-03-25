#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlWellFormedWriter; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x186542D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x186542F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1864BB80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_NamespaceResolverProxy_TypeDefinitionIndex = 1862;

	class XmlWellFormedWriter_NamespaceResolverProxy : public ::System::Object
	{
	public:
		::System::Xml::XmlWellFormedWriter* wfWriter; // 0x10

		::System::Void _ctor(::System::Xml::XmlWellFormedWriter* wfWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY__CTOR_OFFSET))(this, wfWriter);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACERESOLVERPROXY_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}
	};
}
