#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_CLOSE_OFFSET UNITYSDK_OFFSET(0x16395020)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSADDREF_OFFSET UNITYSDK_OFFSET(0x16394E10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSGETHANDLE_OFFSET UNITYSDK_OFFSET(0x16395000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSRELEASEINTERNAL_OFFSET UNITYSDK_OFFSET(0x163951F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSRELEASE_OFFSET UNITYSDK_OFFSET(0x16394F00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x16395060)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16395040)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16394F80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x16395010)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_INTERNALDISPOSE_OFFSET UNITYSDK_OFFSET(0x16395100)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_INTERNALFINALIZE_OFFSET UNITYSDK_OFFSET(0x16395180)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_SETHANDLEASINVALID_OFFSET UNITYSDK_OFFSET(0x16395190)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_SETHANDLE_OFFSET UNITYSDK_OFFSET(0x16394FF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16394F20)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SafeHandle_TypeDefinitionIndex = 1422;

	class SafeHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
	public:
		// static const ::System::Int32 RefCount_Mask = 0x7FFFFFFC; // 0x0
		// static const ::System::Int32 RefCount_One = 0x4; // 0x0
		::System::IntPtr handle; // 0x10
		::System::Int32 _state; // 0x18
		::System::Boolean _ownsHandle; // 0x1C
		::System::Boolean _fullyInitialized; // 0x1D

		::System::Void _ctor(::System::IntPtr invalidHandleValue, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE__CTOR_OFFSET))(this, invalidHandleValue, ownsHandle);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_FINALIZE_OFFSET))(this);
		}

		::System::Void SetHandle(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_SETHANDLE_OFFSET))(this, handle);
		}

		::System::IntPtr DangerousGetHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSGETHANDLE_OFFSET))(this);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_GET_ISCLOSED_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void SetHandleAsInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_SETHANDLEASINVALID_OFFSET))(this);
		}

		::System::Void DangerousAddRef(::System::Boolean& success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSADDREF_OFFSET))(this, success);
		}

		::System::Void DangerousRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSRELEASE_OFFSET))(this);
		}

		::System::Void InternalDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_INTERNALDISPOSE_OFFSET))(this);
		}

		::System::Void InternalFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_INTERNALFINALIZE_OFFSET))(this);
		}

		::System::Void DangerousReleaseInternal(::System::Boolean dispose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_DANGEROUSRELEASEINTERNAL_OFFSET))(this, dispose);
		}
	};
}
