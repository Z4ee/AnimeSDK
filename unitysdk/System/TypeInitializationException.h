#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1960CDD0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1960CDB0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195FAF10)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1960CD20)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1960CC60)

namespace System
{
	inline static constexpr unsigned int TypeInitializationException_TypeDefinitionIndex = 342;

	class TypeInitializationException : public ::System::SystemException
	{
	public:
		::System::String* _typeName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* fullTypeName, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, fullTypeName, innerException);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
