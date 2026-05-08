#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaGroupBase; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaParticle; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_1_OFFSET UNITYSDK_OFFSET(0x1B99A190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1B99A180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B99A160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B99A170)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99A370)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroup_TypeDefinitionIndex = 2159;

	class XmlSchemaGroup : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Xml::Schema::XmlSchemaGroupBase* particle; // 0x50
		::System::String* name; // 0x58
		::System::Xml::Schema::XmlSchemaGroup* redefined; // 0x60
		::System::Xml::XmlQualifiedName* qname; // 0x68
		::System::Xml::Schema::XmlSchemaParticle* canonicalParticle; // 0x70
		::System::Int32 selfReferenceCount; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP__CTOR_OFFSET))(this);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone_1(::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_1_OFFSET))(this, parentSchema);
		}
	};
}
