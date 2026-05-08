#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_BASEEQUALS_OFFSET UNITYSDK_OFFSET(0x198926A0)
#define SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19892690)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int SerializationSource_TypeDefinitionIndex = 1867;

	class SerializationSource : public ::System::Object
	{
	public:
		::System::String* namspace; // 0x10
		::Il2CppArray<::System::Type*>* includedTypes; // 0x18
		::System::Boolean canBeGenerated; // 0x20

		::System::Void _ctor(::System::String* namspace, ::Il2CppArray<::System::Type*>* includedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE__CTOR_OFFSET))(this, namspace, includedTypes);
		}

		::System::Boolean BaseEquals(::System::Xml::Serialization::SerializationSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::SerializationSource*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_BASEEQUALS_OFFSET))(this, other);
		}
	};
}
