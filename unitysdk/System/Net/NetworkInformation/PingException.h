#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8978C0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D897910)
#define SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D8979A0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D897800)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PingException_TypeDefinitionIndex = 3752;

	class PingException : public ::System::InvalidOperationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}
	};
}
