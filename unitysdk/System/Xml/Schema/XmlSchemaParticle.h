#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle_Occurs.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x185AEB80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x185AE9C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B0400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x185ADE40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_TypeDefinitionIndex = 2194;

	class XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		static ::System::Xml::Schema::XmlSchemaParticle** StaticGet_Empty()
		{
			return (::System::Xml::Schema::XmlSchemaParticle**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaParticle_TypeDefinitionIndex)->GetStaticField(0x8430);
		}
		::System::Xml::Schema::XmlSchemaParticle_Occurs flags; // 0x10
		::System::Decimal maxOccurs; // 0x14
		::System::Decimal minOccurs; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void set_MinOccurs(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET))(this, value);
		}

		::System::Void set_MaxOccurs(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET))(this, value);
		}
	};
}
