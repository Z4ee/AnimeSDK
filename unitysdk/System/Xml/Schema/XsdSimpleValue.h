#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC48D30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdSimpleValue_TypeDefinitionIndex = 1982;

	class XsdSimpleValue : public ::System::Object
	{
	public:
		::System::Object* typedValue; // 0x10
		::System::Xml::Schema::XmlSchemaSimpleType* xmlType; // 0x18

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaSimpleType* st, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE__CTOR_OFFSET))(this, st, value);
		}
	};
}
