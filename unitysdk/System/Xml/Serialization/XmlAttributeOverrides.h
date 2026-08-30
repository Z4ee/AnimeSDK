#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class TypeMember; }
namespace System::Xml::Serialization { class XmlAttributes; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET UNITYSDK_OFFSET(0x1B095FE0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B095E90)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B095E70)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B095E10)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeOverrides_TypeDefinitionIndex = 2003;

	class XmlAttributeOverrides : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* overrides; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* a1)
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::Serialization::TypeMember* GetKey(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::TypeMember*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET))(this, a1, a2);
		}
	};
}
