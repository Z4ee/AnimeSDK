#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_NAMESPACECACHE_GET_OFFSET UNITYSDK_OFFSET(0x3C8C070)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NamespaceCache_TypeDefinitionIndex = 3894;

	struct alignas(8) NamespaceCache
	{
		::System::Xml::Linq::XNamespace* ns; // 0x10
		::System::String* namespaceName; // 0x18

		::System::Xml::Linq::XNamespace* Get(::System::String* a1)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACECACHE_GET_OFFSET))(this, a1);
		}
	};
}
