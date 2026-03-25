#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x185ADF10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCompilationSettings_TypeDefinitionIndex = 2177;

	class XmlSchemaCompilationSettings : public ::System::Object
	{
	public:
		::System::Boolean enableUpaCheck; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
