#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_XMLNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1A05A980)
#define SYSTEM_XML_XMLNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A05B040)
#define SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A05B050)
#define SYSTEM_XML_XMLNAME_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1A05AFB0)
#define SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A05AFE0)
#define SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1A05AFF0)
#define SYSTEM_XML_XMLNAME_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A05AF80)
#define SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1A05B000)
#define SYSTEM_XML_XMLNAME_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1A05AF90)
#define SYSTEM_XML_XMLNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A0497C0)
#define SYSTEM_XML_XMLNAME_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A05AFC0)
#define SYSTEM_XML_XMLNAME_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A05AFA0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A05B030)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1A05B020)
#define SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1A05B010)
#define SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1A05AFD0)
#define SYSTEM_XML_XMLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05AA60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlName_TypeDefinitionIndex = 1898;

	class XmlName : public ::System::Object
	{
	public:
		::System::String* localName; // 0x10
		::System::Xml::XmlName* next; // 0x18
		::System::String* prefix; // 0x20
		::System::String* ns; // 0x28
		::System::Xml::XmlDocument* ownerDoc; // 0x30
		::System::String* name; // 0x38
		::System::Int32 hashCode; // 0x40

		::System::Void _ctor(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::Int32 hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME__CTOR_OFFSET))(this, prefix, localName, ns, hashCode, ownerDoc, next);
		}

		static ::System::Xml::XmlName* Create(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::Int32 hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_CREATE_OFFSET))(prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_PREFIX_OFFSET))(this);
		}

		::System::Int32 get_HashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_HASHCODE_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_NAME_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaValidity get_Validity()
		{
			return ((::System::Xml::Schema::XmlSchemaValidity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_EQUALS_OFFSET))(this, schemaInfo);
		}

		static ::System::Int32 GetHashCode(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET))(name);
		}
	};
}
