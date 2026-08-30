#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B99FA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B890C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19B95E40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19B99F50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99EC0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationException_TypeDefinitionIndex = 1128;

	class SerializationException : public ::System::SystemException
	{
	public:
		static ::System::String** StaticGet__nullMessage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SerializationException_TypeDefinitionIndex)->GetStaticField(0x15A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET))();
		}
	};
}
