#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAIN_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A4F9010)
#define UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET UNITYSDK_OFFSET(0x1A4F6210)
#define UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1A4F62C0)
#define UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET UNITYSDK_OFFSET(0x1A4F66F0)
#define UNITYENGINE_TERRAIN_GET_MATERIALTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A4F8FC0)
#define UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1A4F72C0)
#define UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1A4F62D0)
#define UNITYENGINE_TERRAIN_SETSPLATMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A4F9020)
#define UNITYENGINE_TERRAIN_SET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1A4F8FE0)
#define UNITYENGINE_TERRAIN_SET_DEFORMATIONRECEIVED_OFFSET UNITYSDK_OFFSET(0x1A4F9000)
#define UNITYENGINE_TERRAIN_SET_DETAILOBJECTDENSITY_OFFSET UNITYSDK_OFFSET(0x1A4F8FB0)
#define UNITYENGINE_TERRAIN_SET_DETAILOBJECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4F8FA0)
#define UNITYENGINE_TERRAIN_SET_DRAWINSTANCED_OFFSET UNITYSDK_OFFSET(0x1A4F8FF0)
#define UNITYENGINE_TERRAIN_SET_MATERIALTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A4F8FD0)
#define UNITYENGINE_TERRAIN_SET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1A4F8F90)
#define UNITYENGINE_TERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F9030)

namespace UnityEngine
{
	inline static constexpr unsigned int Terrain_TypeDefinitionIndex = 5239;

	class Terrain : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::TerrainData* get_terrainData()
		{
			return ((::UnityEngine::TerrainData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET))(this);
		}

		::System::Void set_terrainData(::UnityEngine::TerrainData* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_TERRAINDATA_OFFSET))(this, value);
		}

		::System::Void set_detailObjectDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DETAILOBJECTDISTANCE_OFFSET))(this, value);
		}

		::System::Void set_detailObjectDensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DETAILOBJECTDENSITY_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_materialTemplate()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_MATERIALTEMPLATE_OFFSET))(this);
		}

		::System::Void set_materialTemplate(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_MATERIALTEMPLATE_OFFSET))(this, value);
		}

		::System::Boolean get_allowAutoConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET))(this);
		}

		::System::Void set_allowAutoConnect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_ALLOWAUTOCONNECT_OFFSET))(this, value);
		}

		::System::Int32 get_groupingID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET))(this);
		}

		::System::Void set_drawInstanced(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DRAWINSTANCED_OFFSET))(this, value);
		}

		::System::Void set_deformationReceived(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DEFORMATIONRECEIVED_OFFSET))(this, value);
		}

		::System::Void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET))(this, left, top, right, bottom);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_FLUSH_OFFSET))(this);
		}

		::System::Void SetSplatMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETSPLATMATERIALPROPERTYBLOCK_OFFSET))(this, properties);
		}

		static ::Il2CppArray<::UnityEngine::Terrain*>* get_activeTerrains()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET))();
		}
	};
}
