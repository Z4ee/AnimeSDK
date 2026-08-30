#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x17C80920)
#define SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x17C80590)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComplianceUtil_TypeDefinitionIndex = 1940;

	class XmlComplianceUtil : public ::System::Object
	{
	public:
		static ::System::String* NonCDataNormalize(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET))(a1);
		}

		static ::System::String* CDataNormalize(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET))(a1);
		}
	};
}
