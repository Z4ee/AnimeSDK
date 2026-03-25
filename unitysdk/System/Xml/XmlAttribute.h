#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlName; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLATTRIBUTE_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x185FA2F0)
#define SYSTEM_XML_XMLATTRIBUTE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x185FA5F0)
#define SYSTEM_XML_XMLATTRIBUTE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x185F9D00)
#define SYSTEM_XML_XMLATTRIBUTE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x185FA8C0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x185FA2E0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x185FA510)
#define SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x185D6A80)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x185D6A60)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185F9E00)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x185F9E20)
#define SYSTEM_XML_XMLATTRIBUTE_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x185F9DD0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_OWNERELEMENT_OFFSET UNITYSDK_OFFSET(0x185FA690)
#define SYSTEM_XML_XMLATTRIBUTE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x185F9DF0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x185E95D0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_SPECIFIED_OFFSET UNITYSDK_OFFSET(0x185FA540)
#define SYSTEM_XML_XMLATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x185D6AA0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x185F9CE0)
#define SYSTEM_XML_XMLATTRIBUTE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x185FA530)
#define SYSTEM_XML_XMLATTRIBUTE_PREPAREOWNERELEMENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FA020)
#define SYSTEM_XML_XMLATTRIBUTE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x185FA550)
#define SYSTEM_XML_XMLATTRIBUTE_RESETOWNERELEMENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FA0A0)
#define SYSTEM_XML_XMLATTRIBUTE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x185FA910)
#define SYSTEM_XML_XMLATTRIBUTE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x185F9E30)
#define SYSTEM_XML_XMLATTRIBUTE_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x185FA700)
#define SYSTEM_XML_XMLATTRIBUTE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x185FA520)
#define SYSTEM_XML_XMLATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x185D6AB0)
#define SYSTEM_XML_XMLATTRIBUTE_SET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x185F9CF0)
#define SYSTEM_XML_XMLATTRIBUTE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x185FA860)
#define SYSTEM_XML_XMLATTRIBUTE_WRITETO_OFFSET UNITYSDK_OFFSET(0x185FA7B0)
#define SYSTEM_XML_XMLATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185F9B60)
#define SYSTEM_XML_XMLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185F9950)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAttribute_TypeDefinitionIndex = 1879;

	class XmlAttribute : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x18
		::System::Xml::XmlName* name; // 0x20

		::System::Void _ctor(::System::Xml::XmlName* name, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE__CTOR_OFFSET))(this, name, doc);
		}

		::System::Void _ctor_1(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE__CTOR_1_OFFSET))(this, prefix, localName, namespaceURI, doc);
		}

		::System::Xml::XmlName* get_XmlName()
		{
			return ((::System::Xml::XmlName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XMLNAME_OFFSET))(this);
		}

		::System::Void set_XmlName(::System::Xml::XmlName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_XMLNAME_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_CLONENODE_OFFSET))(this, deep);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_PREFIX_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Boolean PrepareOwnerElementInElementIdAttrMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_PREPAREOWNERELEMENTINELEMENTIDATTRMAP_OFFSET))(this);
		}

		::System::Void ResetOwnerElementInElementIdAttrMap(::System::String* oldInnerText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_RESETOWNERELEMENTINELEMENTIDATTRMAP_OFFSET))(this, oldInnerText);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Boolean get_Specified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_SPECIFIED_OFFSET))(this);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_REMOVECHILD_OFFSET))(this, oldChild);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::Xml::XmlElement* get_OwnerElement()
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_OWNERELEMENT_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_BASEURI_OFFSET))(this);
		}

		::System::Void SetParent(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SETPARENT_OFFSET))(this, node);
		}
	};
}
