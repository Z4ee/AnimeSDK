#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ReadContentAsBinaryHelper_State.h"

namespace System::Xml { class XmlReader; }

#define SYSTEM_XML_READCONTENTASBINARYHELPER_FINISH_OFFSET UNITYSDK_OFFSET(0x1B96D610)
#define SYSTEM_XML_READCONTENTASBINARYHELPER_MOVETONEXTCONTENTNODE_OFFSET UNITYSDK_OFFSET(0x1B96D750)
#define SYSTEM_XML_READCONTENTASBINARYHELPER_RESET_OFFSET UNITYSDK_OFFSET(0x1B96D870)

namespace System::Xml
{
	inline static constexpr unsigned int ReadContentAsBinaryHelper_TypeDefinitionIndex = 1696;

	class ReadContentAsBinaryHelper : public ::System::Object
	{
	public:
		::System::Xml::XmlReader* reader; // 0x10
		::System::Xml::ReadContentAsBinaryHelper_State state; // 0x18
		::System::Int32 valueOffset; // 0x1C
		::System::Boolean isEnd; // 0x20

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_FINISH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_RESET_OFFSET))(this);
		}

		::System::Boolean MoveToNextContentNode(::System::Boolean moveIfOnContentNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_READCONTENTASBINARYHELPER_MOVETONEXTCONTENTNODE_OFFSET))(this, moveIfOnContentNode);
		}
	};
}
