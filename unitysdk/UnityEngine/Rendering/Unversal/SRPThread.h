#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class Thread; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Unversal { class SRPHelperExecuteContext; }
namespace UnityEngine::Rendering::Unversal { class SRPThreadSharedData; }

#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1ABA9ED0)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_EXECUTEPASSESONHELPER_OFFSET UNITYSDK_OFFSET(0x1ABA9F80)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ABA9DA0)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_SCHEDULEEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1ABA9F20)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_THREADBODY_OFFSET UNITYSDK_OFFSET(0x1ABAA310)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_WAITSRPTHREAD_OFFSET UNITYSDK_OFFSET(0x1ABAA2C0)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA9E70)

namespace UnityEngine::Rendering::Unversal
{
	inline static constexpr unsigned int SRPThread_TypeDefinitionIndex = 29802;

	class SRPThread : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Unversal::SRPThread** StaticGet_Instance()
		{
			return (::UnityEngine::Rendering::Unversal::SRPThread**)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x23D50);
		}
		static ::System::Int32* StaticGet_DebugStartWaitMS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x6690);
		}
		static ::System::Int32* StaticGet_DebugEndWaitMS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x6694);
		}
		// static const ::System::Boolean forceDisableThreading; // 0x0
		::System::Threading::Thread* m_Thread; // 0x10
		::UnityEngine::Rendering::Unversal::SRPThreadSharedData* m_SharedData; // 0x18
		::System::Threading::AutoResetEvent* m_MainLaunchEvent; // 0x20
		::System::Threading::AutoResetEvent* m_HelperAckEvent; // 0x28
		::UnityEngine::Profiling::CustomSampler* m_SamplerExecutePasses; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_INITIALIZE_OFFSET))();
		}

		static ::System::Void Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_CLEANUP_OFFSET))();
		}

		::System::Void ScheduleExecutePasses(::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext* context, ::System::Boolean useThread)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_SCHEDULEEXECUTEPASSES_OFFSET))(this, context, useThread);
		}

		::System::Void WaitSRPThread(::System::Boolean useThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_WAITSRPTHREAD_OFFSET))(this, useThread);
		}

		::System::Void ThreadBody()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_THREADBODY_OFFSET))(this);
		}

		::System::Void ExecutePassesOnHelper(::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_EXECUTEPASSESONHELPER_OFFSET))(this, context);
		}
	};
}
