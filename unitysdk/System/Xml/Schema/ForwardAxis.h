#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class DoubleLinkAxis; }

#define SYSTEM_XML_SCHEMA_FORWARDAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1510)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ForwardAxis_TypeDefinitionIndex = 1943;

	class ForwardAxis : public ::System::Object
	{
	public:
		::System::Xml::Schema::DoubleLinkAxis* rootNode; // 0x10
		::System::Xml::Schema::DoubleLinkAxis* topNode; // 0x18
		::System::Boolean isSelfAxis; // 0x20
		::System::Boolean isAttribute; // 0x21
		::System::Boolean isDss; // 0x22

		::System::Void _ctor(::System::Xml::Schema::DoubleLinkAxis* axis, ::System::Boolean isdesorself)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::DoubleLinkAxis*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS__CTOR_OFFSET))(this, axis, isdesorself);
		}
	};
}
