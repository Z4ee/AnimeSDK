#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Text { class StringBuilder; }
namespace System::Xml::Serialization { class TypeMember; }
namespace System::Xml::Serialization { class XmlAttributes; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1C7BA1F0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C7BA1A0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1C7BA0D0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C7BA0C0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BA020)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeOverrides_TypeDefinitionIndex = 1879;

	class XmlAttributeOverrides : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* overrides; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* type)
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET))(this, type);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item_1(::System::Type* type, ::System::String* member)
		{
			return ((::System::Xml::Serialization::XmlAttributes*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_1_OFFSET))(this, type, member);
		}

		::System::Xml::Serialization::TypeMember* GetKey(::System::Type* type, ::System::String* member)
		{
			return ((::System::Xml::Serialization::TypeMember*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET))(this, type, member);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
