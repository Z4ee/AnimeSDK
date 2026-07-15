#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/AgentHandle.h"
#include "unitysdk/UnityEngine/AI/AsyncAgentCreateParams.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class AsyncNavMeshAgent; }
namespace UnityEngine::AI { class NavMeshData; }

#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7180)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A7170)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1D2A7110)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7450)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A7370)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0x1D2A7290)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7470)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A7280)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_OFFSET UNITYSDK_OFFSET(0x1D2A7230)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2A7190)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1D2A7440)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D2A7020)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEAGENT_OFFSET UNITYSDK_OFFSET(0x1D2A73B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7460)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A73E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7500)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1D2A69A0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74A0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D2A67C0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74C0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1D2A6810)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1D2A68C0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7510)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D2A6AC0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7490)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1D2A6770)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7540)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D2A6BE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1D2A7000)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_CREATEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1D2A7100)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_FREEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1D2A7220)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_OVERRIDENAVMESHAREA_OFFSET UNITYSDK_OFFSET(0x1D2A7420)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D2A70A0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7560)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1D2A6FE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7480)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1D2A6720)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74F0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1D2A6A40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1D2A6870)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A74D0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1D2A6920)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7520)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D2A6B60)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7530)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D2A6C80)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SET_AVOIDANCEPREDICTIONTIME_OFFSET UNITYSDK_OFFSET(0x1D2A7010)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2A7410)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1D2A7400)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D2A7550)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_OFFSET UNITYSDK_OFFSET(0x1D2A6DF0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_UNLOADNAVMESH_OFFSET UNITYSDK_OFFSET(0x1D2A7430)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A70D0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshSimulator_TypeDefinitionIndex = 5674;

	class AsyncNavMeshSimulator : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GET_VALID_OFFSET))(this);
		}

		::System::Void set_avoidancePredictionTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SET_AVOIDANCEPREDICTIONTIME_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FINALIZE_OFFSET))(this);
		}

		::System::Int32 AddLink(::UnityEngine::AI::NavMeshLinkData a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINK_OFFSET))(this, a1);
		}

		::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RELEASE_OFFSET))(this);
		}

		::System::Int32 CreateAsyncNavMesh(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AI::AsyncNavMeshAgent* AllocAgent(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::AI::AsyncAgentCreateParams a4)
		{
			return ((::UnityEngine::AI::AsyncNavMeshAgent*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FreeAgent(::UnityEngine::AI::AsyncNavMeshAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEAGENT_OFFSET))(this, a1);
		}

		::System::Void Simulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET))(this);
		}

		::System::Void OverrideNavMeshArea(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_OVERRIDENAVMESHAREA_OFFSET))(this, a1, a2);
		}

		::System::Void UnloadNavMesh(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_UNLOADNAVMESH_OFFSET))(this, a1);
		}

		::System::Void FetchResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FETCHRESULT_OFFSET))(this);
		}

		::System::Void Simulate_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::AI::AgentHandle AllocAgent_Internal(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::Int32 a3, ::UnityEngine::AI::AsyncAgentCreateParams a4)
		{
			return ((::UnityEngine::AI::AgentHandle(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FreeAsyncAgent_Internal(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_OFFSET))(this, a1);
		}

		static ::System::IntPtr Internal_CreateAsyncNavMeshSimulator(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_CREATEASYNCNAVMESHSIMULATOR_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_FreeAsyncNavMeshSimulator(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_FREEASYNCNAVMESHSIMULATOR_OFFSET))(a1);
		}

		::System::Int32 CreateAsyncNavMesh_Internal(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAutoBraking(::UnityEngine::AI::AgentHandle a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_OFFSET))(this, a1, a2);
		}

		::System::Single GetRadius(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_OFFSET))(this, a1);
		}

		::System::Single GetHeight(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetMaxAcceleration(::UnityEngine::AI::AgentHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxAcceleration(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_OFFSET))(this, a1);
		}

		::System::Void SetMaxSpeed(::UnityEngine::AI::AgentHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxSpeed(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_OFFSET))(this, a1);
		}

		::System::Void SetDestination(::UnityEngine::AI::AgentHandle a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetDestination(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetOverridePosition(::UnityEngine::AI::AgentHandle a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetVelocity(::UnityEngine::AI::AgentHandle a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetVelocity(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_OFFSET))(this, a1);
		}

		::System::Void Stop(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_OFFSET))(this, a1);
		}

		::System::Void Resume(::UnityEngine::AI::AgentHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_OFFSET))(this, a1);
		}

		::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AllocAgent_Internal_Injected(::UnityEngine::Vector3& a1, ::System::UInt32 a2, ::System::Int32 a3, ::UnityEngine::AI::AsyncAgentCreateParams& a4, ::UnityEngine::AI::AgentHandle& a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams&, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FreeAsyncAgent_Internal_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_INJECTED_OFFSET))(this, a1);
		}

		::System::Int32 CreateAsyncNavMesh_Internal_Injected(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAutoBraking_Injected(::UnityEngine::AI::AgentHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Single GetRadius_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_INJECTED_OFFSET))(this, a1);
		}

		::System::Single GetHeight_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetMaxAcceleration_Injected(::UnityEngine::AI::AgentHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxAcceleration_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetMaxSpeed_Injected(::UnityEngine::AI::AgentHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxSpeed_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetDestination_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetDestination_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetPosition_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetOverridePosition_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetVelocity_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetVelocity_Injected(::UnityEngine::AI::AgentHandle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void Stop_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Resume_Injected(::UnityEngine::AI::AgentHandle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_INJECTED_OFFSET))(this, a1);
		}
	};
}
