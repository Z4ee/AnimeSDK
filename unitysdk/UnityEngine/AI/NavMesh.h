#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSettings.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkInstance.h"
#include "unitysdk/UnityEngine/AI/NavMeshQueryFilter.h"
#include "unitysdk/UnityEngine/AI/NavMeshTriangulation.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029C70)
#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C029C60)
#define UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1C029C00)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C0299E0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029BF0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C029B80)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_1_OFFSET UNITYSDK_OFFSET(0x1C0299F0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1C029880)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHFILTERINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029D30)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHFILTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C029D20)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C0297B0)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C0297A0)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATH_1_OFFSET UNITYSDK_OFFSET(0x1C029C90)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1C029710)
#define UNITYENGINE_AI_NAVMESH_CALCULATETRIANGULATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029870)
#define UNITYENGINE_AI_NAVMESH_CALCULATETRIANGULATION_OFFSET UNITYSDK_OFFSET(0x1C029830)
#define UNITYENGINE_AI_NAVMESH_FINDCLOSESTEDGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C0297D0)
#define UNITYENGINE_AI_NAVMESH_FINDCLOSESTEDGE_OFFSET UNITYSDK_OFFSET(0x1C0297C0)
#define UNITYENGINE_AI_NAVMESH_GETAREACOST_OFFSET UNITYSDK_OFFSET(0x1C029810)
#define UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C029820)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029DA0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET UNITYSDK_OFFSET(0x1C029D40)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET UNITYSDK_OFFSET(0x1C029BE0)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET UNITYSDK_OFFSET(0x1C029BD0)
#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1C029430)
#define UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET UNITYSDK_OFFSET(0x1C029BC0)
#define UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x1C029BB0)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C029700)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C0296F0)
#define UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C029C80)
#define UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C029BA0)
#define UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1C029B90)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C0297F0)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C0297E0)
#define UNITYENGINE_AI_NAVMESH_SETAREACOST_OFFSET UNITYSDK_OFFSET(0x1C029800)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_TypeDefinitionIndex = 24809;

	class NavMesh : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet_onPreUpdate()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0x1E860);
		}

		static ::System::Void Internal_CallOnNavMeshPreUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET))();
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET))(sourcePosition, targetPosition, hit, areaMask);
		}

		static ::System::Boolean CalculatePath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean FindClosestEdge(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_FINDCLOSESTEDGE_OFFSET))(sourcePosition, hit, areaMask);
		}

		static ::System::Boolean SamplePosition(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Single maxDistance, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET))(sourcePosition, hit, maxDistance, areaMask);
		}

		static ::System::Void SetAreaCost(::System::Int32 areaIndex, ::System::Single cost)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SETAREACOST_OFFSET))(areaIndex, cost);
		}

		static ::System::Single GetAreaCost(::System::Int32 areaIndex)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETAREACOST_OFFSET))(areaIndex);
		}

		static ::System::Int32 GetAreaFromName(::System::String* areaName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET))(areaName);
		}

		static ::UnityEngine::AI::NavMeshTriangulation CalculateTriangulation()
		{
			return ((::UnityEngine::AI::NavMeshTriangulation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATETRIANGULATION_OFFSET))();
		}

		static ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(::UnityEngine::AI::NavMeshData* navMeshData)
		{
			return ((::UnityEngine::AI::NavMeshDataInstance(*)(::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET))(navMeshData);
		}

		static ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData_1(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::AI::NavMeshDataInstance(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_1_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Void RemoveNavMeshData(::UnityEngine::AI::NavMeshDataInstance handle)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshDataInstance))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATA_OFFSET))(handle);
		}

		static ::System::Boolean IsValidNavMeshDataHandle(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean IsValidLinkHandle(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean InternalSetOwner(::System::Int32 dataID, ::System::Int32 ownerID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET))(dataID, ownerID);
		}

		static ::System::Boolean InternalSetLinkOwner(::System::Int32 linkID, ::System::Int32 ownerID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET))(linkID, ownerID);
		}

		static ::System::Int32 AddNavMeshDataInternal(::UnityEngine::AI::NavMeshData* navMeshData)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATAINTERNAL_OFFSET))(navMeshData);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Void RemoveNavMeshDataInternal(::System::Int32 handle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET))(handle);
		}

		static ::UnityEngine::AI::NavMeshLinkInstance AddLink(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::AI::NavMeshLinkInstance(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET))(link, position, rotation);
		}

		static ::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET))(link, position, rotation);
		}

		static ::System::Void RemoveLinkInternal(::System::Int32 handle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET))(handle);
		}

		static ::System::Boolean CalculatePath_1(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshQueryFilter filter, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshQueryFilter, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATH_1_OFFSET))(sourcePosition, targetPosition, filter, path);
		}

		static ::System::Boolean CalculatePathFilterInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshPath* path, ::System::Int32 type, ::System::Int32 mask, ::Il2CppArray<::System::Single>* costs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshPath*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHFILTERINTERNAL_OFFSET))(sourcePosition, targetPosition, path, type, mask, costs);
		}

		static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(::System::Int32 agentTypeID)
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET))(agentTypeID);
		}

		static ::System::Boolean Raycast_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET))(sourcePosition, targetPosition, hit, areaMask);
		}

		static ::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean FindClosestEdge_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_FINDCLOSESTEDGE_INJECTED_OFFSET))(sourcePosition, hit, areaMask);
		}

		static ::System::Boolean SamplePosition_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Single maxDistance, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET))(sourcePosition, hit, maxDistance, areaMask);
		}

		static ::System::Void CalculateTriangulation_Injected(::UnityEngine::AI::NavMeshTriangulation& ret)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshTriangulation&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATETRIANGULATION_INJECTED_OFFSET))(ret);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal_Injected(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData& link, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET))(link, position, rotation);
		}

		static ::System::Boolean CalculatePathFilterInternal_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshPath* path, ::System::Int32 type, ::System::Int32 mask, ::Il2CppArray<::System::Single>* costs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshPath*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHFILTERINTERNAL_INJECTED_OFFSET))(sourcePosition, targetPosition, path, type, mask, costs);
		}

		static ::System::Void GetSettingsByID_Injected(::System::Int32 agentTypeID, ::UnityEngine::AI::NavMeshBuildSettings& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET))(agentTypeID, ret);
		}
	};
}
