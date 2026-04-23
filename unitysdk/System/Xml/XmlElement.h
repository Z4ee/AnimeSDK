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

#define SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1A0499B0)
#define SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1A048E30)
#define SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A0495A0)
#define SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A049CB0)
#define SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1A04A550)
#define SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1A0499A0)
#define SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A049510)
#define SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1A049C70)
#define SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A0494D0)
#define SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1A0494F0)
#define SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A0497A0)
#define SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1A04ABD0)
#define SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A049980)
#define SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A049490)
#define SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1A049990)
#define SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A0494B0)
#define SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x1A048E10)
#define SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1A049C90)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A04A2C0)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A049C10)
#define SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1A04A300)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1A049D10)
#define SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1A04AC10)
#define SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1A04A660)
#define SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1A04A370)
#define SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A049520)
#define SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1A049C80)
#define SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x1A048E20)
#define SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1A04A260)
#define SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET UNITYSDK_OFFSET(0x1A049EE0)
#define SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A04A130)
#define SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A049DE0)
#define SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A048DC0)
#define SYSTEM_XML_XMLELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0447B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElement_TypeDefinitionIndex = 1891;

	class XmlElement : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::XmlAttributeCollection* attributes; // 0x20
		::System::Xml::XmlLinkedNode* lastChild; // 0x28
		::System::Xml::XmlName* name; // 0x30

		::System::Void _ctor(::System::Xml::XmlName* name, ::System::Boolean empty, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*, ::System::Boolean, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_OFFSET))(this, name, empty, doc);
		}

		::System::Void _ctor_1(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET))(this, prefix, localName, namespaceURI, doc);
		}

		::System::Xml::XmlName* get_XmlName()
		{
			return ((::System::Xml::XmlName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET))(this);
		}

		::System::Void set_XmlName(::System::Xml::XmlName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET))(this, deep);
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

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Xml::XmlAttributeCollection* get_Attributes()
		{
			return ((::System::Xml::XmlAttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_HasAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET))(this, newAttr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET))(this, w);
		}

		static ::System::Void WriteElementTo(::System::Xml::XmlWriter* writer, ::System::Xml::XmlElement* e)
		{
			return ((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET))(writer, e);
		}

		::System::Void WriteStartElement(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET))(this, w);
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

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET))(this, value);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET))(this);
		}

		::System::Void SetParent(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET))(this, node);
		}
	};
}
