#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_ENUMNAME_OFFSET UNITYSDK_OFFSET(0x19685E00)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19685E10)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x19685DF0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19685DE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int EnumMap_EnumMapMember_TypeDefinitionIndex = 2054;

	class EnumMap_EnumMapMember : public ::System::Object
	{
	public:
		::System::String* _enumName; // 0x10
		::System::String* _xmlName; // 0x18
		::System::Int64 _value; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_XmlName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_XMLNAME_OFFSET))(this);
		}

		::System::String* get_EnumName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_ENUMNAME_OFFSET))(this);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER_GET_VALUE_OFFSET))(this);
		}
	};
}
