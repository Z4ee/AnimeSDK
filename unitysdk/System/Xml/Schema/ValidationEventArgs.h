#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System::Xml::Schema { class XmlSchemaException; }

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E9010)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E4E9070)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8FB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventArgs_TypeDefinitionIndex = 2094;

	class ValidationEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::Schema::XmlSchemaException* ex; // 0x10
		::System::Xml::Schema::XmlSeverityType severity; // 0x18

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaException* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_OFFSET))(this, ex);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_1_OFFSET))(this, ex, severity);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS__CTOR_2_OFFSET))(this);
		}
	};
}
