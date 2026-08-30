#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"

namespace System::Collections { class ArrayList; }

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RestrictionFacets_TypeDefinitionIndex = 2088;

	class RestrictionFacets : public ::System::Object
	{
	public:
		::System::Object* MinExclusive; // 0x10
		::System::Collections::ArrayList* Enumeration; // 0x18
		::System::Object* MaxInclusive; // 0x20
		::System::Object* MaxExclusive; // 0x28
		::System::Collections::ArrayList* Patterns; // 0x30
		::System::Object* MinInclusive; // 0x38
		::System::Int32 MinLength; // 0x40
		::System::Int32 Length; // 0x44
		::System::Int32 MaxLength; // 0x48
		::System::Xml::Schema::XmlSchemaWhiteSpace WhiteSpace; // 0x4C
		::System::Int32 TotalDigits; // 0x50
		::System::Xml::Schema::RestrictionFlags Flags; // 0x54
		::System::Int32 FractionDigits; // 0x58
	};
}
