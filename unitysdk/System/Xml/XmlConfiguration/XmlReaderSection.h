#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlResolver; }

#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1CFBF7A0)
#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF7E0)

namespace System::Xml::XmlConfiguration
{
	inline static constexpr unsigned int XmlReaderSection_TypeDefinitionIndex = 2236;

	class XmlReaderSection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Xml::XmlResolver* CreateDefaultResolver()
		{
			return ((::System::Xml::XmlResolver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_CREATEDEFAULTRESOLVER_OFFSET))();
		}
	};
}
