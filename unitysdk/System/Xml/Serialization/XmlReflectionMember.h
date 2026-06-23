#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml::Serialization { class XmlAttributes; }

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D2DD120)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2DE020)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E0240)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionMember_TypeDefinitionIndex = 1896;

	class XmlReflectionMember : public ::System::Object
	{
	public:
		::System::String* memberName; // 0x10
		::System::Xml::Serialization::XmlAttributes* xmlAttributes; // 0x18
		::System::Type* declaringType; // 0x20
		::System::Type* memberType; // 0x28
		::System::Boolean isReturnValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type, ::System::Xml::Serialization::XmlAttributes* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_1_OFFSET))(this, name, type, attributes);
		}

		::System::Xml::Serialization::XmlAttributes* get_XmlAttributes()
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET))(this);
		}
	};
}
