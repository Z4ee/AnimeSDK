#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLWHITESPACE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1C79FB20)
#define SYSTEM_XML_XMLWHITESPACE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1C79FC80)
#define SYSTEM_XML_XMLWHITESPACE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1C79F840)
#define SYSTEM_XML_XMLWHITESPACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C79F820)
#define SYSTEM_XML_XMLWHITESPACE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C79F860)
#define SYSTEM_XML_XMLWHITESPACE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1C79F870)
#define SYSTEM_XML_XMLWHITESPACE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C79F9E0)
#define SYSTEM_XML_XMLWHITESPACE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C79FA00)
#define SYSTEM_XML_XMLWHITESPACE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1C79FC70)
#define SYSTEM_XML_XMLWHITESPACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C79FBD0)
#define SYSTEM_XML_XMLWHITESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79F6A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWhitespace_TypeDefinitionIndex = 1916;

	class XmlWhitespace : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_ISTEXT_OFFSET))(this);
		}
	};
}
