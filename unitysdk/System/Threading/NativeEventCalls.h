#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System { class String; }

#define SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3E75A0)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3E2D00)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3E7580)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET UNITYSDK_OFFSET(0x1B3E2D60)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3E7560)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1B3E2E40)

namespace System::Threading
{
	inline static constexpr unsigned int NativeEventCalls_TypeDefinitionIndex = 875;

	class NativeEventCalls : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateEvent_internal(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3, ::System::Int32& a4)
		{
			return ((::System::IntPtr(*)(::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* a1)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET))(a1);
		}

		static ::System::Boolean SetEvent_internal(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* a1)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET))(a1);
		}

		static ::System::Boolean ResetEvent_internal(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void CloseEvent_internal(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET))(a1);
		}
	};
}
