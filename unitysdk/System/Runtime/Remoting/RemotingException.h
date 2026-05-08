#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C6C030)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18C6C0C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18C6C110)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6BF70)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingException_TypeDefinitionIndex = 1254;

	class RemotingException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* InnerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_3_OFFSET))(this, message, InnerException);
		}
	};
}
