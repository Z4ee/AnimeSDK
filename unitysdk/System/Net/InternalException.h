#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_INTERNALEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFE3A80)
#define SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE39C0)

namespace System::Net
{
	inline static constexpr unsigned int InternalException_TypeDefinitionIndex = 3293;

	class InternalException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERNALEXCEPTION__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
