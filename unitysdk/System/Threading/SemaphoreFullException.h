#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199867C0)
#define SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19986720)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreFullException_TypeDefinitionIndex = 835;

	class SemaphoreFullException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
