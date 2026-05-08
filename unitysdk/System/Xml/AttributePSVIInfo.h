#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class XmlSchemaInfo; }

#define SYSTEM_XML_ATTRIBUTEPSVIINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1B991DC0)
#define SYSTEM_XML_ATTRIBUTEPSVIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B991D60)

namespace System::Xml
{
	inline static constexpr unsigned int AttributePSVIInfo_TypeDefinitionIndex = 1747;

	class AttributePSVIInfo : public ::System::Object
	{
	public:
		::System::String* namespaceUri; // 0x10
		::System::String* localName; // 0x18
		::System::Xml::Schema::XmlSchemaInfo* attributeSchemaInfo; // 0x20
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
