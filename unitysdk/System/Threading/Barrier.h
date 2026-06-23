#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEventSlim; }

#define SYSTEM_THREADING_BARRIER_ADDPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1B1D8880)
#define SYSTEM_THREADING_BARRIER_ADDPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x1B1D87A0)
#define SYSTEM_THREADING_BARRIER_DISCONTINUOUSWAIT_OFFSET UNITYSDK_OFFSET(0x1B1D9AB0)
#define SYSTEM_THREADING_BARRIER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B1D9F40)
#define SYSTEM_THREADING_BARRIER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1D9D90)
#define SYSTEM_THREADING_BARRIER_FINISHPHASE_OFFSET UNITYSDK_OFFSET(0x1B1D9040)
#define SYSTEM_THREADING_BARRIER_GETCURRENTTOTAL_OFFSET UNITYSDK_OFFSET(0x1B1D8740)
#define SYSTEM_THREADING_BARRIER_GET_CURRENTPHASENUMBER_OFFSET UNITYSDK_OFFSET(0x1B1D8470)
#define SYSTEM_THREADING_BARRIER_GET_PARTICIPANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B1D8460)
#define SYSTEM_THREADING_BARRIER_GET_PARTICIPANTSREMAINING_OFFSET UNITYSDK_OFFSET(0x1B1D8440)
#define SYSTEM_THREADING_BARRIER_INVOKEPOSTPHASEACTION_OFFSET UNITYSDK_OFFSET(0x1B1D9D10)
#define SYSTEM_THREADING_BARRIER_REMOVEPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1B1D8D30)
#define SYSTEM_THREADING_BARRIER_REMOVEPARTICIPANT_OFFSET UNITYSDK_OFFSET(0x1B1D8D20)
#define SYSTEM_THREADING_BARRIER_SETCURRENTTOTAL_OFFSET UNITYSDK_OFFSET(0x1B1D8770)
#define SYSTEM_THREADING_BARRIER_SETRESETEVENTS_OFFSET UNITYSDK_OFFSET(0x1B1D9CA0)
#define SYSTEM_THREADING_BARRIER_SET_CURRENTPHASENUMBER_OFFSET UNITYSDK_OFFSET(0x1B1D8480)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_1_OFFSET UNITYSDK_OFFSET(0x1B1D9350)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_2_OFFSET UNITYSDK_OFFSET(0x1B1D99A0)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_3_OFFSET UNITYSDK_OFFSET(0x1B1D99B0)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_4_OFFSET UNITYSDK_OFFSET(0x1B1D9AA0)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_5_OFFSET UNITYSDK_OFFSET(0x1B1D9360)
#define SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_OFFSET UNITYSDK_OFFSET(0x1B1D9340)
#define SYSTEM_THREADING_BARRIER_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x1B1D8CB0)
#define SYSTEM_THREADING_BARRIER_WAITCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1B1D9C00)
#define SYSTEM_THREADING_BARRIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1D84A0)
#define SYSTEM_THREADING_BARRIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D8490)

namespace System::Threading
{
	inline static constexpr unsigned int Barrier_TypeDefinitionIndex = 2708;

