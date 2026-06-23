#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E34CF50)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E34CF40)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0xA60CD0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E34CF30)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET UNITYSDK_OFFSET(0x1E34CF00)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshWorld_TypeDefinitionIndex = 27417;

	struct alignas(8) NavMeshWorld
	{
		::System::IntPtr world; // 0x10

		static ::UnityEngine::Experimental::AI::NavMeshWorld GetDefaultWorld()
		{
			return ((::UnityEngine::Experimental::AI::NavMeshWorld(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET))();
		}

		/*
		static ::System::Void AddDependencyInternal(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET))(navmesh, handle);
		}
		*/

		/*
		::System::Void AddDependency(::Unity::Jobs::JobHandle job)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET))(this, job);
		}
		*/

		static ::System::Void GetDefaultWorld_Injected(::UnityEngine::Experimental::AI::NavMeshWorld& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::AI::NavMeshWorld&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET))(ret);
		}

		/*
		static ::System::Void AddDependencyInternal_Injected(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle& handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET))(navmesh, handle);
		}
		*/
	};
}
