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

#define UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1C02A0C0)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A5D0)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02A5C0)
#define UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1C02A560)
#define UNITYENGINE_AI_NAVMESHAGENT_COMPLETEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1C02A270)
#define UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET UNITYSDK_OFFSET(0x1C02A4B0)
#define UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET UNITYSDK_OFFSET(0x1C02A530)
#define UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET UNITYSDK_OFFSET(0x1C02A620)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A190)
#define UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02A130)
#define UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1C02A600)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A260)
#define UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02A200)
#define UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02A640)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1C02A6F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1C02A650)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1C02A6D0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1C02A680)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1C02A2A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1C02A2C0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1C02A280)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C02A7D0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C02A090)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_CURRENTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1C02A0D0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A070)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C02A020)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029E70)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1C029E20)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HASPATH_OFFSET UNITYSDK_OFFSET(0x1C02A2E0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C02A790)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET UNITYSDK_OFFSET(0x1C02A7F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1C02A0B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISPATHSTALE_OFFSET UNITYSDK_OFFSET(0x1C02A300)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1C02A3F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET UNITYSDK_OFFSET(0x1C02A630)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTOFFMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1C02A1A0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029F90)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C029F40)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1C02A7B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A370)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C02A320)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHPENDING_OFFSET UNITYSDK_OFFSET(0x1C02A2F0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATHSTATUS_OFFSET UNITYSDK_OFFSET(0x1C02A310)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1C02A430)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C02A770)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_REMAININGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C02A080)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C02A6B0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A010)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_OFFSET UNITYSDK_OFFSET(0x1C029FC0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C029EA0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C02A710)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1C02A730)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1C02A750)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029F10)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1C029EC0)
#define UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1C02A670)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A3B0)
#define UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET UNITYSDK_OFFSET(0x1C02A3A0)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A550)
#define UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C02A540)
#define UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET UNITYSDK_OFFSET(0x1C02A410)
#define UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET UNITYSDK_OFFSET(0x1C02A3E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET UNITYSDK_OFFSET(0x1C02A5E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET UNITYSDK_OFFSET(0x1C02A610)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029E10)
#define UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1C029E00)
#define UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET UNITYSDK_OFFSET(0x1C02A5F0)
#define UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1C02A420)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1C02A700)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1C02A660)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x1C02A6E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x1C02A6A0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x1C02A2B0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET UNITYSDK_OFFSET(0x1C02A2D0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET UNITYSDK_OFFSET(0x1C02A290)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C02A7E0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C02A0A0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029E90)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1C029E80)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C02A7A0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1C02A400)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029FB0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C029FA0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET UNITYSDK_OFFSET(0x1C02A7C0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1C02A4C0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C02A780)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C02A6C0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C029EB0)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C02A720)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1C02A740)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET UNITYSDK_OFFSET(0x1C02A760)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029F30)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1C029F20)
#define UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET UNITYSDK_OFFSET(0x1C02A690)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x1C02A3D0)
#define UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET UNITYSDK_OFFSET(0x1C02A3C0)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A390)
#define UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET UNITYSDK_OFFSET(0x1C02A380)
#define UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02A800)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshAgent_TypeDefinitionIndex = 24797;

	class NavMeshAgent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET))(this);
		}

		::System::Boolean SetDestination(::UnityEngine::Vector3 target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_OFFSET))(this, target);
		}

		::UnityEngine::Vector3 get_destination()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void set_destination(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_OFFSET))(this, value);
		}

		::System::Single get_stoppingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STOPPINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_stoppingDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_STOPPINGDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_nextPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_OFFSET))(this);
		}

		::System::Void set_nextPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_OFFSET))(this, value);
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

		::System::Void set_baseOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_BASEOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_isOnOffMeshLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONOFFMESHLINK_OFFSET))(this);
		}

		::System::Void ActivateCurrentOffMeshLink(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_ACTIVATECURRENTOFFMESHLINK_OFFSET))(this, activated);
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

		::System::Void set_autoTraverseOffMeshLink(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOTRAVERSEOFFMESHLINK_OFFSET))(this, value);
		}

		::System::Boolean get_autoBraking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOBRAKING_OFFSET))(this);
		}

		::System::Void set_autoBraking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOBRAKING_OFFSET))(this, value);
		}

		::System::Boolean get_autoRepath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AUTOREPATH_OFFSET))(this);
		}

		::System::Void set_autoRepath(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AUTOREPATH_OFFSET))(this, value);
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

		::System::Boolean Warp(::UnityEngine::Vector3 newPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_OFFSET))(this, newPosition);
		}

		::System::Void Move(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_OFFSET))(this, offset);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_OFFSET))(this);
		}

		::System::Void Stop_1(::System::Boolean stopUpdates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_STOP_1_OFFSET))(this, stopUpdates);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESUME_OFFSET))(this);
		}

		::System::Boolean get_isStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Void set_isStopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ISSTOPPED_OFFSET))(this, value);
		}

		::System::Void ResetPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RESETPATH_OFFSET))(this);
		}

		::System::Boolean SetPath(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETPATH_OFFSET))(this, path);
		}

		::UnityEngine::AI::NavMeshPath* get_path()
		{
			return ((::UnityEngine::AI::NavMeshPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::UnityEngine::AI::NavMeshPath* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_PATH_OFFSET))(this, value);
		}

		::System::Void CopyPathTo(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_COPYPATHTO_OFFSET))(this, path);
		}

		::System::Boolean FindClosestEdge(::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_FINDCLOSESTEDGE_OFFSET))(this, hit);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_OFFSET))(this, targetPosition, hit);
		}

		::System::Boolean CalculatePath(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATH_OFFSET))(this, targetPosition, path);
		}

		::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_OFFSET))(this, targetPosition, path);
		}

		::System::Boolean SamplePathPosition(::System::Int32 areaMask, ::System::Single maxDistance, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SAMPLEPATHPOSITION_OFFSET))(this, areaMask, maxDistance, hit);
		}

		::System::Void SetLayerCost(::System::Int32 layer, ::System::Single cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETLAYERCOST_OFFSET))(this, layer, cost);
		}

		::System::Single GetLayerCost(::System::Int32 layer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETLAYERCOST_OFFSET))(this, layer);
		}

		::System::Void SetAreaCost(::System::Int32 areaIndex, ::System::Single areaCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETAREACOST_OFFSET))(this, areaIndex, areaCost);
		}

		::System::Single GetAreaCost(::System::Int32 areaIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETAREACOST_OFFSET))(this, areaIndex);
		}

		::UnityEngine::Object* get_navMeshOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NAVMESHOWNER_OFFSET))(this);
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AGENTTYPEID_OFFSET))(this, value);
		}

		::UnityEngine::Object* GetOwnerInternal()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETOWNERINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_walkableMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_WALKABLEMASK_OFFSET))(this);
		}

		::System::Void set_walkableMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_WALKABLEMASK_OFFSET))(this, value);
		}

		::System::Int32 get_areaMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AREAMASK_OFFSET))(this);
		}

		::System::Void set_areaMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AREAMASK_OFFSET))(this, value);
		}

		::System::Single get_speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_angularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ANGULARSPEED_OFFSET))(this);
		}

		::System::Void set_angularSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ANGULARSPEED_OFFSET))(this, value);
		}

		::System::Single get_acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_ACCELERATION_OFFSET))(this, value);
		}

		::System::Boolean get_updatePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void set_updatePosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_updateRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEROTATION_OFFSET))(this);
		}

		::System::Void set_updateRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_updateUpAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_UPDATEUPAXIS_OFFSET))(this);
		}

		::System::Void set_updateUpAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_UPDATEUPAXIS_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::AI::ObstacleAvoidanceType get_obstacleAvoidanceType()
		{
			return ((::UnityEngine::AI::ObstacleAvoidanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_OBSTACLEAVOIDANCETYPE_OFFSET))(this);
		}

		::System::Void set_obstacleAvoidanceType(::UnityEngine::AI::ObstacleAvoidanceType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::ObstacleAvoidanceType))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_OBSTACLEAVOIDANCETYPE_OFFSET))(this, value);
		}

		::System::Int32 get_avoidancePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_AVOIDANCEPRIORITY_OFFSET))(this);
		}

		::System::Void set_avoidancePriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_AVOIDANCEPRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_isOnNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_ISONNAVMESH_OFFSET))(this);
		}

		::System::Boolean SetDestination_Injected(::UnityEngine::Vector3& target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SETDESTINATION_INJECTED_OFFSET))(this, target);
		}

		::System::Void get_destination_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESTINATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_destination_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_DESTINATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_VELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_nextPosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_NEXTPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_nextPosition_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_SET_NEXTPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_steeringTarget_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_STEERINGTARGET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_desiredVelocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_DESIREDVELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetCurrentOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETCURRENTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetNextOffMeshLinkDataInternal_Injected(::UnityEngine::AI::OffMeshLinkData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::OffMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GETNEXTOFFMESHLINKDATAINTERNAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_pathEndPosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_GET_PATHENDPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean Warp_Injected(::UnityEngine::Vector3& newPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_WARP_INJECTED_OFFSET))(this, newPosition);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_MOVE_INJECTED_OFFSET))(this, offset);
		}

		::System::Boolean Raycast_Injected(::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshHit& hit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_RAYCAST_INJECTED_OFFSET))(this, targetPosition, hit);
		}

		::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(this, targetPosition, path);
		}
	};
}
