#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaIdentityConstraint.h"

namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_SET_REFER_OFFSET UNITYSDK_OFFSET(0x1B2AD980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ADA20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaKeyref_TypeDefinitionIndex = 2166;

	class XmlSchemaKeyref : public ::System::Xml::Schema::XmlSchemaIdentityConstraint
	{
	public:
		::System::Xml::XmlQualifiedName* refer; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF__CTOR_OFFSET))(this);
		}

		::System::Void set_Refer(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_SET_REFER_OFFSET))(this, value);
		}
	};
}
