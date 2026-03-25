#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml::Serialization { class XmlAttributes; }

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x185D4260)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x185D4230)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x185D4240)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x185D4250)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x185D0650)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x185D4270)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x185D16F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionMember_TypeDefinitionIndex = 2008;

	class XmlReflectionMember : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlAttributes* xmlAttributes; // 0x10
		::System::Type* memberType; // 0x18
		::System::Type* declaringType; // 0x20
		::System::String* memberName; // 0x28
		::System::Boolean isReturnValue; // 0x30

		::System::Void _ctor(::System::String* name, ::System::Type* type, ::System::Xml::Serialization::XmlAttributes* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER__CTOR_OFFSET))(this, name, type, attributes);
		}

		::System::Boolean get_IsReturnValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_ISRETURNVALUE_OFFSET))(this);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Type* get_MemberType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAttributes* get_XmlAttributes()
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void set_DeclaringType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_SET_DECLARINGTYPE_OFFSET))(this, value);
		}
	};
}
