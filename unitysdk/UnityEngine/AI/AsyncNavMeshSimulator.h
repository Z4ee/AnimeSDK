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

#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FF7A0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FF790)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1A3FF730)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA00)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FF920)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0x1A3FF880)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA20)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FF870)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_OFFSET UNITYSDK_OFFSET(0x1A3FF820)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3FF7B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FETCHRESULT_OFFSET UNITYSDK_OFFSET(0x1A3FF9F0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A3FF640)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEAGENT_OFFSET UNITYSDK_OFFSET(0x1A3FF960)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA10)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FF990)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAB0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1A3FEFC0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA50)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A3FEDE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA70)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A3FEE30)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A3FEEE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAC0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3FF0E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1A3FED90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAF0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A3FF200)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1A3FF620)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_CREATEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1A3FF720)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_FREEASYNCNAVMESHSIMULATOR_OFFSET UNITYSDK_OFFSET(0x1A3FF810)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_OVERRIDENAVMESHAREA_OFFSET UNITYSDK_OFFSET(0x1A3FF9D0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A3FF6C0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFB10)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1A3FF600)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA30)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1A3FED40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAA0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1A3FF060)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA60)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A3FEE90)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFA80)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A3FEF40)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAD0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3FF180)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFAE0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A3FF2A0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SET_AVOIDANCEPREDICTIONTIME_OFFSET UNITYSDK_OFFSET(0x1A3FF630)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FF9C0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1A3FF9B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A3FFB00)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_OFFSET UNITYSDK_OFFSET(0x1A3FF410)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_UNLOADNAVMESH_OFFSET UNITYSDK_OFFSET(0x1A3FF9E0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FF6F0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshSimulator_TypeDefinitionIndex = 5392;

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

		::System::Void set_avoidancePredictionTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SET_AVOIDANCEPREDICTIONTIME_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FINALIZE_OFFSET))(this);
		}

		::System::Int32 AddLink(::UnityEngine::AI::NavMeshLinkData link)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINK_OFFSET))(this, link);
		}

		::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_OFFSET))(this, link, position, rotation);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RELEASE_OFFSET))(this);
		}

		::System::Int32 CreateAsyncNavMesh(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_OFFSET))(this, data, position, rotation);
		}

		::UnityEngine::AI::AsyncNavMeshAgent* AllocAgent(::UnityEngine::Vector3 position, ::System::Int32 areaMask, ::System::Int32 typeID, ::UnityEngine::AI::AsyncAgentCreateParams createParams)
		{
			return ((::UnityEngine::AI::AsyncNavMeshAgent*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_OFFSET))(this, position, areaMask, typeID, createParams);
		}

		::System::Void FreeAgent(::UnityEngine::AI::AsyncNavMeshAgent* agent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEAGENT_OFFSET))(this, agent);
		}

		::System::Void Simulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_OFFSET))(this);
		}

		::System::Void OverrideNavMeshArea(::System::Int32 surfaceID, ::System::Int32 area)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_OVERRIDENAVMESHAREA_OFFSET))(this, surfaceID, area);
		}

		::System::Void UnloadNavMesh(::System::Int32 surfaceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_UNLOADNAVMESH_OFFSET))(this, surfaceID);
		}

		::System::Void FetchResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FETCHRESULT_OFFSET))(this);
		}

		::System::Void Simulate_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SIMULATE_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::AI::AgentHandle AllocAgent_Internal(::UnityEngine::Vector3 position, ::System::UInt32 areaMask, ::System::Int32 typeID, ::UnityEngine::AI::AsyncAgentCreateParams createParams)
		{
			return ((::UnityEngine::AI::AgentHandle(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_OFFSET))(this, position, areaMask, typeID, createParams);
		}

		::System::Void FreeAsyncAgent_Internal(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_OFFSET))(this, handle);
		}

		static ::System::IntPtr Internal_CreateAsyncNavMeshSimulator(::System::Int32 maxNode, ::System::Single avoidancePredictionTime)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_CREATEASYNCNAVMESHSIMULATOR_OFFSET))(maxNode, avoidancePredictionTime);
		}

		static ::System::Void Internal_FreeAsyncNavMeshSimulator(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_INTERNAL_FREEASYNCNAVMESHSIMULATOR_OFFSET))(ptr);
		}

		::System::Int32 CreateAsyncNavMesh_Internal(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_OFFSET))(this, data, position, rotation);
		}

		::System::Void SetAutoBraking(::UnityEngine::AI::AgentHandle handle, ::System::Boolean autoBraking)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_OFFSET))(this, handle, autoBraking);
		}

		::System::Single GetRadius(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_OFFSET))(this, handle);
		}

		::System::Single GetHeight(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_OFFSET))(this, handle);
		}

		::System::Void SetMaxAcceleration(::UnityEngine::AI::AgentHandle handle, ::System::Single maxAcceleration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_OFFSET))(this, handle, maxAcceleration);
		}

		::System::Single GetMaxAcceleration(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_OFFSET))(this, handle);
		}

		::System::Void SetMaxSpeed(::UnityEngine::AI::AgentHandle handle, ::System::Single maxSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_OFFSET))(this, handle, maxSpeed);
		}

		::System::Single GetMaxSpeed(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_OFFSET))(this, handle);
		}

		::System::Void SetDestination(::UnityEngine::AI::AgentHandle handle, ::UnityEngine::Vector3 destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_OFFSET))(this, handle, destination);
		}

		::UnityEngine::Vector3 GetDestination(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_OFFSET))(this, handle);
		}

		::UnityEngine::Vector3 GetPosition(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_OFFSET))(this, handle);
		}

		::System::Void SetOverridePosition(::UnityEngine::AI::AgentHandle handle, ::UnityEngine::Vector3 overridePosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_OFFSET))(this, handle, overridePosition);
		}

		::System::Void SetVelocity(::UnityEngine::AI::AgentHandle handle, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_OFFSET))(this, handle, velocity);
		}

		::UnityEngine::Vector3 GetVelocity(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_OFFSET))(this, handle);
		}

		::System::Void Stop(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_OFFSET))(this, handle);
		}

		::System::Void Resume(::UnityEngine::AI::AgentHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_OFFSET))(this, handle);
		}

		::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData& link, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ADDLINKINTERNAL_INJECTED_OFFSET))(this, link, position, rotation);
		}

		::System::Void AllocAgent_Internal_Injected(::UnityEngine::Vector3& position, ::System::UInt32 areaMask, ::System::Int32 typeID, ::UnityEngine::AI::AsyncAgentCreateParams& createParams, ::UnityEngine::AI::AgentHandle& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Int32, ::UnityEngine::AI::AsyncAgentCreateParams&, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_ALLOCAGENT_INTERNAL_INJECTED_OFFSET))(this, position, areaMask, typeID, createParams, ret);
		}

		::System::Void FreeAsyncAgent_Internal_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_FREEASYNCAGENT_INTERNAL_INJECTED_OFFSET))(this, handle);
		}

		::System::Int32 CreateAsyncNavMesh_Internal_Injected(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_CREATEASYNCNAVMESH_INTERNAL_INJECTED_OFFSET))(this, data, position, rotation);
		}

		::System::Void SetAutoBraking_Injected(::UnityEngine::AI::AgentHandle& handle, ::System::Boolean autoBraking)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETAUTOBRAKING_INJECTED_OFFSET))(this, handle, autoBraking);
		}

		::System::Single GetRadius_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETRADIUS_INJECTED_OFFSET))(this, handle);
		}

		::System::Single GetHeight_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETHEIGHT_INJECTED_OFFSET))(this, handle);
		}

		::System::Void SetMaxAcceleration_Injected(::UnityEngine::AI::AgentHandle& handle, ::System::Single maxAcceleration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXACCELERATION_INJECTED_OFFSET))(this, handle, maxAcceleration);
		}

		::System::Single GetMaxAcceleration_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXACCELERATION_INJECTED_OFFSET))(this, handle);
		}

		::System::Void SetMaxSpeed_Injected(::UnityEngine::AI::AgentHandle& handle, ::System::Single maxSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETMAXSPEED_INJECTED_OFFSET))(this, handle, maxSpeed);
		}

		::System::Single GetMaxSpeed_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETMAXSPEED_INJECTED_OFFSET))(this, handle);
		}

		::System::Void SetDestination_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETDESTINATION_INJECTED_OFFSET))(this, handle, destination);
		}

		::System::Void GetDestination_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETDESTINATION_INJECTED_OFFSET))(this, handle, ret);
		}

		::System::Void GetPosition_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETPOSITION_INJECTED_OFFSET))(this, handle, ret);
		}

		::System::Void SetOverridePosition_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& overridePosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETOVERRIDEPOSITION_INJECTED_OFFSET))(this, handle, overridePosition);
		}

		::System::Void SetVelocity_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_SETVELOCITY_INJECTED_OFFSET))(this, handle, velocity);
		}

		::System::Void GetVelocity_Injected(::UnityEngine::AI::AgentHandle& handle, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_GETVELOCITY_INJECTED_OFFSET))(this, handle, ret);
		}

		::System::Void Stop_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_STOP_INJECTED_OFFSET))(this, handle);
		}

		::System::Void Resume_Injected(::UnityEngine::AI::AgentHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_RESUME_INJECTED_OFFSET))(this, handle);
		}
	};
}
