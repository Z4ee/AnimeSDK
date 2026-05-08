#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6CF400)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A6CF330)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6CF280)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_ENSURELOCKOBJECTCREATED_OFFSET UNITYSDK_OFFSET(0x1A6CE1E0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1A6CDC90)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET UNITYSDK_OFFSET(0x1A6CDB40)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_ISSET_OFFSET UNITYSDK_OFFSET(0x1A6CDAF0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CDC30)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET UNITYSDK_OFFSET(0x1A6CDCC0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1A6CD770)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6CDF80)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_LAZYINITIALIZEEVENT_OFFSET UNITYSDK_OFFSET(0x1A6CD880)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_RESET_OFFSET UNITYSDK_OFFSET(0x1A6CE510)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_1_OFFSET UNITYSDK_OFFSET(0x1A6CE230)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET UNITYSDK_OFFSET(0x1A6CDB50)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET UNITYSDK_OFFSET(0x1A6CE220)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CDCA0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET UNITYSDK_OFFSET(0x1A6CDD10)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A6CD800)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET UNITYSDK_OFFSET(0x1A6CDBC0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1A6CE670)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x1A6CE660)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6CF510)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6CDEC0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6CE050)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CDE00)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEventSlim_TypeDefinitionIndex = 794;

	class ManualResetEventSlim : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_cancellationTokenCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManualResetEventSlim_TypeDefinitionIndex)->GetStaticField(0xAB0);
		}
		::System::Threading::ManualResetEvent* m_eventObj; // 0x10
		::System::Object* m_lock; // 0x18
		::System::Int32 m_combinedState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean initialState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_1_OFFSET))(this, initialState);
		}

		::System::Void _ctor_2(::System::Boolean initialState, ::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM__CTOR_2_OFFSET))(this, initialState, spinCount);
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

		::System::Void set_IsSet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET))(this, value);
		}

		::System::Int32 get_SpinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET))(this);
		}

		::System::Void set_SpinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_Waiters()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET))(this);
		}

		::System::Void set_Waiters(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::Boolean initialState, ::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET))(this, initialState, spinCount);
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

		::System::Void Set_1(::System::Boolean duringCancellation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_1_OFFSET))(this, duringCancellation);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_RESET_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET))(this);
		}

		::System::Boolean Wait_1(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_1_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET))(this);
		}

		static ::System::Void CancellationTokenCallback(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET))(obj);
		}

		::System::Void UpdateStateAtomically(::System::Int32 newBits, ::System::Int32 updateBitsMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET))(this, newBits, updateBitsMask);
		}

		static ::System::Int32 ExtractStatePortionAndShiftRight(::System::Int32 state, ::System::Int32 mask, ::System::Int32 rightBitShiftCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET))(state, mask, rightBitShiftCount);
		}

		static ::System::Int32 ExtractStatePortion(::System::Int32 state, ::System::Int32 mask)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET))(state, mask);
		}
	};
}
