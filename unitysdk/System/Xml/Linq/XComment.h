#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XCOMMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1AE088B0)
#define SYSTEM_XML_LINQ_XCOMMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AE08810)
#define SYSTEM_XML_LINQ_XCOMMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AE08820)
#define SYSTEM_XML_LINQ_XCOMMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AE08830)
#define SYSTEM_XML_LINQ_XCOMMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE087A0)
#define SYSTEM_XML_LINQ_XCOMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE08720)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XComment_TypeDefinitionIndex = 3891;

	class XComment : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* value; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XComment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XComment*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_WRITETO_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_CLONENODE_OFFSET))(this);
		}
	};
}
