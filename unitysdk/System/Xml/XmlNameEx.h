#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"
#include "unitysdk/System/Xml/XmlName.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1693D7C0)
#define SYSTEM_XML_XMLNAMEEX_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1693D680)
#define SYSTEM_XML_XMLNAMEEX_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1693D690)
#define SYSTEM_XML_XMLNAMEEX_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1693D6A0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1693D740)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1693D6C0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1693D6B0)
#define SYSTEM_XML_XMLNAMEEX_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1693D650)
#define SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1693D630)
#define SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET UNITYSDK_OFFSET(0x1693D640)
#define SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET UNITYSDK_OFFSET(0x1693D620)
#define SYSTEM_XML_XMLNAMEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1693CD80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameEx_TypeDefinitionIndex = 1903;

	class XmlNameEx : public ::System::Xml::XmlName
	{
	public:
		::System::Object* decl; // 0x48
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x58
		::System::Byte flags; // 0x60

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Xml::XmlDocument* a5, ::System::Xml::XmlName* a6, ::System::Xml::Schema::IXmlSchemaInfo* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Xml::Schema::XmlSchemaValidity get_Validity()
		{
			return ((::System::Xml::Schema::XmlSchemaValidity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_VALIDITY_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_ISNIL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}

		::System::Void SetValidity(::System::Xml::Schema::XmlSchemaValidity a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidity))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET))(this, a1);
		}

		::System::Void SetIsDefault(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET))(this, a1);
		}

		::System::Void SetIsNil(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET))(this, a1);
		}
	};
}
