#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Linq { class XName; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XStreamingElement_TypeDefinitionIndex = 3908;

	class XStreamingElement : public ::System::Object
	{
	public:
		::System::Xml::Linq::XName* name; // 0x10
		::System::Object* content; // 0x18
	};
}
