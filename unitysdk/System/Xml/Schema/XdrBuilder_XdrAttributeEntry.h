#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaNames_Token.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System::Xml::Schema { class XdrBuilder_XdrBuildFunction; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRATTRIBUTEENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2D18A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRATTRIBUTEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1870)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrAttributeEntry_TypeDefinitionIndex = 2107;

	class XdrBuilder_XdrAttributeEntry : public ::System::Object
	{
	public:
		::System::Xml::Schema::XdrBuilder_XdrBuildFunction* _BuildFunc; // 0x10
		::System::Xml::Schema::XmlSchemaDatatype* _Datatype; // 0x18
		::System::Int32 _SchemaFlags; // 0x20
		::System::Xml::Schema::SchemaNames_Token _Attribute; // 0x24

		::System::Void _ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRATTRIBUTEENTRY__CTOR_OFFSET))(this, a, ttype, build);
		}

		::System::Void _ctor_1(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, ::System::Int32 schemaFlags, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, ::System::Int32, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRATTRIBUTEENTRY__CTOR_1_OFFSET))(this, a, ttype, schemaFlags, build);
		}
	};
}
