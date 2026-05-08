#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Compositor.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml::Schema { class XmlSchema; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A45E220)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A45E240)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A45E230)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45E250)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaExternal_TypeDefinitionIndex = 2142;

	class XmlSchemaExternal : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::System::Uri* baseUri; // 0x38
		::System::String* id; // 0x40
		::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes; // 0x48
		::System::Xml::Schema::XmlSchema* schema; // 0x50
		::System::String* location; // 0x58
		::System::Xml::Schema::Compositor compositor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL__CTOR_OFFSET))(this);
		}

		::System::String* get_IdAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_IDATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IdAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_IDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SETUNHANDLEDATTRIBUTES_OFFSET))(this, moreAttributes);
		}
	};
}
