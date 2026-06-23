#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberExpandable.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET UNITYSDK_OFFSET(0x1DC4A360)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET UNITYSDK_OFFSET(0x1DC49F10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4A720)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAnyElement_TypeDefinitionIndex = 1930;

	class XmlTypeMapMemberAnyElement : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsElementDefined(::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET))(this, name, ns);
		}

		::System::Boolean get_IsDefaultAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET))(this);
		}
	};
}
