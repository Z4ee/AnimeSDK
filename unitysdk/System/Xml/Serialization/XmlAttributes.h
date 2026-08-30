#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ICustomAttributeProvider; }
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

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B096AC0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_SORTABLEORDER_OFFSET UNITYSDK_OFFSET(0x1B0970F0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B0969F0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B096A00)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAYITEMS_OFFSET UNITYSDK_OFFSET(0x1B096A20)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAY_OFFSET UNITYSDK_OFFSET(0x1B096A10)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B096A30)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLCHOICEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B096A40)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B096A50)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B096A60)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLIGNORE_OFFSET UNITYSDK_OFFSET(0x1B096A70)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLNS_OFFSET UNITYSDK_OFFSET(0x1B096A80)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLROOT_OFFSET UNITYSDK_OFFSET(0x1B096A90)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTEXT_OFFSET UNITYSDK_OFFSET(0x1B096AA0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1B096AB0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0961E0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B096030)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributes_TypeDefinitionIndex = 2004;

	class XmlAttributes : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlRootAttribute* xmlRoot; // 0x10
		::System::Xml::Serialization::XmlArrayAttribute* xmlArray; // 0x18
		::System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems; // 0x20
		::System::Xml::Serialization::XmlEnumAttribute* xmlEnum; // 0x28
		::System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute; // 0x30
		::System::Xml::Serialization::XmlElementAttributes* xmlElements; // 0x38
		::System::Object* xmlDefaultValue; // 0x40
		::System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements; // 0x48
		::System::Xml::Serialization::XmlTextAttribute* xmlText; // 0x50
		::System::Xml::Serialization::XmlTypeAttribute* xmlType; // 0x58
		::System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier; // 0x60
		::System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute; // 0x68
		::System::Boolean xmlns; // 0x70
		::System::Boolean xmlIgnore; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::ICustomAttributeProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlAnyAttributeAttribute* get_XmlAnyAttribute()
		{
			return ((::System::Xml::Serialization::XmlAnyAttributeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYATTRIBUTE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAnyElementAttributes* get_XmlAnyElements()
		{
			return ((::System::Xml::Serialization::XmlAnyElementAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYELEMENTS_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlArrayAttribute* get_XmlArray()
		{
			return ((::System::Xml::Serialization::XmlArrayAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAY_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlArrayItemAttributes* get_XmlArrayItems()
		{
			return ((::System::Xml::Serialization::XmlArrayItemAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAYITEMS_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAttributeAttribute* get_XmlAttribute()
		{
			return ((::System::Xml::Serialization::XmlAttributeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLATTRIBUTE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlChoiceIdentifierAttribute* get_XmlChoiceIdentifier()
		{
			return ((::System::Xml::Serialization::XmlChoiceIdentifierAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLCHOICEIDENTIFIER_OFFSET))(this);
		}

		::System::Object* get_XmlDefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLDEFAULTVALUE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlElementAttributes* get_XmlElements()
		{
			return ((::System::Xml::Serialization::XmlElementAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLELEMENTS_OFFSET))(this);
		}

		::System::Boolean get_XmlIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLIGNORE_OFFSET))(this);
		}

		::System::Boolean get_Xmlns()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLNS_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlRootAttribute* get_XmlRoot()
		{
			return ((::System::Xml::Serialization::XmlRootAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLROOT_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTextAttribute* get_XmlText()
		{
			return ((::System::Xml::Serialization::XmlTextAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTEXT_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeAttribute* get_XmlType()
		{
			return ((::System::Xml::Serialization::XmlTypeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTYPE_OFFSET))(this);
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
