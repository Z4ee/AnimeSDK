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
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1C7BBA70)
#define SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1C7BB100)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_1_OFFSET UNITYSDK_OFFSET(0x1C7BC130)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1C7BBEB0)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1C7BBFD0)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BBD60)
#define SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C7BB880)
#define SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C7BBCD0)
#define SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C7BC980)
#define SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1C7BBA60)
#define SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1C7BB7F0)
#define SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1C7BBC90)
#define SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1C7BB7B0)
#define SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1C7BB7D0)
#define SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7BB9C0)
#define SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1C7BCA70)
#define SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C7BBA40)
#define SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C7BB770)
#define SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1C7BBA50)
#define SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1C7BB790)
#define SYSTEM_XML_XMLELEMENT_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1C7BC850)
#define SYSTEM_XML_XMLELEMENT_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BC290)
#define SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BBCB0)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C7BC7A0)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1C7BBC30)
#define SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1C7BC7E0)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_1_OFFSET UNITYSDK_OFFSET(0x1C7BC190)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1C7BBF00)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1C7BC000)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BBD90)
#define SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1C7BCAB0)
#define SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C7BC990)
#define SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1C7BC860)
#define SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1C7BB800)
#define SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1C7BBCA0)
#define SYSTEM_XML_XMLELEMENT_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1C7BB9E0)
#define SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1C7BC740)
#define SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET UNITYSDK_OFFSET(0x1C7BC3B0)
#define SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C7BC600)
#define SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C7BC2B0)
#define SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7BB0B0)
#define SYSTEM_XML_XMLELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BAF40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElement_TypeDefinitionIndex = 1761;

	class XmlElement : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::XmlName* name; // 0x20
		::System::Xml::XmlAttributeCollection* attributes; // 0x28
		::System::Xml::XmlLinkedNode* lastChild; // 0x30

		::System::Void _ctor(::System::Xml::XmlName* name, ::System::Boolean empty, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*, ::System::Boolean, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_OFFSET))(this, name, empty, doc);
		}

		::System::Void _ctor_1(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT__CTOR_1_OFFSET))(this, prefix, localName, namespaceURI, doc);
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

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_PREFIX_OFFSET))(this, value);
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

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void SetAttribute(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET))(this, name, value);
		}

		::System::Xml::XmlAttribute* GetAttributeNode(::System::String* name)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET))(this, name);
		}

		::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* newAttr)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET))(this, newAttr);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::String* SetAttribute_1(::System::String* localName, ::System::String* namespaceURI, ::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI, value);
		}

		::System::Xml::XmlAttribute* GetAttributeNode_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::Xml::XmlAttribute* SetAttributeNode_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::Boolean HasAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_HASATTRIBUTE_OFFSET))(this, name);
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

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_SCHEMAINFO_OFFSET))(this);
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
