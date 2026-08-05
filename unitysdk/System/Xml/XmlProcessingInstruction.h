#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1ECB0E30)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1ECB0CF0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1ECB0A80)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ECB0A60)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1ECB0E20)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1ECB0AA0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1ECB0BD0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1ECB0D00)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1ECB0AB0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1ECB0EB0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ECB0E70)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB09D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlProcessingInstruction_TypeDefinitionIndex = 1785;

	class XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* target; // 0x20
		::System::String* data; // 0x28

		::System::Void _ctor(::System::String* target, ::System::String* data, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET))(this, target, data, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void set_Data(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET))(this, value);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(this, deep);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET))(this, w);
		}
	};
}
