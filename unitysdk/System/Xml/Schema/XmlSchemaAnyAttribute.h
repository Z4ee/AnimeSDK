#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"

namespace System { class String; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x185ADE90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x185ADE80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185ADEF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnyAttribute_TypeDefinitionIndex = 2174;

	class XmlSchemaAnyAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* ns; // 0x10
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x18
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentProcessing))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_SET_PROCESSCONTENTS_OFFSET))(this, value);
		}

		::System::Void BuildNamespaceList(::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANYATTRIBUTE_BUILDNAMESPACELIST_OFFSET))(this, targetNamespace);
		}
	};
}
