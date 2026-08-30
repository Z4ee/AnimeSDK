#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE67C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DfaContentValidator_TypeDefinitionIndex = 2081;

	class DfaContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* transitionTable; // 0x18
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x20

		::System::Void _ctor(::Il2CppArray<::Il2CppArray<::System::Int32>*>* a1, ::System::Xml::Schema::SymbolsDictionary* a2, ::System::Xml::Schema::XmlSchemaContentType a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
