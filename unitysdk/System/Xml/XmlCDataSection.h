#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1E882920)
#define SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1E882AB0)
#define SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E882790)
#define SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E882770)
#define SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E8827B0)
#define SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1E8827C0)
#define SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1E882AA0)
#define SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8829F0)
#define SYSTEM_XML_XMLCDATASECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E882670)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCDataSection_TypeDefinitionIndex = 1893;

	class XmlCDataSection : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION__CTOR_OFFSET))(this, a1, a2);
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

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET))(this);
		}
	};
}
