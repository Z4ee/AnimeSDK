#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XText.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XNode; }

#define SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19F91E80)
#define SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19F91DF0)
#define SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F91E00)
#define SYSTEM_XML_LINQ_XCDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F91D10)
#define SYSTEM_XML_LINQ_XCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F91C30)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XCData_TypeDefinitionIndex = 4912;

	class XCData : public ::System::Xml::Linq::XText
	{
	public:
		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XCData* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XCData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA__CTOR_1_OFFSET))(this, other);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET))(this, writer);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET))(this);
		}
	};
}
