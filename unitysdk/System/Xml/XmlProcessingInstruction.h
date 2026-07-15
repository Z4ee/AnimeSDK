#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x16944780)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x169446F0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x169445E0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x169445C0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x16944770)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16944600)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x16944680)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x16944700)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x16944610)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x169448D0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x16944830)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x169396B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlProcessingInstruction_TypeDefinitionIndex = 1912;

	class XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* data; // 0x20
		::System::String* target; // 0x28

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
