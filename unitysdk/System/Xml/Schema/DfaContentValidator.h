#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC77A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DfaContentValidator_TypeDefinitionIndex = 2070;

	class DfaContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x18
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* transitionTable; // 0x20

		::System::Void _ctor(::Il2CppArray<::Il2CppArray<::System::Int32>*>* transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean isOpen, ::System::Boolean isEmptiable)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET))(this, transitionTable, symbols, contentType, isOpen, isEmptiable);
		}
	};
}
