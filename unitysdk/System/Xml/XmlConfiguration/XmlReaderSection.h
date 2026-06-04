#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_COLLAPSEWHITESPACEINTOEMPTYSTRING_OFFSET UNITYSDK_OFFSET(0x1AEAAF80)
#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_PROHIBITDEFAULTURLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1AEAB250)

namespace System::Xml::XmlConfiguration
{
	inline static constexpr unsigned int XmlReaderSection_TypeDefinitionIndex = 2230;

	class XmlReaderSection : public ::System::Object
	{
	public:
		static ::System::Boolean get_ProhibitDefaultUrlResolver()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_PROHIBITDEFAULTURLRESOLVER_OFFSET))();
		}

		static ::System::Boolean get_CollapseWhiteSpaceIntoEmptyString()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_COLLAPSEWHITESPACEINTOEMPTYSTRING_OFFSET))();
		}
	};
}
