#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_INCLUDEINSCHEMA_OFFSET UNITYSDK_OFFSET(0x1E871C10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E871C20)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1E843210)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeAttribute_TypeDefinitionIndex = 2044;

	class XmlTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* typeName; // 0x18
		::System::Boolean includeInSchema; // 0x20

		::System::Boolean get_IncludeInSchema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_INCLUDEINSCHEMA_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET))(this);
		}
	};
}
