#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"

namespace System::Collections { class ArrayList; }

#define SYSTEM_XML_SCHEMA_RESTRICTIONFACETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E35F8E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RestrictionFacets_TypeDefinitionIndex = 1985;

	class RestrictionFacets : public ::System::Object
	{
	public:
		::System::Object* MaxInclusive; // 0x10
		::System::Object* MaxExclusive; // 0x18
		::System::Object* MinExclusive; // 0x20
		::System::Object* MinInclusive; // 0x28
		::System::Collections::ArrayList* Enumeration; // 0x30
		::System::Collections::ArrayList* Patterns; // 0x38
		::System::Xml::Schema::RestrictionFlags FixedFlags; // 0x40
		::System::Int32 MinLength; // 0x44
		::System::Xml::Schema::XmlSchemaWhiteSpace WhiteSpace; // 0x48
		::System::Xml::Schema::RestrictionFlags Flags; // 0x4C
		::System::Int32 Length; // 0x50
		::System::Int32 MaxLength; // 0x54
		::System::Int32 TotalDigits; // 0x58
		::System::Int32 FractionDigits; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RESTRICTIONFACETS__CTOR_OFFSET))(this);
		}
	};
}
