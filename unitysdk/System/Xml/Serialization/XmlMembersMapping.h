#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlMapping.h"

namespace System::Xml::Serialization { class XmlMemberMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A740440)
#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A740430)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMembersMapping_TypeDefinitionIndex = 1893;

	class XmlMembersMapping : public ::System::Xml::Serialization::XmlMapping
	{
	public:
		::Il2CppArray<::System::Xml::Serialization::XmlMemberMapping*>* _mapping; // 0x48
		::System::Boolean _hasWrapperElement; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET))(this);
		}
	};
}
