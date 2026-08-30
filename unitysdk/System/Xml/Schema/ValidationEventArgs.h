#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System::Xml::Schema { class XmlSchemaException; }

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E804020)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_SEVERITY_OFFSET UNITYSDK_OFFSET(0x1E804010)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventArgs_TypeDefinitionIndex = 2178;

	class ValidationEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::Schema::XmlSchemaException* ex; // 0x10
		::System::Xml::Schema::XmlSeverityType severity; // 0x18

		::System::Xml::Schema::XmlSeverityType get_Severity()
		{
			return ((::System::Xml::Schema::XmlSeverityType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_SEVERITY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaException* get_Exception()
		{
			return ((::System::Xml::Schema::XmlSchemaException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}
	};
}
