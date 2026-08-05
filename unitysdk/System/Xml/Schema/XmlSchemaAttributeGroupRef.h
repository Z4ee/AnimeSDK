#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x1E7FDDF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FDE90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttributeGroupRef_TypeDefinitionIndex = 2122;

	class XmlSchemaAttributeGroupRef : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Xml::XmlQualifiedName* refName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF__CTOR_OFFSET))(this);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_SET_REFNAME_OFFSET))(this, value);
		}
	};
}
