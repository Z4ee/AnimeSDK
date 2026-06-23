#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFEDD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAppInfo_TypeDefinitionIndex = 2119;

	class XmlSchemaAppInfo : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::Il2CppArray<::System::Xml::XmlNode*>* markup; // 0x38
		::System::String* source; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO__CTOR_OFFSET))(this);
		}
	};
}
