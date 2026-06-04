#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/CollectObjects.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSettings.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/AI/NavMeshCollectGeometry.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }

#define UNITYENGINE_AI_NAVMESHSURFACE_ABS_OFFSET UNITYSDK_OFFSET(0x18801CC0)
#define UNITYENGINE_AI_NAVMESHSURFACE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x18800A40)
#define UNITYENGINE_AI_NAVMESHSURFACE_APPENDMODIFIERVOLUMES_OFFSET UNITYSDK_OFFSET(0x18802AE0)
#define UNITYENGINE_AI_NAVMESHSURFACE_BUILDNAVMESH_OFFSET UNITYSDK_OFFSET(0x18800F50)
#define UNITYENGINE_AI_NAVMESHSURFACE_CALCULATEWORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x18801CF0)
#define UNITYENGINE_AI_NAVMESHSURFACE_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0x18801200)
#define UNITYENGINE_AI_NAVMESHSURFACE_GETBUILDSETTINGS_OFFSET UNITYSDK_OFFSET(0x18800DA0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GETWORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x18803230)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_ACTIVESURFACES_OFFSET UNITYSDK_OFFSET(0x18800740)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x18800540)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_BUILDHEIGHTMESH_OFFSET UNITYSDK_OFFSET(0x18800700)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x188005B0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x18800560)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_DEFAULTAREA_OFFSET UNITYSDK_OFFSET(0x18800620)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHAGENT_OFFSET UNITYSDK_OFFSET(0x18800640)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x18800660)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x188005E0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x18800720)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDETILESIZE_OFFSET UNITYSDK_OFFSET(0x18800680)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDEVOXELSIZE_OFFSET UNITYSDK_OFFSET(0x188006C0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18800580)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x188006A0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_USEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18800600)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x188006E0)
#define UNITYENGINE_AI_NAVMESHSURFACE_HASTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18803640)
#define UNITYENGINE_AI_NAVMESHSURFACE_MANUALUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x18803600)
#define UNITYENGINE_AI_NAVMESHSURFACE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18800C00)
#define UNITYENGINE_AI_NAVMESHSURFACE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18800770)
#define UNITYENGINE_AI_NAVMESHSURFACE_REGISTER_OFFSET UNITYSDK_OFFSET(0x188007B0)
#define UNITYENGINE_AI_NAVMESHSURFACE_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x18800C40)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x18800550)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_BUILDHEIGHTMESH_OFFSET UNITYSDK_OFFSET(0x18800710)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x188005D0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x18800570)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_DEFAULTAREA_OFFSET UNITYSDK_OFFSET(0x18800630)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHAGENT_OFFSET UNITYSDK_OFFSET(0x18800650)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x18800670)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x188005F0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x18800730)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDETILESIZE_OFFSET UNITYSDK_OFFSET(0x18800690)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDEVOXELSIZE_OFFSET UNITYSDK_OFFSET(0x188006D0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x188005A0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x188006B0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_USEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18800610)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x188006F0)
#define UNITYENGINE_AI_NAVMESHSURFACE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x18800C60)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATEACTIVE_OFFSET UNITYSDK_OFFSET(0x18802970)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATEDATAIFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18802AA0)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATENAVMESH_OFFSET UNITYSDK_OFFSET(0x18802820)
#define UNITYENGINE_AI_NAVMESHSURFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188037C0)
#define UNITYENGINE_AI_NAVMESHSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18803760)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface_TypeDefinitionIndex = 38389;

	class NavMeshSurface : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>** StaticGet_s_NavMeshSurfaces()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_TypeDefinitionIndex)->GetStaticField(0x1000);
		}
		::System::Int32 m_AgentTypeID; // 0x18
		::UnityEngine::AI::CollectObjects m_CollectObjects; // 0x1C
		::UnityEngine::Vector3 m_Size; // 0x20
		::UnityEngine::Vector3 m_Center; // 0x2C
		::UnityEngine::LayerMask m_LayerMask; // 0x38
		::UnityEngine::AI::NavMeshCollectGeometry m_UseGeometry; // 0x3C
		::System::Int32 m_DefaultArea; // 0x40
		::System::Boolean m_IgnoreNavMeshAgent; // 0x44
		::System::Boolean m_IgnoreNavMeshObstacle; // 0x45
		::System::Boolean m_OverrideTileSize; // 0x46
		::System::Int32 m_TileSize; // 0x48
		::System::Boolean m_OverrideVoxelSize; // 0x4C
		::System::Single m_VoxelSize; // 0x50
		::System::Boolean m_BuildHeightMesh; // 0x54
		::UnityEngine::AI::NavMeshData* m_NavMeshData; // 0x58
		::UnityEngine::AI::NavMeshDataInstance m_NavMeshDataInstance; // 0x60
		::UnityEngine::Vector3 m_LastPosition; // 0x64
		::UnityEngine::Quaternion m_LastRotation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE__CCTOR_OFFSET))();
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_AGENTTYPEID_OFFSET))(this, a1);
		}

		::UnityEngine::AI::CollectObjects get_collectObjects()
		{
			return ((::UnityEngine::AI::CollectObjects(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_COLLECTOBJECTS_OFFSET))(this);
		}

		::System::Void set_collectObjects(::UnityEngine::AI::CollectObjects a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::CollectObjects))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_COLLECTOBJECTS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_CENTER_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_layerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_layerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_LAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::AI::NavMeshCollectGeometry get_useGeometry()
		{
			return ((::UnityEngine::AI::NavMeshCollectGeometry(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_USEGEOMETRY_OFFSET))(this);
		}

		::System::Void set_useGeometry(::UnityEngine::AI::NavMeshCollectGeometry a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshCollectGeometry))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_USEGEOMETRY_OFFSET))(this, a1);
		}

		::System::Int32 get_defaultArea()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_DEFAULTAREA_OFFSET))(this);
		}

		::System::Void set_defaultArea(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_DEFAULTAREA_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreNavMeshAgent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHAGENT_OFFSET))(this);
		}

		::System::Void set_ignoreNavMeshAgent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHAGENT_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreNavMeshObstacle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHOBSTACLE_OFFSET))(this);
		}

		::System::Void set_ignoreNavMeshObstacle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHOBSTACLE_OFFSET))(this, a1);
		}

		::System::Boolean get_overrideTileSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDETILESIZE_OFFSET))(this);
		}

		::System::Void set_overrideTileSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDETILESIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_tileSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_TILESIZE_OFFSET))(this);
		}

		::System::Void set_tileSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_TILESIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_overrideVoxelSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDEVOXELSIZE_OFFSET))(this);
		}

		::System::Void set_overrideVoxelSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDEVOXELSIZE_OFFSET))(this, a1);
		}

		::System::Single get_voxelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_VOXELSIZE_OFFSET))(this);
		}

		::System::Void set_voxelSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_VOXELSIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_buildHeightMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_BUILDHEIGHTMESH_OFFSET))(this);
		}

		::System::Void set_buildHeightMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_BUILDHEIGHTMESH_OFFSET))(this, a1);
		}

		::UnityEngine::AI::NavMeshData* get_navMeshData()
		{
			return ((::UnityEngine::AI::NavMeshData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_NAVMESHDATA_OFFSET))(this);
		}

		::System::Void set_navMeshData(::UnityEngine::AI::NavMeshData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_NAVMESHDATA_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* get_activeSurfaces()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_ACTIVESURFACES_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ONDISABLE_OFFSET))(this);
		}

		::System::Void AddData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ADDDATA_OFFSET))(this);
		}

		::System::Void RemoveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_REMOVEDATA_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshBuildSettings GetBuildSettings()
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GETBUILDSETTINGS_OFFSET))(this);
		}

		::System::Void BuildNavMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_BUILDNAVMESH_OFFSET))(this);
		}

		::UnityEngine::AsyncOperation* UpdateNavMesh(::UnityEngine::AI::NavMeshData* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID, ::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATENAVMESH_OFFSET))(this, a1);
		}

		static ::System::Void Register(::UnityEngine::AI::NavMeshSurface* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::UnityEngine::AI::NavMeshSurface* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UNREGISTER_OFFSET))(a1);
		}

		static ::System::Void UpdateActive()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATEACTIVE_OFFSET))();
		}

		::System::Void AppendModifierVolumes(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_APPENDMODIFIERVOLUMES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* CollectSources()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_COLLECTSOURCES_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ABS_OFFSET))(a1);
		}

		static ::UnityEngine::Bounds GetWorldBounds(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GETWORLDBOUNDS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds CalculateWorldBounds(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_CALCULATEWORLDBOUNDS_OFFSET))(a1, a2);
		}

		::System::Void ManualUpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_MANUALUPDATEDATA_OFFSET))(this);
		}

		::System::Boolean HasTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_HASTRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void UpdateDataIfTransformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATEDATAIFTRANSFORMCHANGED_OFFSET))(this);
		}
	};
}
