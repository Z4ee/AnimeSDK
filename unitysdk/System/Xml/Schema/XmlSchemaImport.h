#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaExternal.h"

namespace System { class String; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1DE46650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE46640)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaImport_TypeDefinitionIndex = 2166;

	class XmlSchemaImport : public ::System::Xml::Schema::XmlSchemaExternal
	{
	public:
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x68
		::System::String* ns; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT__CTOR_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_ADDANNOTATION_OFFSET))(this, annotation);
		}
	};
}
