#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1855FCE0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1855FC30)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1855FC40)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1855FC50)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x1855FA80)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1855FC60)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1855FBC0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18559BF0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XProcessingInstruction_TypeDefinitionIndex = 4917;

	class XProcessingInstruction : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* data; // 0x28
		::System::String* target; // 0x30

		::System::Void _ctor(::System::String* target, ::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_OFFSET))(this, target, data);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XProcessingInstruction* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XProcessingInstruction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION__CTOR_1_OFFSET))(this, other);
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

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET))(this, writer);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(this);
		}

		static ::System::Void ValidateName(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET))(name);
		}
	};
}
