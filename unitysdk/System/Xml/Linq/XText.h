#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XTEXT_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1855FE50)
#define SYSTEM_XML_LINQ_XTEXT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1855FE80)
#define SYSTEM_XML_LINQ_XTEXT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1855FD80)
#define SYSTEM_XML_LINQ_XTEXT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1855FD90)
#define SYSTEM_XML_LINQ_XTEXT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18558DE0)
#define SYSTEM_XML_LINQ_XTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1855FDA0)
#define SYSTEM_XML_LINQ_XTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18556FA0)
#define SYSTEM_XML_LINQ_XTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18556EC0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XText_TypeDefinitionIndex = 4903;

	class XText : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* text; // 0x28

		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XText* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XText*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT__CTOR_1_OFFSET))(this, other);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_WRITETO_OFFSET))(this, writer);
		}

		::System::Void AppendText(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_APPENDTEXT_OFFSET))(this, sb);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_CLONENODE_OFFSET))(this);
		}
	};
}
