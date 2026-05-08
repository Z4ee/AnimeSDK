#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Text { class StringBuilder; }
namespace System::Xml::Serialization { class XmlAnyAttributeAttribute; }
namespace System::Xml::Serialization { class XmlAnyElementAttributes; }
namespace System::Xml::Serialization { class XmlArrayAttribute; }
namespace System::Xml::Serialization { class XmlArrayItemAttributes; }
namespace System::Xml::Serialization { class XmlAttributeAttribute; }
namespace System::Xml::Serialization { class XmlChoiceIdentifierAttribute; }
namespace System::Xml::Serialization { class XmlElementAttributes; }
namespace System::Xml::Serialization { class XmlEnumAttribute; }
namespace System::Xml::Serialization { class XmlRootAttribute; }
namespace System::Xml::Serialization { class XmlTextAttribute; }
namespace System::Xml::Serialization { class XmlTypeAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1AB23A20)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1AB23CC0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_SORTABLEORDER_OFFSET UNITYSDK_OFFSET(0x1AB23D90)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB23130)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB22EC0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributes_TypeDefinitionIndex = 1881;

	class XmlAttributes : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems; // 0x10
		::System::Xml::Serialization::XmlTextAttribute* xmlText; // 0x18
		::System::Xml::Serialization::XmlTypeAttribute* xmlType; // 0x20
		::System::Xml::Serialization::XmlEnumAttribute* xmlEnum; // 0x28
		::System::Xml::Serialization::XmlRootAttribute* xmlRoot; // 0x30
		::System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements; // 0x38
		::System::Xml::Serialization::XmlElementAttributes* xmlElements; // 0x40
		::System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute; // 0x48
		::System::Object* xmlDefaultValue; // 0x50
		::System::Xml::Serialization::XmlArrayAttribute* xmlArray; // 0x58
		::System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute; // 0x60
		::System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier; // 0x68
		::System::Boolean xmlns; // 0x70
		::System::Boolean xmlIgnore; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::ICustomAttributeProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_1_OFFSET))(this, provider);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_ADDKEYHASH_OFFSET))(this, sb);
		}

		::System::Nullable_1<::System::Int32> get_Order()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_ORDER_OFFSET))(this);
		}

		::System::Int32 get_SortableOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_SORTABLEORDER_OFFSET))(this);
		}
	};
}
