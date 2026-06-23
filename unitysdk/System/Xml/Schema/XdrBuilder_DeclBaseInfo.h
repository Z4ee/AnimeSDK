#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_DECLBASEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1C16DAE0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_DECLBASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16DA30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_DeclBaseInfo_TypeDefinitionIndex = 2099;

	class XdrBuilder_DeclBaseInfo : public ::System::Object
	{
	public:
		::System::String* _Prefix; // 0x10
		::System::Xml::Schema::SchemaAttDef* _Attdef; // 0x18
		::System::Xml::Schema::SchemaElementDecl* _ElementDecl; // 0x20
		::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _Next; // 0x28
		::System::Xml::XmlQualifiedName* _TypeName; // 0x30
		::System::Object* _Revises; // 0x38
		::System::Object* _Default; // 0x40
		::System::Xml::XmlQualifiedName* _Name; // 0x48
		::System::String* _TypePrefix; // 0x50
		::System::Boolean _Checking; // 0x58
		::System::UInt32 _MinOccurs; // 0x5C
		::System::UInt32 _MaxOccurs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_DECLBASEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_DECLBASEINFO_RESET_OFFSET))(this);
		}
	};
}