	class Barrier : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokePostPhaseAction()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(Barrier_TypeDefinitionIndex)->GetStaticField(0x2C80);
		}
		// static const ::System::Int32 CURRENT_MASK = 0x7FFF0000; // 0x0
		// static const ::System::Int32 TOTAL_MASK = 0x7FFF; // 0x0
		// static const ::System::Int32 SENSE_MASK = 0x80000000; // 0x0
		// static const ::System::Int32 MAX_PARTICIPANTS = 0x7FFF; // 0x0
		::System::Exception* m_exception; // 0x10
		::System::Threading::ExecutionContext* m_ownerThreadContext; // 0x18
		::System::Threading::ManualResetEventSlim* m_evenEvent; // 0x20
		::System::Threading::ManualResetEventSlim* m_oddEvent; // 0x28
		::System::Action_1<::System::Threading::Barrier*>* m_postPhaseAction; // 0x30
		::System::Int64 m_currentPhase; // 0x38
		::System::Int32 m_actionCallerID; // 0x40
		::System::Boolean m_disposed; // 0x44
		::System::Int32 m_currentTotalCount; // 0x48

		::System::Void _ctor(::System::Int32 participantCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER__CTOR_OFFSET))(this, participantCount);
		}

		::System::Void _ctor_1(::System::Int32 participantCount, ::System::Action_1<::System::Threading::Barrier*>* postPhaseAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Threading::Barrier*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER__CTOR_1_OFFSET))(this, participantCount, postPhaseAction);
		}

		::System::Int32 get_ParticipantsRemaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_GET_PARTICIPANTSREMAINING_OFFSET))(this);
		}

		::System::Int32 get_ParticipantCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_GET_PARTICIPANTCOUNT_OFFSET))(this);
		}

		::System::Int64 get_CurrentPhaseNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_GET_CURRENTPHASENUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentPhaseNumber(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SET_CURRENTPHASENUMBER_OFFSET))(this, value);
		}

		::System::Void GetCurrentTotal(::System::Int32 currentTotal, ::System::Int32& current, ::System::Int32& total, ::System::Boolean& sense)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_GETCURRENTTOTAL_OFFSET))(this, currentTotal, current, total, sense);
		}

		::System::Boolean SetCurrentTotal(::System::Int32 currentTotal, ::System::Int32 current, ::System::Int32 total, ::System::Boolean sense)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SETCURRENTTOTAL_OFFSET))(this, currentTotal, current, total, sense);
		}

		::System::Int64 AddParticipant()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_ADDPARTICIPANT_OFFSET))(this);
		}

		::System::Int64 AddParticipants(::System::Int32 participantCount)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_ADDPARTICIPANTS_OFFSET))(this, participantCount);
		}

		::System::Void RemoveParticipant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_REMOVEPARTICIPANT_OFFSET))(this);
		}

		::System::Void RemoveParticipants(::System::Int32 participantCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_REMOVEPARTICIPANTS_OFFSET))(this, participantCount);
		}

		::System::Void SignalAndWait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_OFFSET))(this);
		}

		::System::Void SignalAndWait_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_1_OFFSET))(this, cancellationToken);
		}

		::System::Boolean SignalAndWait_2(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_2_OFFSET))(this, timeout);
		}

		::System::Boolean SignalAndWait_3(::System::TimeSpan timeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_3_OFFSET))(this, timeout, cancellationToken);
		}

		::System::Boolean SignalAndWait_4(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_4_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean SignalAndWait_5(::System::Int32 millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SIGNALANDWAIT_5_OFFSET))(this, millisecondsTimeout, cancellationToken);
		}

		::System::Void FinishPhase(::System::Boolean observedSense)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_FINISHPHASE_OFFSET))(this, observedSense);
		}

		static ::System::Void InvokePostPhaseAction(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_INVOKEPOSTPHASEACTION_OFFSET))(obj);
		}

		::System::Void SetResetEvents(::System::Boolean observedSense)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_SETRESETEVENTS_OFFSET))(this, observedSense);
		}

		::System::Void WaitCurrentPhase(::System::Threading::ManualResetEventSlim* currentPhaseEvent, ::System::Int64 observedPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ManualResetEventSlim*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_WAITCURRENTPHASE_OFFSET))(this, currentPhaseEvent, observedPhase);
		}

		::System::Boolean DiscontinuousWait(::System::Threading::ManualResetEventSlim* currentPhaseEvent, ::System::Int32 totalTimeout, ::System::Threading::CancellationToken token, ::System::Int64 observedPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ManualResetEventSlim*, ::System::Int32, ::System::Threading::CancellationToken, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_DISCONTINUOUSWAIT_OFFSET))(this, currentPhaseEvent, totalTimeout, token, observedPhase);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIER_THROWIFDISPOSED_OFFSET))(this);
		}
	};
}
