#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XmlTextWriter_NamespaceState.h"

namespace System { class String; }

#define SYSTEM_XML_XMLTEXTWRITER_TAGINFO_INIT_OFFSET UNITYSDK_OFFSET(0x386DC80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_TagInfo_TypeDefinitionIndex = 1853;

	struct alignas(8) XmlTextWriter_TagInfo
	{
		::System::String* name; // 0x10
		::System::String* prefix; // 0x18
		::System::String* defaultNs; // 0x20
		::System::Xml::XmlTextWriter_NamespaceState defaultNsState; // 0x28
		::System::Xml::XmlSpace xmlSpace; // 0x2C
		::System::String* xmlLang; // 0x30
		::System::Int32 prevNsTop; // 0x38
		::System::Int32 prefixCount; // 0x3C
		::System::Boolean mixed; // 0x40

		::System::Void Init(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_TAGINFO_INIT_OFFSET))(this, a1);
		}
	};
}
