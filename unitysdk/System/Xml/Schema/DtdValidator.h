#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"

namespace System::Xml { class IDtdParserAdapter; }
namespace System::Xml::Schema { class DtdValidator_NamespaceManager; }
namespace System::Xml::Schema { class SchemaAttDef; }

#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x19FA5460)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FC7820)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DtdValidator_TypeDefinitionIndex = 2142;

	class DtdValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		static ::System::Xml::Schema::DtdValidator_NamespaceManager** StaticGet_namespaceManager()
		{
			return (::System::Xml::Schema::DtdValidator_NamespaceManager**)Il2CppClass::FromTypeDefinitionIndex(DtdValidator_TypeDefinitionIndex)->GetStaticField(0xD4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET))();
		}

		static ::System::Void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET))(attdef, readerAdapter);
		}
	};
}
