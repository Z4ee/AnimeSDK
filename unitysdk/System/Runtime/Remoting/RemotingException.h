#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19438D00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19458190)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x194581E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x194580F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingException_TypeDefinitionIndex = 1217;

	class RemotingException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
