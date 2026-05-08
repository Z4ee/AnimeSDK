#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLDECLARATION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19D4E100)
#define SYSTEM_XML_XMLDECLARATION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x19D4DCC0)
#define SYSTEM_XML_XMLDECLARATION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x19D4E0B0)
#define SYSTEM_XML_XMLDECLARATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19D4E070)
#define SYSTEM_XML_XMLDECLARATION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19D4E0F0)
#define SYSTEM_XML_XMLDECLARATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D4DCB0)
#define SYSTEM_XML_XMLDECLARATION_ISVALIDXMLVERSION_OFFSET UNITYSDK_OFFSET(0x19D4DA30)
#define SYSTEM_XML_XMLDECLARATION_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x19D4DB50)
#define SYSTEM_XML_XMLDECLARATION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x19D4DE20)
#define SYSTEM_XML_XMLDECLARATION_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x19D4DB80)
#define SYSTEM_XML_XMLDECLARATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D4DE10)
#define SYSTEM_XML_XMLDECLARATION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x19D4E270)
#define SYSTEM_XML_XMLDECLARATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D4E200)
#define SYSTEM_XML_XMLDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4D730)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDeclaration_TypeDefinitionIndex = 1758;

	class XmlDeclaration : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* standalone; // 0x20
		::System::String* version; // 0x28
		::System::String* encoding; // 0x30

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
