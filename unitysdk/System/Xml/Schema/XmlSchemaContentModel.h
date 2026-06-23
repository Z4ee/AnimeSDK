#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System::Xml::Schema { class XmlSchemaContent; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D8250)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaContentModel_TypeDefinitionIndex = 2133;

	class XmlSchemaContentModel : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL__CTOR_OFFSET))(this);
		}
	};
}
