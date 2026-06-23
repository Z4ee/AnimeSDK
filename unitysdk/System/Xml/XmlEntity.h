#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1CFC0210)
#define SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1CFC04A0)
#define SYSTEM_XML_XMLENTITY_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1CFC02A0)
#define SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CFC0310)
#define SYSTEM_XML_XMLENTITY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CFC0270)
#define SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1CFC0320)
#define SYSTEM_XML_XMLENTITY_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1CFC0290)
#define SYSTEM_XML_XMLENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CFC0280)
#define SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1CFC0410)
#define SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1CFC03F0)
#define SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1CFC02B0)
#define SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1CFC0420)
#define SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1CFC03E0)
#define SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1CFC0490)
#define SYSTEM_XML_XMLENTITY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFC0480)
#define SYSTEM_XML_XMLENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFC04B0)
#define SYSTEM_XML_XMLENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0130)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEntity_TypeDefinitionIndex = 1766;

	class XmlEntity : public ::System::Xml::XmlNode
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x18
		::System::String* baseURI; // 0x20
		::System::String* publicId; // 0x28
		::System::String* notationName; // 0x30
		::System::String* unparsedReplacementStr; // 0x38
		::System::String* systemId; // 0x40
		::System::String* name; // 0x48
		::System::Boolean childrenFoliating; // 0x50

		::System::Void _ctor(::System::String* name, ::System::String* strdata, ::System::String* publicId, ::System::String* systemId, ::System::String* notationName, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY__CTOR_OFFSET))(this, name, strdata, publicId, systemId, notationName, doc);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY__CTOR_1_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET))(this, deep);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET))(this);
		}
	};
}
