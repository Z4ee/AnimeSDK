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

#define SYSTEM_XML_XMLNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1DE43180)
#define SYSTEM_XML_XMLNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE434E0)
#define SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE434F0)
#define SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1DE43480)
#define SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1DE43490)
#define SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1DE434A0)
#define SYSTEM_XML_XMLNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DE43290)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DE434D0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1DE434C0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1DE434B0)
#define SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1DE43470)
#define SYSTEM_XML_XMLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE43260)

namespace System::Xml
{
	inline static constexpr unsigned int XmlName_TypeDefinitionIndex = 1772;

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
