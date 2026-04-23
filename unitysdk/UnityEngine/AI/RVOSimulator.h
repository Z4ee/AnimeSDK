#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/ClearFlag.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::AI { class RVOAgent; }

#define UNITYENGINE_AI_RVOSIMULATOR_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1A402290)
#define UNITYENGINE_AI_RVOSIMULATOR_ASYNCSIMULATE_OFFSET UNITYSDK_OFFSET(0x1A4022C0)
#define UNITYENGINE_AI_RVOSIMULATOR_FETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1A4022D0)
#define UNITYENGINE_AI_RVOSIMULATOR_INTERNAL_CREATERVOSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1A402210)
#define UNITYENGINE_AI_RVOSIMULATOR_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0x1A4022A0)
#define UNITYENGINE_AI_RVOSIMULATOR_REGISTERAGENT_OFFSET UNITYSDK_OFFSET(0x1A402270)
#define UNITYENGINE_AI_RVOSIMULATOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A402250)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_ENABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1A402240)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0x1A402230)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_TIMESTEP_OFFSET UNITYSDK_OFFSET(0x1A402220)
#define UNITYENGINE_AI_RVOSIMULATOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1A4022B0)
#define UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERAGENT_OFFSET UNITYSDK_OFFSET(0x1A402280)
#define UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERALLTYPEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A402260)
#define UNITYENGINE_AI_RVOSIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A402200)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int RVOSimulator_TypeDefinitionIndex = 5395;

	class RVOSimulator : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateRVOSimulator(::UnityEngine::AI::RVOSimulator* self)
		{
			return ((::System::Void(*)(::UnityEngine::AI::RVOSimulator*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_INTERNAL_CREATERVOSIMULATOR_OFFSET))(self);
		}

		::System::Void set_timeStep(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_TIMESTEP_OFFSET))(this, value);
		}

		::System::Void set_neighborHeightLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET))(this, value);
		}

		::System::Void set_enablePostProcess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_ENABLEPOSTPROCESS_OFFSET))(this, value);
		}

		::System::Void Remove(::UnityEngine::AI::ClearFlag clearFlag)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_REMOVE_OFFSET))(this, clearFlag);
		}

		::System::Void RegisterAgent(::UnityEngine::AI::RVOAgent* agent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_REGISTERAGENT_OFFSET))(this, agent);
		}

		::System::Void UnregisterAgent(::UnityEngine::AI::RVOAgent* agent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERAGENT_OFFSET))(this, agent);
		}

		::System::Void AddObstacle(::Il2CppArray<::UnityEngine::Vector2>* vertices, ::Il2CppArray<::System::Single>* height)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_ADDOBSTACLE_OFFSET))(this, vertices, height);
		}

		::System::Void UnRegisterAllTypedInternal(::System::Int32 clearFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERALLTYPEDINTERNAL_OFFSET))(this, clearFlag);
		}

		::System::Void ProcessObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_PROCESSOBSTACLES_OFFSET))(this);
		}

		::System::Void Simulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SIMULATE_OFFSET))(this);
		}

		::System::Void AsyncSimulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_ASYNCSIMULATE_OFFSET))(this);
		}

		::System::Void FetchResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_FETCHRESULT_OFFSET))(this);
		}
	};
}
