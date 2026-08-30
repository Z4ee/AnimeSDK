#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1E7C7500)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E7C73E0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E7C73F0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E7C7400)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x1E7C7230)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C7410)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C7370)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF510)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XProcessingInstruction_TypeDefinitionIndex = 3904;

	class XProcessingInstruction : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* data; // 0x28
		::System::String* target; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XProcessingInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XProcessingInstruction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Data()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_DATA_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Target()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_TARGET_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(this);
		}

		static ::System::Void ValidateName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET))(a1);
		}
	};
}
