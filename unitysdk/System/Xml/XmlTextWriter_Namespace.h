#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_XMLTEXTWRITER_NAMESPACE_SET_OFFSET UNITYSDK_OFFSET(0x22D2BB0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_Namespace_TypeDefinitionIndex = 1854;

	struct alignas(8) XmlTextWriter_Namespace
	{
		::System::String* prefix; // 0x10
		::System::String* ns; // 0x18
		::System::Boolean declared; // 0x20
		::System::Int32 prevNsIndex; // 0x24

		::System::Void Set(::System::String* prefix, ::System::String* ns, ::System::Boolean declared)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_NAMESPACE_SET_OFFSET))(this, prefix, ns, declared);
		}
	};
}
