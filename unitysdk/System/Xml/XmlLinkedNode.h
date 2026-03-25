#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"

namespace System::Xml { class XmlDocument; }

#define SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x18619CF0)
#define SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x18619C90)
#define SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1860C8C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLinkedNode_TypeDefinitionIndex = 1895;

	class XmlLinkedNode : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* next; // 0x18

		::System::Void _ctor(::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET))(this, doc);
		}

		::System::Xml::XmlNode* get_PreviousSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET))(this);
		}
	};
}
