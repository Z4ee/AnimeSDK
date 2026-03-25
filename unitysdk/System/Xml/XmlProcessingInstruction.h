#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x18624930)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x18624900)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x186247B0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18624790)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x18624920)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x186247D0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x186247F0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x18624910)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x186247E0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x186249B0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x18624970)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1861D1E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlProcessingInstruction_TypeDefinitionIndex = 1907;

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
