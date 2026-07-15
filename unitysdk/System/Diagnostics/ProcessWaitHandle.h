#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define SYSTEM_DIAGNOSTICS_PROCESSWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1916D880)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessWaitHandle_TypeDefinitionIndex = 2547;

	class ProcessWaitHandle : public ::System::Threading::WaitHandle
	{
	public:
		::System::Void _ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSWAITHANDLE__CTOR_OFFSET))(this, a1);
		}
	};
}
