#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLNOTATION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1A05EDA0)
#define SYSTEM_XML_XMLNOTATION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A05EE00)
#define SYSTEM_XML_XMLNOTATION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A05ED80)
#define SYSTEM_XML_XMLNOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A05ED70)
#define SYSTEM_XML_XMLNOTATION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A05ED90)
#define SYSTEM_XML_XMLNOTATION_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1A05EE10)
#define SYSTEM_XML_XMLNOTATION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1A05EE80)
#define SYSTEM_XML_XMLNOTATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A05EE70)
#define SYSTEM_XML_XMLNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0586F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNotation_TypeDefinitionIndex = 1907;

	class XmlNotation : public ::System::Xml::XmlNode
	{
	public:
		::System::String* systemId; // 0x18
		::System::String* publicId; // 0x20
		::System::String* name; // 0x28

		::System::Void _ctor(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION__CTOR_OFFSET))(this, name, publicId, systemId, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_CLONENODE_OFFSET))(this, deep);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_WRITECONTENTTO_OFFSET))(this, w);
		}
	};
}
