#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"

namespace System::Xml { class XmlDocument; }

#define SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x16932B50)
#define SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x169329B0)
#define SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16921A60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLinkedNode_TypeDefinitionIndex = 1900;

	class XmlLinkedNode : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* next; // 0x18

		::System::Void _ctor(::System::Xml::XmlDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET))(this, a1);
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
