#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF41AF0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF41A10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DF2CC40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DF41AA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF41920)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationException_TypeDefinitionIndex = 1167;

	class SerializationException : public ::System::SystemException
	{
	public:
		static ::System::String** StaticGet__nullMessage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SerializationException_TypeDefinitionIndex)->GetStaticField(0x12A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET))();
		}
	};
}
