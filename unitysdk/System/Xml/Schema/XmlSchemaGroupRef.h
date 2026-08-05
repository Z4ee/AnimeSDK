#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaGroup; }
namespace System::Xml::Schema { class XmlSchemaGroupBase; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x1DE6A2C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A360)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroupRef_TypeDefinitionIndex = 2160;

	class XmlSchemaGroupRef : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Xml::Schema::XmlSchemaGroup* refined; // 0x78
		::System::Xml::Schema::XmlSchemaGroupBase* particle; // 0x80
		::System::Xml::XmlQualifiedName* refName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF__CTOR_OFFSET))(this);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REFNAME_OFFSET))(this, value);
		}
	};
}
