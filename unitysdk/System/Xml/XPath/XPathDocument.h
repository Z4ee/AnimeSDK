#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNodeRef.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET UNITYSDK_OFFSET(0x17C733D0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x17C733C0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x17C733B0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x17C733E0)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathDocument_TypeDefinitionIndex = 1973;

	class XPathDocument : public ::System::Object
	{
	public:
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageXmlNmsp; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp; // 0x20
		::System::Int32 idxXmlNmsp; // 0x28
		::System::Boolean hasLineInfo; // 0x2C

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_NAMETABLE_OFFSET))(this);
		}

		::System::Boolean get_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 GetXmlNamespaceNode(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET))(this, a1);
		}

		::System::Int32 LookupNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET))(this, a1, a2, a3);
		}
	};
}
