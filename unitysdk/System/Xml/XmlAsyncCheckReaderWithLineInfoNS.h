#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlAsyncCheckReaderWithLineInfo.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1F10DAA0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F10DB80)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1F10DC60)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10CDA0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReaderWithLineInfoNS_TypeDefinitionIndex = 1706;

	class XmlAsyncCheckReaderWithLineInfoNS : public ::System::Xml::XmlAsyncCheckReaderWithLineInfo
	{
	public:
		::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver; // 0x28

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS__CTOR_OFFSET))(this, reader);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFONS_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}
	};
}
