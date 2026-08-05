#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSubstitutionGroup.h"

namespace System::Xml::Schema { class XmlSchemaChoice; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E365950)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSubstitutionGroupV1Compat_TypeDefinitionIndex = 2194;

	class XmlSchemaSubstitutionGroupV1Compat : public ::System::Xml::Schema::XmlSchemaSubstitutionGroup
	{
	public:
		::System::Xml::Schema::XmlSchemaChoice* choice; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT__CTOR_OFFSET))(this);
		}
	};
}
