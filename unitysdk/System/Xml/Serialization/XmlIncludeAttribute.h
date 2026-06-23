#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIncludeAttribute_TypeDefinitionIndex = 1887;

	class XmlIncludeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10
	};
}
