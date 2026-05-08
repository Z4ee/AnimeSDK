#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle_Occurs.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1B5941E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B594110)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x1B5937B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x1B5935B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x1B5941D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x1B593910)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1B593DF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x1B593630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1B593BA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5943A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B594330)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_TypeDefinitionIndex = 2180;

	class XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		static ::System::Xml::Schema::XmlSchemaParticle** StaticGet_Empty()
		{
			return (::System::Xml::Schema::XmlSchemaParticle**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaParticle_TypeDefinitionIndex)->GetStaticField(0x1870);
		}
		::System::Decimal minOccurs; // 0x50
		::System::Xml::Schema::XmlSchemaParticle_Occurs flags; // 0x60
		::System::Decimal maxOccurs; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE__CCTOR_OFFSET))();
		}

		::System::String* get_MinOccursString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURSSTRING_OFFSET))(this);
		}

		::System::Void set_MinOccursString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURSSTRING_OFFSET))(this, value);
		}

		::System::String* get_MaxOccursString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURSSTRING_OFFSET))(this);
		}

		::System::Void set_MaxOccursString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURSSTRING_OFFSET))(this, value);
		}

		::System::Void set_MinOccurs(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET))(this, value);
		}

		::System::Void set_MaxOccurs(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::String* get_NameString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_NAMESTRING_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* GetQualifiedName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GETQUALIFIEDNAME_OFFSET))(this);
		}
	};
}
