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

#define SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x186207B0)
#define SYSTEM_XML_XMLNAMEEX_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x18620690)
#define SYSTEM_XML_XMLNAMEEX_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x186206A0)
#define SYSTEM_XML_XMLNAMEEX_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x186206B0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18620740)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x186206D0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x186206C0)
#define SYSTEM_XML_XMLNAMEEX_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x18620660)
#define SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET UNITYSDK_OFFSET(0x18620640)
#define SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET UNITYSDK_OFFSET(0x18620650)
#define SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET UNITYSDK_OFFSET(0x18620630)
#define SYSTEM_XML_XMLNAMEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1861FFF0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameEx_TypeDefinitionIndex = 1898;

	class XmlNameEx : public ::System::Xml::XmlName
	{
	public:
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x48
		::System::Object* decl; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x58
		::System::Byte flags; // 0x60

		::System::Void _ctor(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::Int32 hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX__CTOR_OFFSET))(this, prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo);
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

		::System::Void SetValidity(::System::Xml::Schema::XmlSchemaValidity value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidity))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET))(this, value);
		}

		::System::Void SetIsDefault(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET))(this, value);
		}

		::System::Void SetIsNil(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET))(this, schemaInfo);
		}
	};
}
