#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading { class Mutex; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BC34570)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC34480)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC345D0)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC343F0)

namespace System::Threading
{
	inline static constexpr unsigned int AbandonedMutexException_TypeDefinitionIndex = 821;

	class AbandonedMutexException : public ::System::SystemException
	{
	public:
		::System::Threading::Mutex* m_Mutex; // 0x88
		::System::Int32 m_MutexIndex; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Threading::WaitHandle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetupException(::System::Int32 a1, ::System::Threading::WaitHandle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET))(this, a1, a2);
		}
	};
}
