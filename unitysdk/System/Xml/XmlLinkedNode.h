#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"

namespace System::Xml { class XmlDocument; }

#define SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1D482AB0)
#define SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x1D482A50)
#define SYSTEM_XML_XMLLINKEDNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4822C0)
#define SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D482A40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLinkedNode_TypeDefinitionIndex = 1770;

	class XmlLinkedNode : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* next; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE__CTOR_1_OFFSET))(this, doc);
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
