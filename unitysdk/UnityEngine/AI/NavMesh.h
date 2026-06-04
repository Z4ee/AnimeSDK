#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSettings.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkInstance.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2551B0)
#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2551A0)
#define UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1B255140)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255110)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2550C0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1B255050)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B254FB0)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B254FA0)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1B254F10)
#define UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET UNITYSDK_OFFSET(0x1B254FE0)
#define UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255040)
#define UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1B254FF0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B255230)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET UNITYSDK_OFFSET(0x1B2551D0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2552A0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET UNITYSDK_OFFSET(0x1B255240)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET UNITYSDK_OFFSET(0x1B255100)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET UNITYSDK_OFFSET(0x1B2550F0)
#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHCHANGED_OFFSET UNITYSDK_OFFSET(0x1B254EA0)
#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1B254E60)
#define UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET UNITYSDK_OFFSET(0x1B2550E0)
#define UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x1B2550D0)
#define UNITYENGINE_AI_NAVMESH_LINKATTACHED_OFFSET UNITYSDK_OFFSET(0x1B255130)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B254F00)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B254EF0)
#define UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2551C0)
#define UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B255120)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B254FD0)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B254FC0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_TypeDefinitionIndex = 5655;

	class NavMesh : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshChanged** StaticGet_onChanged()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshChanged**)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0xFC0);
		}
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet_onPreUpdate()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0xFC8);
		}
		static ::System::Int32* StaticGet_ChangedStamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}

		static ::System::Void Internal_CallOnNavMeshPreUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET))();
		}

		static ::System::Void Internal_CallOnNavMeshChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHCHANGED_OFFSET))(a1);
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::AI::NavMeshHit& a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CalculatePath(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::AI::NavMeshPath* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::AI::NavMeshPath* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SamplePosition(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetAreaFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshLinkData GetNavMeshLinkData(::System::UInt64 a1)
		{
			return ((::UnityEngine::AI::NavMeshLinkData(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::AI::NavMeshDataInstance(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsValidNavMeshDataHandle(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET))(a1);
		}

		static ::System::Boolean IsValidLinkHandle(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET))(a1);
		}

		static ::System::Boolean InternalSetOwner(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET))(a1, a2);
		}

		static ::System::Boolean InternalSetLinkOwner(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET))(a1, a2);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveNavMeshDataInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean LinkAttached(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_LINKATTACHED_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshLinkInstance AddLink(::UnityEngine::AI::NavMeshLinkData a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::AI::NavMeshLinkInstance(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveLinkInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(::System::Int32 a1)
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET))(a1);
		}

		static ::System::Boolean Raycast_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::AI::NavMeshHit& a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Int32 a3, ::UnityEngine::AI::NavMeshPath* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SamplePosition_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::AI::NavMeshHit& a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetNavMeshLinkData_Injected(::System::UInt64 a1, ::UnityEngine::AI::NavMeshLinkData& a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::UnityEngine::AI::NavMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal_Injected(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetSettingsByID_Injected(::System::Int32 a1, ::UnityEngine::AI::NavMeshBuildSettings& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetSettingsByIndex_Injected(::System::Int32 a1, ::UnityEngine::AI::NavMeshBuildSettings& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET))(a1, a2);
		}
	};
}
