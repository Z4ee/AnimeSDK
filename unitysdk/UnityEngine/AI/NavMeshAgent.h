#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/AI/OffMeshLinkData.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::AI { class NavMeshPath; }

#define UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1B255710)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255C00)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B255BF0)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1B255B90)
#define UNITYENGINE_AI_NAVMESHAGENT_COMPLETEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1B2558C0)
#define UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET UNITYSDK_OFFSET(0x1B255AE0)
#define UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET UNITYSDK_OFFSET(0x1B255B60)
#define UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET UNITYSDK_OFFSET(0x1B255C50)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2557E0)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B255780)
#define UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1B255C30)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2558B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B255850)
#define UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B255C70)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B255D20)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1B255C80)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1B255D00)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1B255CB0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1B2558F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1B255910)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1B2558D0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B255E00)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2556E0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_CURRENTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1B255720)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2556C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B255670)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2554C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1B255470)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HASPATH_OFFSET UNITYSDK_OFFSET(0x1B255930)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B255DC0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET UNITYSDK_OFFSET(0x1B255E20)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1B255700)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISPATHSTALE_OFFSET UNITYSDK_OFFSET(0x1B255950)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1B255A40)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET UNITYSDK_OFFSET(0x1B255C60)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1B2557F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2555E0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B255590)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1B255DE0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2559C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B255970)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHPENDING_OFFSET UNITYSDK_OFFSET(0x1B255940)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHSTATUS_OFFSET UNITYSDK_OFFSET(0x1B255960)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B255A80)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B255DA0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_REMAININGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2556D0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1B255CE0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255660)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_OFFSET UNITYSDK_OFFSET(0x1B255610)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2554F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B255D40)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1B255D60)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1B255D80)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255560)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B255510)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1B255CA0)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255A00)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET UNITYSDK_OFFSET(0x1B2559F0)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255B80)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B255B70)
#define UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET UNITYSDK_OFFSET(0x1B255A60)
#define UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET UNITYSDK_OFFSET(0x1B255A30)
#define UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET UNITYSDK_OFFSET(0x1B255C10)
#define UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET UNITYSDK_OFFSET(0x1B255C40)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255460)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1B255450)
#define UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1B255C20)
#define UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B255A70)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B255D30)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1B255C90)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1B255D10)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1B255CD0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1B255900)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1B255920)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1B2558E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B255E10)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2556F0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2554E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1B2554D0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B255DD0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1B255A50)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255600)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2555F0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1B255DF0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1B255AF0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B255DB0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1B255CF0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B255500)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B255D50)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1B255D70)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1B255D90)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255580)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B255570)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1B255CC0)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x1B255A20)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET UNITYSDK_OFFSET(0x1B255A10)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2559E0)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET UNITYSDK_OFFSET(0x1B2559D0)
#define UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B255E30)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshAgent_TypeDefinitionIndex = 5645;

	class NavMeshAgent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET))(this);
		}

		::System::Boolean SetDestination(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_destination()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void set_destination(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET))(this, a1);
		}

		::System::Single get_stoppingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_stoppingDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_nextPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET))(this);
		}

		::System::Void set_nextPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_steeringTarget()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_desiredVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_OFFSET))(this);
		}

		::System::Single get_remainingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_REMAININGDISTANCE_OFFSET))(this);
		}

		::System::Single get_baseOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_BASEOFFSET_OFFSET))(this);
		}

		::System::Void set_baseOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_isOnOffMeshLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET))(this);
		}

		::System::Void ActivateCurrentOffMeshLink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET))(this, a1);
		}

		::UnityEngine::AI::OffMeshLinkData get_currentOffMeshLinkData()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_CURRENTOFFMESHLINKDATA_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData GetCurrentOffMeshLinkDataInternal()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData get_nextOffMeshLinkData()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTOFFMESHLINKDATA_OFFSET))(this);
		}

		::UnityEngine::AI::OffMeshLinkData GetNextOffMeshLinkDataInternal()
		{
			return ((::UnityEngine::AI::OffMeshLinkData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_OFFSET))(this);
		}

		::System::Void CompleteOffMeshLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_COMPLETEOFFMESHLINK_OFFSET))(this);
		}

		::System::Boolean get_autoTraverseOffMeshLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOTRAVERSEOFFMESHLINK_OFFSET))(this);
		}

		::System::Void set_autoTraverseOffMeshLink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET))(this, a1);
		}

		::System::Boolean get_autoBraking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET))(this);
		}

		::System::Void set_autoBraking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET))(this, a1);
		}

		::System::Boolean get_autoRepath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET))(this);
		}

		::System::Void set_autoRepath(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_hasPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_HASPATH_OFFSET))(this);
		}

		::System::Boolean get_pathPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHPENDING_OFFSET))(this);
		}

		::System::Boolean get_isPathStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISPATHSTALE_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshPathStatus get_pathStatus()
		{
			return ((::UnityEngine::AI::NavMeshPathStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHSTATUS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_pathEndPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_OFFSET))(this);
		}

		::System::Boolean Warp(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET))(this, a1);
		}

		::System::Void Move(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET))(this);
		}

		::System::Void Stop_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET))(this, a1);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET))(this);
		}

		::System::Boolean get_isStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Void set_isStopped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET))(this, a1);
		}

		::System::Void ResetPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET))(this);
		}

		::System::Boolean SetPath(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET))(this, a1);
		}

		::UnityEngine::AI::NavMeshPath* get_path()
		{
			return ((::UnityEngine::AI::NavMeshPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET))(this, a1);
		}

		::System::Void CopyPathTo(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET))(this, a1);
		}

		::System::Boolean FindClosestEdge(::UnityEngine::AI::NavMeshHit& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET))(this, a1);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET))(this, a1, a2);
		}

		::System::Boolean CalculatePath(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshPath* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET))(this, a1, a2);
		}

		::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshPath* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean SamplePathPosition(::System::Int32 a1, ::System::Single a2, ::UnityEngine::AI::NavMeshHit& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLayerCost(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET))(this, a1, a2);
		}

		::System::Single GetLayerCost(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET))(this, a1);
		}

		::System::Void SetAreaCost(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET))(this, a1, a2);
		}

		::System::Single GetAreaCost(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_navMeshOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET))(this);
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET))(this, a1);
		}

		::UnityEngine::Object* GetOwnerInternal()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_walkableMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET))(this);
		}

		::System::Void set_walkableMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_areaMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET))(this);
		}

		::System::Void set_areaMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET))(this, a1);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_angularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET))(this);
		}

		::System::Void set_angularSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET))(this, a1);
		}

		::System::Single get_acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET))(this, a1);
		}

		::System::Boolean get_updatePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void set_updatePosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_updateRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET))(this);
		}

		::System::Void set_updateRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_updateUpAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET))(this);
		}

		::System::Void set_updateUpAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::AI::ObstacleAvoidanceType get_obstacleAvoidanceType()
		{
			return ((::UnityEngine::AI::ObstacleAvoidanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET))(this);
		}

		::System::Void set_obstacleAvoidanceType(::UnityEngine::AI::ObstacleAvoidanceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::ObstacleAvoidanceType))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_avoidancePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET))(this);
		}

		::System::Void set_avoidancePriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean get_isOnNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET))(this);
		}

		::System::Boolean SetDestination_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_destination_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_destination_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_nextPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_nextPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_steeringTarget_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_desiredVelocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetCurrentOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetNextOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_pathEndPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Boolean Warp_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET))(this, a1);
		}

		::System::Boolean Raycast_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::AI::NavMeshHit& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::AI::NavMeshPath* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
