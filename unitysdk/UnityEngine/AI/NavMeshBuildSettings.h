#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildDebugSettings.h"

#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_OVERRIDETILESIZE_OFFSET UNITYSDK_OFFSET(0x210CEF0)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_OVERRIDEVOXELSIZE_OFFSET UNITYSDK_OFFSET(0x210CEE0)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x210CF00)
#define UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0xBA00)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildSettings_TypeDefinitionIndex = 5374;

	struct alignas(4) NavMeshBuildSettings
	{
		::System::Int32 m_AgentTypeID; // 0x10
		::System::Single m_AgentRadius; // 0x14
		::System::Single m_AgentHeight; // 0x18
		::System::Single m_AgentSlope; // 0x1C
		::System::Single m_AgentClimb; // 0x20
		::System::Single m_LedgeDropHeight; // 0x24
		::System::Single m_MaxJumpAcrossDistance; // 0x28
		::System::Single m_MinRegionArea; // 0x2C
		::System::Int32 m_OverrideVoxelSize; // 0x30
		::System::Single m_VoxelSize; // 0x34
		::System::Int32 m_OverrideTileSize; // 0x38
		::System::Int32 m_TileSize; // 0x3C
		::System::Int32 m_AccuratePlacement; // 0x40
		::UnityEngine::AI::NavMeshBuildDebugSettings m_Debug; // 0x44

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_AGENTTYPEID_OFFSET))(this, value);
		}

		::System::Single get_agentRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_GET_AGENTRADIUS_OFFSET))(this);
		}

		::System::Void set_overrideVoxelSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_OVERRIDEVOXELSIZE_OFFSET))(this, value);
		}

		::System::Void set_voxelSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_VOXELSIZE_OFFSET))(this, value);
		}

		::System::Void set_overrideTileSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_OVERRIDETILESIZE_OFFSET))(this, value);
		}

		::System::Void set_tileSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSETTINGS_SET_TILESIZE_OFFSET))(this, value);
		}
	};
}
