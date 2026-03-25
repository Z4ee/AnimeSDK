#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_THREADINTERRUPTEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1624DAA0)
#define SYSTEM_THREADING_THREADINTERRUPTEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1624DA10)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadInterruptedException_TypeDefinitionIndex = 848;

	class ThreadInterruptedException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADINTERRUPTEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADINTERRUPTEDEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
