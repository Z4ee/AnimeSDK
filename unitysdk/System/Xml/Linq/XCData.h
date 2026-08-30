#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XText.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XNode; }

#define SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1E7BB900)
#define SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E7BB810)
#define SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BB820)
#define SYSTEM_XML_LINQ_XCDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BB730)
#define SYSTEM_XML_LINQ_XCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB650)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XCData_TypeDefinitionIndex = 3891;

	class XCData : public ::System::Xml::Linq::XText
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XCData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XCData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET))(this);
		}
	};
}
