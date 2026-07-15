#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/ClearFlag.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::AI { class RVOAgent; }

#define UNITYENGINE_AI_RVOSIMULATOR_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1D2A97E0)
#define UNITYENGINE_AI_RVOSIMULATOR_ASYNCSIMULATE_OFFSET UNITYSDK_OFFSET(0x1D2A9810)
#define UNITYENGINE_AI_RVOSIMULATOR_FETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1D2A9820)
#define UNITYENGINE_AI_RVOSIMULATOR_INTERNAL_CREATERVOSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1D2A9760)
#define UNITYENGINE_AI_RVOSIMULATOR_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0x1D2A97F0)
#define UNITYENGINE_AI_RVOSIMULATOR_REGISTERAGENT_OFFSET UNITYSDK_OFFSET(0x1D2A97C0)
#define UNITYENGINE_AI_RVOSIMULATOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D2A97A0)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_ENABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1D2A9790)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0x1D2A9780)
#define UNITYENGINE_AI_RVOSIMULATOR_SET_TIMESTEP_OFFSET UNITYSDK_OFFSET(0x1D2A9770)
#define UNITYENGINE_AI_RVOSIMULATOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1D2A9800)
#define UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERAGENT_OFFSET UNITYSDK_OFFSET(0x1D2A97D0)
#define UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERALLTYPEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A97B0)
#define UNITYENGINE_AI_RVOSIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A9750)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int RVOSimulator_TypeDefinitionIndex = 5677;

	class RVOSimulator : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateRVOSimulator(::UnityEngine::AI::RVOSimulator* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::RVOSimulator*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_INTERNAL_CREATERVOSIMULATOR_OFFSET))(a1);
		}

		::System::Void set_timeStep(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_TIMESTEP_OFFSET))(this, a1);
		}

		::System::Void set_neighborHeightLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET))(this, a1);
		}

		::System::Void set_enablePostProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_SET_ENABLEPOSTPROCESS_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::AI::ClearFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::ClearFlag))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RegisterAgent(::UnityEngine::AI::RVOAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_REGISTERAGENT_OFFSET))(this, a1);
		}

		::System::Void UnregisterAgent(::UnityEngine::AI::RVOAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERAGENT_OFFSET))(this, a1);
		}

		::System::Void AddObstacle(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_ADDOBSTACLE_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterAllTypedInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOSIMULATOR_UNREGISTERALLTYPEDINTERNAL_OFFSET))(this, a1);
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
