#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_XML_LINQ_NAMESERIALIZER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x19F8FF20)
#define SYSTEM_XML_LINQ_NAMESERIALIZER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19F90180)
#define SYSTEM_XML_LINQ_NAMESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8FEA0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NameSerializer_TypeDefinitionIndex = 4896;

	class NameSerializer : public ::System::Object
	{
	public:
		::System::String* expandedName; // 0x10

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESERIALIZER__CTOR_OFFSET))(this, info, context);
		}

		::System::Object* System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESERIALIZER_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET))(this, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESERIALIZER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
