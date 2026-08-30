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

#define SYSTEM_XML_XMLNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1E8B13E0)
#define SYSTEM_XML_XMLNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B1D00)
#define SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B1D10)
#define SYSTEM_XML_XMLNAME_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B1C70)
#define SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E8B1CA0)
#define SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1E8B1CB0)
#define SYSTEM_XML_XMLNAME_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E8B1C40)
#define SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1E8B1CC0)
#define SYSTEM_XML_XMLNAME_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1E8B1C50)
#define SYSTEM_XML_XMLNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E899390)
#define SYSTEM_XML_XMLNAME_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E8B1C80)
#define SYSTEM_XML_XMLNAME_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1E8B1C60)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E8B1CF0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1E8B1CE0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1E8B1CD0)
#define SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1E8B1C90)
#define SYSTEM_XML_XMLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B14C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlName_TypeDefinitionIndex = 1909;

	class XmlName : public ::System::Object
	{
	public:
		::System::String* prefix; // 0x10
		::System::Xml::XmlName* next; // 0x18
		::System::Xml::XmlDocument* ownerDoc; // 0x20
		::System::String* localName; // 0x28
		::System::String* name; // 0x30
		::System::String* ns; // 0x38
		::System::Int32 hashCode; // 0x40

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Xml::XmlDocument* a5, ::System::Xml::XmlName* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Xml::XmlName* Create(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Xml::XmlDocument* a5, ::System::Xml::XmlName* a6, ::System::Xml::Schema::IXmlSchemaInfo* a7)
		{
			return ((::System::Xml::XmlName*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
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

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET))(a1);
		}
	};
}
