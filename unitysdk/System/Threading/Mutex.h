#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace System { class String; }

#define SYSTEM_THREADING_MUTEX_CREATEMUTEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E415910)
#define SYSTEM_THREADING_MUTEX_RELEASEMUTEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E4158F0)
#define SYSTEM_THREADING_MUTEX_RELEASEMUTEX_OFFSET UNITYSDK_OFFSET(0x1E415A70)
#define SYSTEM_THREADING_MUTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E415A20)
#define SYSTEM_THREADING_MUTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E415920)

namespace System::Threading
{
	inline static constexpr unsigned int Mutex_TypeDefinitionIndex = 860;

	class Mutex : public ::System::Threading::WaitHandle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MUTEX__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean initiallyOwned)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MUTEX__CTOR_1_OFFSET))(this, initiallyOwned);
		}

		static ::System::Boolean ReleaseMutex_internal(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MUTEX_RELEASEMUTEX_INTERNAL_OFFSET))(handle);
		}

		static ::System::IntPtr CreateMutex_internal(::System::Boolean initiallyOwned, ::System::String* name, ::System::Boolean& created)
		{
			return ((::System::IntPtr(*)(::System::Boolean, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MUTEX_CREATEMUTEX_INTERNAL_OFFSET))(initiallyOwned, name, created);
		}

		::System::Void ReleaseMutex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MUTEX_RELEASEMUTEX_OFFSET))(this);
		}
	};
}
