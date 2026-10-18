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

#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8AF0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3A8AE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1F3A8A80)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8D80)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3A8CA0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0x1F3A8C00)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DA0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3A8BF0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_OFFSET UNITYSDK_OFFSET(0x1F3A8BA0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3A8B00)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1F3A8D70)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F3A8990)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEAGENT_OFFSET UNITYSDK_OFFSET(0x1F3A8CE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8D90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3A8D10)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E30)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1F3A8310)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DD0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F3A8130)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DF0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F3A8180)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E10)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1F3A8230)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A8430)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DC0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1F3A80E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E70)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F3A8550)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1F3A8970)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_CREATEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1F3A8A70)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_FREEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1F3A8B90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_OVERRIDENAVMESHAREA_OFFSET UNITYSDK_OFFSET(0x1F3A8D50)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F3A8A10)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1F3A8950)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DB0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1F3A8090)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E20)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1F3A83B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8DE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F3A81E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E00)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1F3A8290)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E50)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3A84D0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E60)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F3A85F0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SET_AVOIDANCEPREDICTIONTIME_OFFSET UNITYSDK_OFFSET(0x1F3A8980)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATEWITHTIMESTEP_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3A8D40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1F3A8D30)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3A8E80)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_OFFSET UNITYSDK_OFFSET(0x1F3A8760)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_UNLOADNAVMESH_OFFSET UNITYSDK_OFFSET(0x1F3A8D60)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A8A40)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshSimulator_TypeDefinitionIndex = 5671;

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

		::System::Void Simulate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET))(this, a1);
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

		::System::Void SimulateWithTimeStep_Internal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATEWITHTIMESTEP_INTERNAL_OFFSET))(this, a1);
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
