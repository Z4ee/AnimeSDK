#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ALLOWS_OFFSET UNITYSDK_OFFSET(0x19D38AB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELISTV1COMPAT_OFFSET UNITYSDK_OFFSET(0x19D38A30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x19D389D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTSCORRECT_OFFSET UNITYSDK_OFFSET(0x19D389C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x19D38B20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ISSUBSET_OFFSET UNITYSDK_OFFSET(0x19D38AF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_UNION_OFFSET UNITYSDK_OFFSET(0x19D38BC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D38BB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnyAttribute_TypeDefinitionIndex = 2119;

	class XmlSchemaAnyAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* ns; // 0x50
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x58
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect()
		{
			return ((::System::Xml::Schema::XmlSchemaContentProcessing(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_GET_PROCESSCONTENTSCORRECT_OFFSET))(this);
		}

		::System::Void BuildNamespaceList(::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET))(this, targetNamespace);
		}

		::System::Void BuildNamespaceListV1Compat(::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELISTV1COMPAT_OFFSET))(this, targetNamespace);
		}

		::System::Boolean Allows(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ALLOWS_OFFSET))(this, qname);
		}

		static ::System::Boolean IsSubset(::System::Xml::Schema::XmlSchemaAnyAttribute* sub, ::System::Xml::Schema::XmlSchemaAnyAttribute* super)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_ISSUBSET_OFFSET))(sub, super);
		}

		static ::System::Xml::Schema::XmlSchemaAnyAttribute* Intersection(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, ::System::Boolean v1Compat)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_INTERSECTION_OFFSET))(o1, o2, v1Compat);
		}

		static ::System::Xml::Schema::XmlSchemaAnyAttribute* Union(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, ::System::Boolean v1Compat)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_UNION_OFFSET))(o1, o2, v1Compat);
		}
	};
}
