#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System { class String; }

#define SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B947150)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B946F40)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B947130)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET UNITYSDK_OFFSET(0x1B947050)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B947030)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1B946F50)

namespace System::Threading
{
	inline static constexpr unsigned int NativeEventCalls_TypeDefinitionIndex = 861;

	class NativeEventCalls : public ::System::Object
	{
	public:
		static ::System::IntPtr CreateEvent_internal(::System::Boolean manual, ::System::Boolean initial, ::System::String* name, ::System::Int32& errorCode)
		{
			return ((::System::IntPtr(*)(::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET))(manual, initial, name, errorCode);
		}

		static ::System::Boolean SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET))(handle);
		}

		static ::System::Boolean SetEvent_internal(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET))(handle);
		}

		static ::System::Boolean ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET))(handle);
		}

		static ::System::Boolean ResetEvent_internal(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET))(handle);
		}

		static ::System::Void CloseEvent_internal(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET))(handle);
		}
	};
}
