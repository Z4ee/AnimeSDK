#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaType.h"

namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaSimpleTypeContent; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0A0960)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A08E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleType_TypeDefinitionIndex = 2188;

	class XmlSchemaSimpleType : public ::System::Xml::Schema::XmlSchemaType
	{
	public:
		::System::Xml::Schema::XmlSchemaSimpleTypeContent* content; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_CLONE_OFFSET))(this);
		}
	};
}
