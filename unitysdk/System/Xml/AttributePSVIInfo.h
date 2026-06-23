#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class XmlSchemaInfo; }

#define SYSTEM_XML_ATTRIBUTEPSVIINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1DD19CA0)
#define SYSTEM_XML_ATTRIBUTEPSVIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19C40)

namespace System::Xml
{
	inline static constexpr unsigned int AttributePSVIInfo_TypeDefinitionIndex = 1746;

	class AttributePSVIInfo : public ::System::Object
	{
	public:
		::System::String* localName; // 0x10
		::System::Xml::Schema::XmlSchemaInfo* attributeSchemaInfo; // 0x18
		::System::String* namespaceUri; // 0x20
		::System::Object* typedAttributeValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ATTRIBUTEPSVIINFO__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ATTRIBUTEPSVIINFO_RESET_OFFSET))(this);
		}
	};
}
