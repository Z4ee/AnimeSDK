#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading { class Mutex; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E131290)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1310D0)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E131170)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E1312F0)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E131010)

namespace System::Threading
{
	inline static constexpr unsigned int AbandonedMutexException_TypeDefinitionIndex = 807;

	class AbandonedMutexException : public ::System::SystemException
	{
	public:
		::System::Threading::Mutex* m_Mutex; // 0x88
		::System::Int32 m_MutexIndex; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Int32 location, ::System::Threading::WaitHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_2_OFFSET))(this, location, handle);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void SetupException(::System::Int32 location, ::System::Threading::WaitHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET))(this, location, handle);
		}
	};
}
