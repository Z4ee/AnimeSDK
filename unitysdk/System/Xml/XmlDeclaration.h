#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLDECLARATION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1C184C80)
#define SYSTEM_XML_XMLDECLARATION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C184840)
#define SYSTEM_XML_XMLDECLARATION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1C184C30)
#define SYSTEM_XML_XMLDECLARATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C184BF0)
#define SYSTEM_XML_XMLDECLARATION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C184C70)
#define SYSTEM_XML_XMLDECLARATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C184830)
#define SYSTEM_XML_XMLDECLARATION_ISVALIDXMLVERSION_OFFSET UNITYSDK_OFFSET(0x1C1845B0)
#define SYSTEM_XML_XMLDECLARATION_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1C1846D0)
#define SYSTEM_XML_XMLDECLARATION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C1849A0)
#define SYSTEM_XML_XMLDECLARATION_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1C184700)
#define SYSTEM_XML_XMLDECLARATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C184990)
#define SYSTEM_XML_XMLDECLARATION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1C184DF0)
#define SYSTEM_XML_XMLDECLARATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C184D80)
#define SYSTEM_XML_XMLDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1842B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDeclaration_TypeDefinitionIndex = 1757;

	class XmlDeclaration : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* encoding; // 0x20
		::System::String* standalone; // 0x28
		::System::String* version; // 0x30

		::System::Void _ctor(::System::String* version, ::System::String* encoding, ::System::String* standalone, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION__CTOR_OFFSET))(this, version, encoding, standalone, doc);
		}

		::System::Void set_Encoding(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_ENCODING_OFFSET))(this, value);
		}

		::System::Void set_Standalone(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_STANDALONE_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_VALUE_OFFSET))(this, value);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_CLONENODE_OFFSET))(this, deep);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::Boolean IsValidXmlVersion(::System::String* ver)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_ISVALIDXMLVERSION_OFFSET))(this, ver);
		}
	};
}
