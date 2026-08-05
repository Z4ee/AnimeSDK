#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class Thread; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Unversal { class SRPHelperExecuteContext; }
namespace UnityEngine::Rendering::Unversal { class SRPThreadSharedData; }

#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1E267270)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_EXECUTEPASSESONHELPER_OFFSET UNITYSDK_OFFSET(0x1E267320)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E267140)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_SCHEDULEEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1E2672C0)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_THREADBODY_OFFSET UNITYSDK_OFFSET(0x1E267670)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD_WAITSRPTHREAD_OFFSET UNITYSDK_OFFSET(0x1E267620)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E267210)

namespace UnityEngine::Rendering::Unversal
{
	inline static constexpr unsigned int SRPThread_TypeDefinitionIndex = 27614;

	class SRPThread : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Unversal::SRPThread** StaticGet_Instance()
		{
			return (::UnityEngine::Rendering::Unversal::SRPThread**)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x22D70);
		}
		static ::System::Int32* StaticGet_DebugEndWaitMS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x61F0);
		}
		static ::System::Int32* StaticGet_DebugStartWaitMS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPThread_TypeDefinitionIndex)->GetStaticField(0x61F4);
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
