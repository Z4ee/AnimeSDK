#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaExternal.h"

namespace System::Xml::Schema { class XmlSchemaAnnotation; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1DE6A450)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A440)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInclude_TypeDefinitionIndex = 2167;

	class XmlSchemaInclude : public ::System::Xml::Schema::XmlSchemaExternal
	{
	public:
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE__CTOR_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_ADDANNOTATION_OFFSET))(this, annotation);
		}
	};
}
