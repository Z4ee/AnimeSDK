#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaExternal.h"

namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1B2ADC90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ADB50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaRedefine_TypeDefinitionIndex = 2183;

	class XmlSchemaRedefine : public ::System::Xml::Schema::XmlSchemaExternal
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x68
		::System::Xml::Schema::XmlSchemaObjectTable* groups; // 0x70
		::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x78
		::System::Xml::Schema::XmlSchemaObjectTable* types; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE__CTOR_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_ADDANNOTATION_OFFSET))(this, annotation);
		}
	};
}
