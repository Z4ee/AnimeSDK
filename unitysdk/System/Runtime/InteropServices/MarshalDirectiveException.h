#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C685B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18C68640)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C684F0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MarshalDirectiveException_TypeDefinitionIndex = 1434;

	class MarshalDirectiveException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
