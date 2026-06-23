#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization { class SerializationEvents; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_GETSERIALIZATIONEVENTSFORTYPE_OFFSET UNITYSDK_OFFSET(0x1B8B0760)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B0A80)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEventsCache_TypeDefinitionIndex = 1166;

	class SerializationEventsCache : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_cache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SerializationEventsCache_TypeDefinitionIndex)->GetStaticField(0x700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::SerializationEvents* GetSerializationEventsForType(::System::Type* t)
		{
			return ((::System::Runtime::Serialization::SerializationEvents*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_GETSERIALIZATIONEVENTSFORTYPE_OFFSET))(t);
		}
	};
}
