#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C06F500)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C06F590)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C06F620)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C06F8D0)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06F470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InvalidEnumArgumentException_TypeDefinitionIndex = 2922;

	class InvalidEnumArgumentException : public ::System::ArgumentException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::String* argumentName, ::System::Int32 invalidValue, ::System::Type* enumClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_3_OFFSET))(this, argumentName, invalidValue, enumClass);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}
	};
}
