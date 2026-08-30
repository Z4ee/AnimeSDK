#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlMapping.h"

namespace System::Xml::Serialization { class XmlMemberMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17C3ADD0)
#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_HASWRAPPERELEMENT_OFFSET UNITYSDK_OFFSET(0x17C3ADF0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMembersMapping_TypeDefinitionIndex = 2016;

	class XmlMembersMapping : public ::System::Xml::Serialization::XmlMapping
	{
	public:
		::Il2CppArray<::System::Xml::Serialization::XmlMemberMapping*>* _mapping; // 0x40
		::System::Boolean _hasWrapperElement; // 0x48

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_HasWrapperElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_HASWRAPPERELEMENT_OFFSET))(this);
		}
	};
}
