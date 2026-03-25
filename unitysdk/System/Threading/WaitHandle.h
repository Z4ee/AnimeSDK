#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET UNITYSDK_OFFSET(0x16254270)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x16254300)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162542C0)
#define SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x16252F70)
#define SYSTEM_THREADING_WAITHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x16252E90)
#define SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET UNITYSDK_OFFSET(0x16253210)
#define SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16253050)
#define SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x16252EB0)
#define SYSTEM_THREADING_WAITHANDLE_SET_SAFEWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x16253010)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x16254150)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16253450)
#define SYSTEM_THREADING_WAITHANDLE_WAITALL_1_OFFSET UNITYSDK_OFFSET(0x16253DE0)
#define SYSTEM_THREADING_WAITHANDLE_WAITALL_OFFSET UNITYSDK_OFFSET(0x162534A0)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_1_OFFSET UNITYSDK_OFFSET(0x162541B0)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET UNITYSDK_OFFSET(0x16253DF0)
#define SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET UNITYSDK_OFFSET(0x162537A0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET UNITYSDK_OFFSET(0x16253370)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_1_OFFSET UNITYSDK_OFFSET(0x16253100)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_2_OFFSET UNITYSDK_OFFSET(0x162531D0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_3_OFFSET UNITYSDK_OFFSET(0x162527F0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_4_OFFSET UNITYSDK_OFFSET(0x162531F0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_5_OFFSET UNITYSDK_OFFSET(0x162530E0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x16253080)
#define SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x16254350)
#define SYSTEM_THREADING_WAITHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16254360)
#define SYSTEM_THREADING_WAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16252E70)

namespace System::Threading
{
	inline static constexpr unsigned int WaitHandle_TypeDefinitionIndex = 866;

	class WaitHandle : public ::System::MarshalByRefObject
	{
	public:
		static ::System::IntPtr* StaticGet_InvalidHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(WaitHandle_TypeDefinitionIndex)->GetStaticField(0x3C30);
		}
		// static const ::System::Int32 WaitTimeout = 0x102; // 0x0
		// static const ::System::Int32 MAX_WAITHANDLES = 0x40; // 0x0
		// static const ::System::Int32 WAIT_OBJECT_0 = 0x0; // 0x0
		// static const ::System::Int32 WAIT_ABANDONED = 0x80; // 0x0
		// static const ::System::Int32 WAIT_FAILED = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 ERROR_TOO_MANY_POSTS = 0x12A; // 0x0
		// static const ::System::Int32 MaxWaitHandles = 0x40; // 0x0
		::System::IntPtr waitHandle; // 0x18
		::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle; // 0x20
		::System::Boolean hasThreadAffinity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_INIT_OFFSET))(this);
		}

		::System::Void set_Handle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET))(this, value);
		}

		::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeWaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET))(this);
		}

		::System::Void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SET_SAFEWAITHANDLE_OFFSET))(this, value);
		}

		::System::Void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET))(this, handle);
		}

		::System::Boolean WaitOne(::System::Int32 millisecondsTimeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(this, millisecondsTimeout, exitContext);
		}

		::System::Boolean WaitOne_1(::System::TimeSpan timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_1_OFFSET))(this, timeout, exitContext);
		}

		::System::Boolean WaitOne_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_2_OFFSET))(this);
		}

		::System::Boolean WaitOne_3(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_3_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean WaitOne_4(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_4_OFFSET))(this, timeout);
		}

		::System::Boolean WaitOne_5(::System::Int64 timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_5_OFFSET))(this, timeout, exitContext);
		}

		static ::System::Boolean InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, ::System::Int64 millisecondsTimeout, ::System::Boolean hasThreadAffinity, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET))(waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
		}

		static ::System::Boolean WaitAll(::Il2CppArray<::System::Threading::WaitHandle*>* waitHandles, ::System::Int32 millisecondsTimeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITALL_OFFSET))(waitHandles, millisecondsTimeout, exitContext);
		}

		static ::System::Boolean WaitAll_1(::Il2CppArray<::System::Threading::WaitHandle*>* waitHandles)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::WaitHandle*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITALL_1_OFFSET))(waitHandles);
		}

		static ::System::Int32 WaitAny(::Il2CppArray<::System::Threading::WaitHandle*>* waitHandles, ::System::Int32 millisecondsTimeout, ::System::Boolean exitContext)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET))(waitHandles, millisecondsTimeout, exitContext);
		}

		static ::System::Int32 WaitAny_1(::Il2CppArray<::System::Threading::WaitHandle*>* waitHandles, ::System::TimeSpan timeout, ::System::Boolean exitContext)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_1_OFFSET))(waitHandles, timeout, exitContext);
		}

		static ::System::Void ThrowAbandonedMutexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowAbandonedMutexException_1(::System::Int32 location, ::System::Threading::WaitHandle* handle)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_1_OFFSET))(location, handle);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean explicitDisposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET))(this, explicitDisposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_1_OFFSET))(this);
		}

		static ::System::Int32 WaitMultiple(::Il2CppArray<::System::Threading::WaitHandle*>* waitHandles, ::System::Int32 millisecondsTimeout, ::System::Boolean exitContext, ::System::Boolean WaitAll)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET))(waitHandles, millisecondsTimeout, exitContext, WaitAll);
		}

		static ::System::Int32 WaitOneNative(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, ::System::UInt32 millisecondsTimeout, ::System::Boolean hasThreadAffinity, ::System::Boolean exitContext)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET))(waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
		}

		static ::System::Int32 Wait_internal(::System::IntPtr* handles, ::System::Int32 numHandles, ::System::Boolean waitAll, ::System::Int32 ms)
		{
			return ((::System::Int32(*)(::System::IntPtr*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET))(handles, numHandles, waitAll, ms);
		}
	};
}
