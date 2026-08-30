#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberExpandable.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET UNITYSDK_OFFSET(0x1E8726C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET UNITYSDK_OFFSET(0x1E86F0B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E847B40)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAnyElement_TypeDefinitionIndex = 2053;

	class XmlTypeMapMemberAnyElement : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsElementDefined(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsDefaultAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET))(this);
		}
	};
}
