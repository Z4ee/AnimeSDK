#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class CompiledIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaXPath; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFFCC50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFFCC60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFCC70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaIdentityConstraint_TypeDefinitionIndex = 2162;

	class XmlSchemaIdentityConstraint : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::XmlQualifiedName* qualifiedName; // 0x58
		::System::Xml::Schema::XmlSchemaXPath* selector; // 0x60
		::System::Xml::Schema::XmlSchemaObjectCollection* fields; // 0x68
		::System::Xml::Schema::CompiledIdentityConstraint* compiledConstraint; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}
	};
}
