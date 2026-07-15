#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x19680F20)
#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x19680F10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdSimpleValue_TypeDefinitionIndex = 2078;

	class XsdSimpleValue : public ::System::Object
	{
	public:
		::System::Object* typedValue; // 0x10
		::System::Xml::Schema::XmlSchemaSimpleType* xmlType; // 0x18

		::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Object* get_TypedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_TYPEDVALUE_OFFSET))(this);
		}
	};
}
