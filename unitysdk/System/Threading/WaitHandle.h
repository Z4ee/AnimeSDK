#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A73F550)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A73F6D0)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A73F630)
#define SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1A73E200)
#define SYSTEM_THREADING_WAITHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x1A73E0F0)
#define SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET UNITYSDK_OFFSET(0x1A73E5A0)
#define SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A73E300)
#define SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1A73E110)
#define SYSTEM_THREADING_WAITHANDLE_SET_SAFEWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1A73E2C0)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A73F430)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A73E7E0)
#define SYSTEM_THREADING_WAITHANDLE_WAITALL_1_OFFSET UNITYSDK_OFFSET(0x1A73F110)
#define SYSTEM_THREADING_WAITHANDLE_WAITALL_OFFSET UNITYSDK_OFFSET(0x1A73E830)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_1_OFFSET UNITYSDK_OFFSET(0x1A73F490)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET UNITYSDK_OFFSET(0x1A73F120)
#define SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1A73EAF0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET UNITYSDK_OFFSET(0x1A73E700)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_1_OFFSET UNITYSDK_OFFSET(0x1A73E3B0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_2_OFFSET UNITYSDK_OFFSET(0x1A73E480)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_3_OFFSET UNITYSDK_OFFSET(0x1A73DD40)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_4_OFFSET UNITYSDK_OFFSET(0x1A73E510)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_5_OFFSET UNITYSDK_OFFSET(0x1A73E390)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x1A73E330)
#define SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A73F7B0)
#define SYSTEM_THREADING_WAITHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A73F7C0)
#define SYSTEM_THREADING_WAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73E0D0)

namespace System::Threading
{
	inline static constexpr unsigned int WaitHandle_TypeDefinitionIndex = 867;

	class WaitHandle : public ::System::MarshalByRefObject
	{
	public:
		static ::System::IntPtr* StaticGet_InvalidHandle()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(WaitHandle_TypeDefinitionIndex)->GetStaticField(0x6B00);
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

		::System::Void set_Handle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET))(this, a1);
		}

		::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeWaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET))(this);
		}

		::System::Void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SET_SAFEWAITHANDLE_OFFSET))(this, a1);
		}

		::System::Void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean WaitOne(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(this, a1, a2);
		}

		::System::Boolean WaitOne_1(::System::TimeSpan a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean WaitOne_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_2_OFFSET))(this);
		}

		::System::Boolean WaitOne_3(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_3_OFFSET))(this, a1);
		}

		::System::Boolean WaitOne_4(::System::TimeSpan a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_4_OFFSET))(this, a1);
		}

		::System::Boolean WaitOne_5(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_5_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* a1, ::System::Int64 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean WaitAll(::Il2CppArray<::System::Threading::WaitHandle*>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITALL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean WaitAll_1(::Il2CppArray<::System::Threading::WaitHandle*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Threading::WaitHandle*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITALL_1_OFFSET))(a1);
		}

		static ::System::Int32 WaitAny(::Il2CppArray<::System::Threading::WaitHandle*>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 WaitAny_1(::Il2CppArray<::System::Threading::WaitHandle*>* a1, ::System::TimeSpan a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ThrowAbandonedMutexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowAbandonedMutexException_1(::System::Int32 a1, ::System::Threading::WaitHandle* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_1_OFFSET))(a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_1_OFFSET))(this);
		}

		static ::System::Int32 WaitMultiple(::Il2CppArray<::System::Threading::WaitHandle*>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Threading::WaitHandle*>*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 WaitOneNative(::System::Runtime::InteropServices::SafeHandle* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Wait_internal(::System::IntPtr* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
