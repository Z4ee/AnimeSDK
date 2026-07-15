#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19FABEE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NfaContentValidator_TypeDefinitionIndex = 2075;

	class NfaContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos; // 0x18
		::System::Xml::Schema::Positions* positions; // 0x20
		::System::Xml::Schema::BitSet* firstpos; // 0x28
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x30
		::System::Int32 endMarkerPos; // 0x38

		::System::Void _ctor(::System::Xml::Schema::BitSet* a1, ::Il2CppArray<::System::Xml::Schema::BitSet*>* a2, ::System::Xml::Schema::SymbolsDictionary* a3, ::System::Xml::Schema::Positions* a4, ::System::Int32 a5, ::System::Xml::Schema::XmlSchemaContentType a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::System::Int32, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
