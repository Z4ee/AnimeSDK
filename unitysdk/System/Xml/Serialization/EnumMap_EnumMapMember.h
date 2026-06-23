#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFFAE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int EnumMap_EnumMapMember_TypeDefinitionIndex = 1938;

	class EnumMap_EnumMapMember : public ::System::Object
	{
	public:
		::System::String* _enumName; // 0x10
		::System::String* _xmlName; // 0x18
		::System::Int64 _value; // 0x20

		::System::Void _ctor(::System::String* xmlName, ::System::String* enumName, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_ENUMMAPMEMBER__CTOR_OFFSET))(this, xmlName, enumName, value);
		}
	};
}
