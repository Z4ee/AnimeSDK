#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1A47E1C0)
#define SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1A47E260)
#define SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A47E100)
#define SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A47E0E0)
#define SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A47E120)
#define SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1A47E130)
#define SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1A47E250)
#define SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A47E210)
#define SYSTEM_XML_XMLCDATASECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47E060)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCDataSection_TypeDefinitionIndex = 1753;

	class XmlCDataSection : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* data, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION__CTOR_OFFSET))(this, data, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET))(this, deep);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET))(this);
		}
	};
}
