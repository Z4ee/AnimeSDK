#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"

namespace System::Xml { class IDtdParserAdapter; }
namespace System::Xml::Schema { class DtdValidator_NamespaceManager; }
namespace System::Xml::Schema { class SchemaAttDef; }

#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1E7D1E90)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F5A80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DtdValidator_TypeDefinitionIndex = 2153;

	class DtdValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		static ::System::Xml::Schema::DtdValidator_NamespaceManager** StaticGet_namespaceManager()
		{
			return (::System::Xml::Schema::DtdValidator_NamespaceManager**)Il2CppClass::FromTypeDefinitionIndex(DtdValidator_TypeDefinitionIndex)->GetStaticField(0x19D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET))();
		}

		static ::System::Void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* a1, ::System::Xml::IDtdParserAdapter* a2)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET))(a1, a2);
		}
	};
}
