#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x183F5CE0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x183F5C50)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x183F5B40)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x183F5B20)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x183F5CD0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x183F5B60)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x183F5BE0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x183F5C60)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x183F5B70)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x183F5E30)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x183F5D90)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x183EAC30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlProcessingInstruction_TypeDefinitionIndex = 1919;

	class XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* target; // 0x20
		::System::String* data; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Xml::XmlDocument* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void set_Data(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET))(this, a1);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET))(this, a1);
		}
	};
}
