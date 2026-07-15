#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1692D310)
#define SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1692D620)
#define SYSTEM_XML_XMLENTITY_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1692D3A0)
#define SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1692D410)
#define SYSTEM_XML_XMLENTITY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1692D370)
#define SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1692D420)
#define SYSTEM_XML_XMLENTITY_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1692D390)
#define SYSTEM_XML_XMLENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1692D380)
#define SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1692D580)
#define SYSTEM_XML_XMLENTITY_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1692D590)
#define SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1692D560)
#define SYSTEM_XML_XMLENTITY_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x1692D630)
#define SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1692D3B0)
#define SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1692D5A0)
#define SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1692D550)
#define SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1692D610)
#define SYSTEM_XML_XMLENTITY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1692D600)
#define SYSTEM_XML_XMLENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1692D1C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEntity_TypeDefinitionIndex = 1896;

	class XmlEntity : public ::System::Xml::XmlNode
	{
	public:
		::System::String* unparsedReplacementStr; // 0x18
		::System::String* baseURI; // 0x20
		::System::String* publicId; // 0x28
		::System::String* notationName; // 0x30
		::System::String* name; // 0x38
		::System::String* systemId; // 0x40
		::System::Xml::XmlLinkedNode* lastChild; // 0x48
		::System::Boolean childrenFoliating; // 0x50

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Xml::XmlDocument* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET))(this, a1);
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

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET))(this, a1);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_SYSTEMID_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET))(this);
		}

		::System::Void SetBaseURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SETBASEURI_OFFSET))(this, a1);
		}
	};
}
