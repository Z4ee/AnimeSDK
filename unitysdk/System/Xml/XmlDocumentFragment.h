#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x198948D0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x19894920)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19894730)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x19894840)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x19894850)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x198945F0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19894510)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19894660)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x19894580)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x19894670)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x19894870)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x19894680)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x19894860)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x19894990)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19894980)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x198944A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocumentFragment_TypeDefinitionIndex = 1760;

	class XmlDocumentFragment : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x18

		::System::Void _ctor(::System::Xml::XmlDocument* ownerDocument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT__CTOR_OFFSET))(this, ownerDocument);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CLONENODE_OFFSET))(this, deep);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Boolean CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTBEFORE_OFFSET))(this, newChild, refChild);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITECONTENTTO_OFFSET))(this, w);
		}
	};
}
