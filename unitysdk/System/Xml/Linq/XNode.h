#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/SaveOptions.h"
#include "unitysdk/System/Xml/Linq/XObject.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XNODE_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1AE10C00)
#define SYSTEM_XML_LINQ_XNODE_GETXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1AE10780)
#define SYSTEM_XML_LINQ_XNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AE105F0)
#define SYSTEM_XML_LINQ_XNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE10670)
#define SYSTEM_XML_LINQ_XNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE08790)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XNode_TypeDefinitionIndex = 3877;

	class XNode : public ::System::Xml::Linq::XObject
	{
	public:
		::System::Xml::Linq::XNode* next; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE__CTOR_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_REMOVE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_TOSTRING_OFFSET))(this);
		}

		::System::Void AppendText(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_APPENDTEXT_OFFSET))(this, a1);
		}

		::System::String* GetXmlString(::System::Xml::Linq::SaveOptions a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::SaveOptions))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_GETXMLSTRING_OFFSET))(this, a1);
		}
	};
}
