#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle_Occurs.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1AE5DE00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1AE5DC40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE5F630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5D0B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_TypeDefinitionIndex = 2195;

	class XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		static ::System::Xml::Schema::XmlSchemaParticle** StaticGet_Empty()
		{
			return (::System::Xml::Schema::XmlSchemaParticle**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaParticle_TypeDefinitionIndex)->GetStaticField(0x15F10);
		}
		::System::Decimal minOccurs; // 0x10
		::System::Xml::Schema::XmlSchemaParticle_Occurs flags; // 0x20
		::System::Decimal maxOccurs; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void set_MinOccurs(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET))(this, a1);
		}

		::System::Void set_MaxOccurs(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET))(this, a1);
		}
	};
}
