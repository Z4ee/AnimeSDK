#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x185FE690)
#define SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x185FE300)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComplianceUtil_TypeDefinitionIndex = 1928;

	class XmlComplianceUtil : public ::System::Object
	{
	public:
		static ::System::String* NonCDataNormalize(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET))(value);
		}

		static ::System::String* CDataNormalize(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET))(value);
		}
	};
}
