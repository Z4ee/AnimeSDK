#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_ISDUPLICATE_OFFSET UNITYSDK_OFFSET(0x3AC7D00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_SET_OFFSET UNITYSDK_OFFSET(0x3AC7CE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_AttrName_TypeDefinitionIndex = 1871;

	struct alignas(8) XmlWellFormedWriter_AttrName
	{
		::System::String* prefix; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::String* localName; // 0x20
		::System::Int32 prev; // 0x28

		::System::Void Set(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_SET_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsDuplicate(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_ISDUPLICATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
