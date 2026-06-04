#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x1861CC40)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1861CAE0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1861CA60)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_ENSURELOCKOBJECTCREATED_OFFSET UNITYSDK_OFFSET(0x1861BCF0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1861B770)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET UNITYSDK_OFFSET(0x1861B640)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_ISSET_OFFSET UNITYSDK_OFFSET(0x1861B610)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x1861B730)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET UNITYSDK_OFFSET(0x1861B7A0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1861B310)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1861BA20)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_LAZYINITIALIZEEVENT_OFFSET UNITYSDK_OFFSET(0x1861B3D0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_1_OFFSET UNITYSDK_OFFSET(0x1861BD40)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET UNITYSDK_OFFSET(0x1861B650)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET UNITYSDK_OFFSET(0x1861BD30)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x1861B780)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET UNITYSDK_OFFSET(0x1861B7D0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x1861B380)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET UNITYSDK_OFFSET(0x1861B6C0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x1861C060)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1861CD30)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1861B960)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1861BAF0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1861B8A0)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEventSlim_TypeDefinitionIndex = 805;

	class ManualResetEventSlim : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_cancellationTokenCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManualResetEventSlim_TypeDefinitionIndex)->GetStaticField(0x11C50);
		}
		::System::Threading::ManualResetEvent* m_eventObj; // 0x10
		::System::Object* m_lock; // 0x18
		::System::Int32 m_combinedState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CCTOR_OFFSET))();
		}

		::System::Threading::WaitHandle* get_WaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_IsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_ISSET_OFFSET))(this);
		}

		::System::Void set_IsSet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET))(this, a1);
		}

		::System::Int32 get_SpinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET))(this);
		}

		::System::Void set_SpinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_Waiters()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET))(this);
		}

		::System::Void set_Waiters(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void EnsureLockObjectCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_ENSURELOCKOBJECTCREATED_OFFSET))(this);
		}

		::System::Boolean LazyInitializeEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_LAZYINITIALIZEEVENT_OFFSET))(this);
		}

		::System::Void Set()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET))(this);
		}

		::System::Void Set_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_1_OFFSET))(this, a1);
		}

		::System::Boolean Wait(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET))(this);
		}

		static ::System::Void CancellationTokenCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET))(a1);
		}

		::System::Void UpdateStateAtomically(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 ExtractStatePortionAndShiftRight(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ExtractStatePortion(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET))(a1, a2);
		}
	};
}
