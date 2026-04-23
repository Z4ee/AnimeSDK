#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC9880)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NfaContentValidator_TypeDefinitionIndex = 2071;

	class NfaContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x18
		::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos; // 0x20
		::System::Xml::Schema::Positions* positions; // 0x28
		::System::Xml::Schema::BitSet* firstpos; // 0x30
		::System::Int32 endMarkerPos; // 0x38

		::System::Void _ctor(::System::Xml::Schema::BitSet* firstpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, ::System::Int32 endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean isOpen, ::System::Boolean isEmptiable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::System::Int32, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR__CTOR_OFFSET))(this, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable);
		}
	};
}
