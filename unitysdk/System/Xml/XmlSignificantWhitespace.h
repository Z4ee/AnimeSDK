#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1B59B350)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1B59B490)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1B59B290)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B59B270)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1B59B2B0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1B59B2C0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B59B3A0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B59B3C0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1B59B480)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B59B440)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59B180)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSignificantWhitespace_TypeDefinitionIndex = 1787;

	class XmlSignificantWhitespace : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* strData, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE__CTOR_OFFSET))(this, strData, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_CLONENODE_OFFSET))(this, deep);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_ISTEXT_OFFSET))(this);
		}
	};
}
