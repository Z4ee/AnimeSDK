#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ActiveAxis.h"

namespace System::Xml::Schema { class Asttree; }
namespace System::Xml::Schema { class KeySequence; }

#define SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x1E4E5CE0)
#define SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E5CB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LocatedActiveAxis_TypeDefinitionIndex = 1953;

	class LocatedActiveAxis : public ::System::Xml::Schema::ActiveAxis
	{
	public:
		::System::Xml::Schema::KeySequence* Ks; // 0x28
		::System::Int32 column; // 0x30
		::System::Boolean isMatched; // 0x34

		::System::Void _ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::Asttree*, ::System::Xml::Schema::KeySequence*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS__CTOR_OFFSET))(this, astfield, ks, column);
		}

		::System::Void Reactivate(::System::Xml::Schema::KeySequence* ks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::KeySequence*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LOCATEDACTIVEAXIS_REACTIVATE_OFFSET))(this, ks);
		}
	};
}
