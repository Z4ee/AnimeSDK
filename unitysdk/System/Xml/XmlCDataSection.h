#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x185FD0C0)
#define SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x185FD180)
#define SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x185FD000)
#define SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185FCFE0)
#define SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x185FD020)
#define SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x185FD030)
#define SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x185FD170)
#define SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x185FD130)
#define SYSTEM_XML_XMLCDATASECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x185FCEE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCDataSection_TypeDefinitionIndex = 1881;

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
