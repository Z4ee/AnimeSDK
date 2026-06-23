#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBD480)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSubstitutionGroup_TypeDefinitionIndex = 2193;

	class XmlSchemaSubstitutionGroup : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::System::Collections::ArrayList* membersList; // 0x38
		::System::Xml::XmlQualifiedName* examplar; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP__CTOR_OFFSET))(this);
		}
	};
}
