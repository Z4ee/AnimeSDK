#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNodeRef.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET UNITYSDK_OFFSET(0x1B9768E0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1B9768F0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B976820)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathDocument_TypeDefinitionIndex = 1844;

	class XPathDocument : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp; // 0x18
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageXmlNmsp; // 0x20
		::System::Int32 idxXmlNmsp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetXmlNamespaceNode(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageXmlNmsp)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET))(this, pageXmlNmsp);
		}

		::System::Int32 LookupNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageElem, ::System::Int32 idxElem, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageNmsp)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET))(this, pageElem, idxElem, pageNmsp);
		}
	};
}
