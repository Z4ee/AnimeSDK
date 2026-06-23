#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaNames_Token.h"

namespace System::Xml::Schema { class XsdBuilder_XsdBuildFunction; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDATTRIBUTEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA29AA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_XsdAttributeEntry_TypeDefinitionIndex = 2224;

	class XsdBuilder_XsdAttributeEntry : public ::System::Object
	{
	public:
		::System::Xml::Schema::XsdBuilder_XsdBuildFunction* BuildFunc; // 0x10
		::System::Xml::Schema::SchemaNames_Token Attribute; // 0x18

		::System::Void _ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDATTRIBUTEENTRY__CTOR_OFFSET))(this, a, build);
		}
	};
}
