#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlName; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1AEBBE60)
#define SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1AEBB2B0)
#define SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AEBBA70)
#define SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AEBC180)
#define SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1AEBCA10)
#define SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1AEBBE50)
#define SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AEBB9E0)
#define SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1AEBC140)
#define SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1AEBB9A0)
#define SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1AEBB9C0)
#define SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AEBBC60)
#define SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1AEBD0C0)
#define SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AEBBE30)
#define SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AEBB960)
#define SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1AEBBE40)
#define SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1AEBB980)
#define SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x1AEBB290)
#define SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1AEBC160)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AEBC780)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1AEBC0E0)
#define SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1AEBC7C0)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1AEBC1F0)
#define SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1AEBD100)
#define SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1AEBCB20)
#define SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1AEBC830)
#define SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AEBB9F0)
#define SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1AEBC150)
#define SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x1AEBB2A0)
#define SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1AEBC720)
#define SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET UNITYSDK_OFFSET(0x1AEBC3C0)
#define SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEBC600)
#define SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AEBC2D0)
#define SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEBB240)
#define SYSTEM_XML_XMLELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB6E30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElement_TypeDefinitionIndex = 1891;

	class XmlElement : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::XmlName* name; // 0x20
		::System::Xml::XmlLinkedNode* lastChild; // 0x28
		::System::Xml::XmlAttributeCollection* attributes; // 0x30

		::System::Void _ctor(::System::Xml::XmlName* a1, ::System::Boolean a2, ::System::Xml::XmlDocument* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*, ::System::Boolean, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlDocument* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::XmlName* get_XmlName()
		{
			return ((::System::Xml::XmlName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET))(this);
		}

		::System::Void set_XmlName(::System::Xml::XmlName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET))(this, a1);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET))(this, a1);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET))(this, a1);
		}

		::System::Xml::XmlAttributeCollection* get_Attributes()
		{
			return ((::System::Xml::XmlAttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_HasAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* a1)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET))(this, a1);
		}

		static ::System::Void WriteElementTo(::System::Xml::XmlWriter* a1, ::System::Xml::XmlElement* a2)
		{
			return ((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET))(a1, a2);
		}

		::System::Void WriteStartElement(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::Void RemoveAllAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET))(this);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET))(this);
		}

		::System::Void RemoveAllChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET))(this, a1);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET))(this);
		}

		::System::Void SetParent(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET))(this, a1);
		}
	};
}
