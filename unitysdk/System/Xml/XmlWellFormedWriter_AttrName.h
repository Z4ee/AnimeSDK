#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_ISDUPLICATE_OFFSET UNITYSDK_OFFSET(0x22D2EB0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_SET_OFFSET UNITYSDK_OFFSET(0x22D2E90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_AttrName_TypeDefinitionIndex = 1867;

	struct alignas(8) XmlWellFormedWriter_AttrName
	{
		::System::String* prefix; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::String* localName; // 0x20
		::System::Int32 prev; // 0x28

		::System::Void Set(::System::String* prefix, ::System::String* localName, ::System::String* namespaceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_SET_OFFSET))(this, prefix, localName, namespaceUri);
		}

		::System::Boolean IsDuplicate(::System::String* prefix, ::System::String* localName, ::System::String* namespaceUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRNAME_ISDUPLICATE_OFFSET))(this, prefix, localName, namespaceUri);
		}
	};
}
