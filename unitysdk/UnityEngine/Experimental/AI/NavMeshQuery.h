#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshPolyTypes.h"
#include "unitysdk/UnityEngine/Experimental/AI/PathQueryStatus.h"

#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_1_OFFSET UNITYSDK_OFFSET(0x1F74DCA0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74DD20)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_OFFSET UNITYSDK_OFFSET(0xAB1300)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATELOCATION_OFFSET UNITYSDK_OFFSET(0xAB1420)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74DC30)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATE_OFFSET UNITYSDK_OFFSET(0x1F74DBE0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F74DC20)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB12E0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ENDFINDPATH_1_OFFSET UNITYSDK_OFFSET(0x1F74DCE0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ENDFINDPATH_OFFSET UNITYSDK_OFFSET(0xAB1370)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETCLOSESTPOINTONPOLY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74DE10)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETCLOSESTPOINTONPOLY_OFFSET UNITYSDK_OFFSET(0x1F74DDF0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPATHRESULT_1_OFFSET UNITYSDK_OFFSET(0x1F74DD10)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPATHRESULT_OFFSET UNITYSDK_OFFSET(0xAB1380)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_1_OFFSET UNITYSDK_OFFSET(0xAB1670)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74E250)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_OFFSET UNITYSDK_OFFSET(0x1F74E230)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_1_OFFSET UNITYSDK_OFFSET(0xAB1550)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74E000)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_OFFSET UNITYSDK_OFFSET(0x1F74DFD0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPOLYGON_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74DD50)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPOLYGON_OFFSET UNITYSDK_OFFSET(0x1F74DD30)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPTR_OFFSET UNITYSDK_OFFSET(0x1F74DD60)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_1_OFFSET UNITYSDK_OFFSET(0xAB13D0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_2_OFFSET UNITYSDK_OFFSET(0xAB1400)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_OFFSET UNITYSDK_OFFSET(0xAB13A0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_1_OFFSET UNITYSDK_OFFSET(0xAB14C0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74DF30)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_OFFSET UNITYSDK_OFFSET(0x1F74DEC0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_1_OFFSET UNITYSDK_OFFSET(0xAB1590)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74E0C0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1F74E050)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_1_OFFSET UNITYSDK_OFFSET(0xAB1600)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74E1B0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1F74E140)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0xAB1690)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74E290)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F74E280)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_UPDATEFINDPATH_1_OFFSET UNITYSDK_OFFSET(0x1F74DCC0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_UPDATEFINDPATH_OFFSET UNITYSDK_OFFSET(0xAB1360)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0xAB12B0)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshQuery_TypeDefinitionIndex = 28020;

	struct alignas(8) NavMeshQuery
	{
		::System::IntPtr m_NavMeshQuery; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Experimental::AI::NavMeshWorld world, ::Unity::Collections::Allocator allocator, ::System::Int32 pathNodePoolSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::AI::NavMeshWorld, ::Unity::Collections::Allocator, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY__CTOR_OFFSET))(this, world, allocator, pathNodePoolSize);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::IntPtr Create(::UnityEngine::Experimental::AI::NavMeshWorld world, ::System::Int32 nodePoolSize)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Experimental::AI::NavMeshWorld, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATE_OFFSET))(world, nodePoolSize);
		}
		*/

		static ::System::Void Destroy(::System::IntPtr navMeshQuery)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_DESTROY_OFFSET))(navMeshQuery);
		}

		/*
		::UnityEngine::Experimental::AI::PathQueryStatus BeginFindPath(::UnityEngine::Experimental::AI::NavMeshLocation start, ::UnityEngine::Experimental::AI::NavMeshLocation end, ::System::Int32 areaMask, ::Unity::Collections::NativeArray_1<::System::Single> costs)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::PVOID, ::UnityEngine::Experimental::AI::NavMeshLocation, ::UnityEngine::Experimental::AI::NavMeshLocation, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_OFFSET))(this, start, end, areaMask, costs);
		}
		*/

		::UnityEngine::Experimental::AI::PathQueryStatus UpdateFindPath(::System::Int32 iterations, ::System::Int32& iterationsPerformed)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_UPDATEFINDPATH_OFFSET))(this, iterations, iterationsPerformed);
		}

		::UnityEngine::Experimental::AI::PathQueryStatus EndFindPath(::System::Int32& pathSize)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ENDFINDPATH_OFFSET))(this, pathSize);
		}

		/*
		::System::Int32 GetPathResult(::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId> path)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId>))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPATHRESULT_OFFSET))(this, path);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus BeginFindPath_1(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::NavMeshLocation start, ::UnityEngine::Experimental::AI::NavMeshLocation end, ::System::Int32 areaMask, ::System::Void* costs)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::NavMeshLocation, ::UnityEngine::Experimental::AI::NavMeshLocation, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_1_OFFSET))(navMeshQuery, start, end, areaMask, costs);
		}
		*/

		static ::UnityEngine::Experimental::AI::PathQueryStatus UpdateFindPath_1(::System::IntPtr navMeshQuery, ::System::Int32 iterations, ::System::Int32& iterationsPerformed)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_UPDATEFINDPATH_1_OFFSET))(navMeshQuery, iterations, iterationsPerformed);
		}

		static ::UnityEngine::Experimental::AI::PathQueryStatus EndFindPath_1(::System::IntPtr navMeshQuery, ::System::Int32& pathSize)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ENDFINDPATH_1_OFFSET))(navMeshQuery, pathSize);
		}

		static ::System::Int32 GetPathResult_1(::System::IntPtr navMeshQuery, ::System::Void* path, ::System::Int32 maxPath)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPATHRESULT_1_OFFSET))(navMeshQuery, path, maxPath);
		}

		/*
		static ::System::Boolean IsValidPolygon(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPOLYGON_OFFSET))(navMeshQuery, polygon);
		}
		*/

		static ::System::Boolean IsValidPtr(::System::IntPtr navMeshQuery)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPTR_OFFSET))(navMeshQuery);
		}

		/*
		::System::Boolean IsValid(::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_OFFSET))(this, polygon);
		}
		*/

		/*
		::System::Boolean IsValid_1(::UnityEngine::Experimental::AI::NavMeshLocation location)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::AI::NavMeshLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_1_OFFSET))(this, location);
		}
		*/

		::System::Boolean IsValid_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALID_2_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus GetClosestPointOnPoly(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3& nearest)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETCLOSESTPOINTONPOLY_OFFSET))(navMeshQuery, polygon, position, nearest);
		}
		*/

		/*
		::UnityEngine::Experimental::AI::NavMeshLocation CreateLocation(::UnityEngine::Vector3 position, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshLocation(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATELOCATION_OFFSET))(this, position, polygon);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::NavMeshLocation MapLocation(::System::IntPtr navMeshQuery, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 extents, ::System::Int32 agentTypeID, ::System::Int32 areaMask)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshLocation(*)(::System::IntPtr, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_OFFSET))(navMeshQuery, position, extents, agentTypeID, areaMask);
		}
		*/

		/*
		::UnityEngine::Experimental::AI::NavMeshLocation MapLocation_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 extents, ::System::Int32 agentTypeID, ::System::Int32 areaMask)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshLocation(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_1_OFFSET))(this, position, extents, agentTypeID, areaMask);
		}
		*/

		/*
		static ::System::Boolean GetPortalPoints(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon, ::UnityEngine::Experimental::AI::PolygonId neighbourPolygon, ::UnityEngine::Vector3& left, ::UnityEngine::Vector3& right)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_OFFSET))(navMeshQuery, polygon, neighbourPolygon, left, right);
		}
		*/

		/*
		::System::Boolean GetPortalPoints_1(::UnityEngine::Experimental::AI::PolygonId polygon, ::UnityEngine::Experimental::AI::PolygonId neighbourPolygon, ::UnityEngine::Vector3& left, ::UnityEngine::Vector3& right)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Experimental::AI::PolygonId, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_1_OFFSET))(this, polygon, neighbourPolygon, left, right);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 PolygonLocalToWorldMatrix(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_OFFSET))(navMeshQuery, polygon);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 PolygonLocalToWorldMatrix_1(::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_1_OFFSET))(this, polygon);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 PolygonWorldToLocalMatrix(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_OFFSET))(navMeshQuery, polygon);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 PolygonWorldToLocalMatrix_1(::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_1_OFFSET))(this, polygon);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::NavMeshPolyTypes GetPolygonType(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshPolyTypes(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_OFFSET))(navMeshQuery, polygon);
		}
		*/

		/*
		::UnityEngine::Experimental::AI::NavMeshPolyTypes GetPolygonType_1(::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshPolyTypes(*)(::PVOID, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_1_OFFSET))(this, polygon);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus Raycast(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::NavMeshLocation start, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::System::Void* costs, ::UnityEngine::AI::NavMeshHit& hit, ::System::Void* path, ::System::Int32& pathCount, ::System::Int32 maxPath)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::NavMeshLocation, ::UnityEngine::Vector3, ::System::Int32, ::System::Void*, ::UnityEngine::AI::NavMeshHit&, ::System::Void*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_OFFSET))(navMeshQuery, start, targetPosition, areaMask, costs, hit, path, pathCount, maxPath);
		}
		*/

		/*
		::UnityEngine::Experimental::AI::PathQueryStatus Raycast_1(::UnityEngine::AI::NavMeshHit& hit, ::UnityEngine::Experimental::AI::NavMeshLocation start, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::Unity::Collections::NativeArray_1<::System::Single> costs)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::PVOID, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Experimental::AI::NavMeshLocation, ::UnityEngine::Vector3, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_1_OFFSET))(this, hit, start, targetPosition, areaMask, costs);
		}
		*/

		/*
		static ::System::IntPtr Create_Injected(::UnityEngine::Experimental::AI::NavMeshWorld& world, ::System::Int32 nodePoolSize)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Experimental::AI::NavMeshWorld&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_CREATE_INJECTED_OFFSET))(world, nodePoolSize);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus BeginFindPath_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::NavMeshLocation& start, ::UnityEngine::Experimental::AI::NavMeshLocation& end, ::System::Int32 areaMask, ::System::Void* costs)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::NavMeshLocation&, ::UnityEngine::Experimental::AI::NavMeshLocation&, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_BEGINFINDPATH_INJECTED_OFFSET))(navMeshQuery, start, end, areaMask, costs);
		}
		*/

		/*
		static ::System::Boolean IsValidPolygon_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_ISVALIDPOLYGON_INJECTED_OFFSET))(navMeshQuery, polygon);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus GetClosestPointOnPoly_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& nearest)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETCLOSESTPOINTONPOLY_INJECTED_OFFSET))(navMeshQuery, polygon, position, nearest);
		}
		*/

		/*
		static ::System::Void MapLocation_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& extents, ::System::Int32 agentTypeID, ::System::Int32 areaMask, ::UnityEngine::Experimental::AI::NavMeshLocation& ret)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::AI::NavMeshLocation&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_MAPLOCATION_INJECTED_OFFSET))(navMeshQuery, position, extents, agentTypeID, areaMask, ret);
		}
		*/

		/*
		static ::System::Boolean GetPortalPoints_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon, ::UnityEngine::Experimental::AI::PolygonId& neighbourPolygon, ::UnityEngine::Vector3& left, ::UnityEngine::Vector3& right)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&, ::UnityEngine::Experimental::AI::PolygonId&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPORTALPOINTS_INJECTED_OFFSET))(navMeshQuery, polygon, neighbourPolygon, left, right);
		}
		*/

		/*
		static ::System::Void PolygonLocalToWorldMatrix_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONLOCALTOWORLDMATRIX_INJECTED_OFFSET))(navMeshQuery, polygon, ret);
		}
		*/

		/*
		static ::System::Void PolygonWorldToLocalMatrix_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_POLYGONWORLDTOLOCALMATRIX_INJECTED_OFFSET))(navMeshQuery, polygon, ret);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::NavMeshPolyTypes GetPolygonType_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::PolygonId& polygon)
		{
			return ((::UnityEngine::Experimental::AI::NavMeshPolyTypes(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::PolygonId&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_GETPOLYGONTYPE_INJECTED_OFFSET))(navMeshQuery, polygon);
		}
		*/

		/*
		static ::UnityEngine::Experimental::AI::PathQueryStatus Raycast_Injected(::System::IntPtr navMeshQuery, ::UnityEngine::Experimental::AI::NavMeshLocation& start, ::UnityEngine::Vector3& targetPosition, ::System::Int32 areaMask, ::System::Void* costs, ::UnityEngine::AI::NavMeshHit& hit, ::System::Void* path, ::System::Int32& pathCount, ::System::Int32 maxPath)
		{
			return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::System::IntPtr, ::UnityEngine::Experimental::AI::NavMeshLocation&, ::UnityEngine::Vector3&, ::System::Int32, ::System::Void*, ::UnityEngine::AI::NavMeshHit&, ::System::Void*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHQUERY_RAYCAST_INJECTED_OFFSET))(navMeshQuery, start, targetPosition, areaMask, costs, hit, path, pathCount, maxPath);
		}
		*/
	};
}
