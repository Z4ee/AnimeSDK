#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLENTITYREFERENCE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1AEC2560)
#define SYSTEM_XML_XMLENTITYREFERENCE_CONSTRUCTBASEURI_OFFSET UNITYSDK_OFFSET(0x1AEC3140)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AEC3120)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_CHILDBASEURI_OFFSET UNITYSDK_OFFSET(0x1AEC31D0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1AEC25B0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AEC25A0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1AEC2D70)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1AEC24D0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AEC24C0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AEC2550)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AEC24E0)
#define SYSTEM_XML_XMLENTITYREFERENCE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1AEC2D90)
#define SYSTEM_XML_XMLENTITYREFERENCE_SETPARENTFORLOAD_OFFSET UNITYSDK_OFFSET(0x1AEC2CE0)
#define SYSTEM_XML_XMLENTITYREFERENCE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1AEC25C0)
#define SYSTEM_XML_XMLENTITYREFERENCE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1AEC2D80)
#define SYSTEM_XML_XMLENTITYREFERENCE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AEC24F0)
#define SYSTEM_XML_XMLENTITYREFERENCE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1AEC2DE0)
#define SYSTEM_XML_XMLENTITYREFERENCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AEC2DB0)
#define SYSTEM_XML_XMLENTITYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEC2380)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEntityReference_TypeDefinitionIndex = 1893;

	class XmlEntityReference : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x20
		::System::String* name; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_CLONENODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Void SetParent(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SETPARENT_OFFSET))(this, a1);
		}

		::System::Void SetParentForLoad(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SETPARENTFORLOAD_OFFSET))(this, a1);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SET_LASTNODE_OFFSET))(this, a1);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_ISVALIDCHILDTYPE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_BASEURI_OFFSET))(this);
		}

		::System::String* ConstructBaseURI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_CONSTRUCTBASEURI_OFFSET))(this, a1, a2);
		}

		::System::String* get_ChildBaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_CHILDBASEURI_OFFSET))(this);
		}
	};
}
