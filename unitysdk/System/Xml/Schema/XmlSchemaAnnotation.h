#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1F10B380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F10B3A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1F10B390)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B3B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnnotation_TypeDefinitionIndex = 2116;

	class XmlSchemaAnnotation : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x38
		::System::String* id; // 0x40
		::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION__CTOR_OFFSET))(this);
		}

		::System::String* get_IdAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_IDATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IdAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_IDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SETUNHANDLEDATTRIBUTES_OFFSET))(this, moreAttributes);
		}
	};
}
