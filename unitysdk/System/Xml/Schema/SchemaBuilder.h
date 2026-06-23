#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_SCHEMA_SCHEMABUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176000)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaBuilder_TypeDefinitionIndex = 2078;

	class SchemaBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER__CTOR_OFFSET))(this);
		}
	};
}
