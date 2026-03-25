#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162372E0)
#define SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1623CCA0)
#define SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1623CC00)

namespace System::Threading
{
	inline static constexpr unsigned int SynchronizationLockException_TypeDefinitionIndex = 843;

	class SynchronizationLockException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONLOCKEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
