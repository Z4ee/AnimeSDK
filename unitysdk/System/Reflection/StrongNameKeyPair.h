#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C440BD0)
#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C440A50)
#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C440900)

namespace System::Reflection
{
	inline static constexpr unsigned int StrongNameKeyPair_TypeDefinitionIndex = 638;

	class StrongNameKeyPair : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _publicKey; // 0x10
		::Il2CppArray<::System::Byte>* _keyPairArray; // 0x18
		::System::Security::Cryptography::RSA* _rsa; // 0x20
		::System::String* _keyPairContainer; // 0x28
		::System::Boolean _keyPairExported; // 0x30

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}
	};
}
