#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAIN_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D2B89D0)
#define UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET UNITYSDK_OFFSET(0x1D2B6300)
#define UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1D2B63A0)
#define UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET UNITYSDK_OFFSET(0x1D2B67A0)
#define UNITYENGINE_TERRAIN_GET_MATERIALTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D2B8980)
#define UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1D2B7270)
#define UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1D2B63B0)
#define UNITYENGINE_TERRAIN_SETSPLATMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D2B89E0)
#define UNITYENGINE_TERRAIN_SET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1D2B89A0)
#define UNITYENGINE_TERRAIN_SET_DEFORMATIONRECEIVED_OFFSET UNITYSDK_OFFSET(0x1D2B89C0)
#define UNITYENGINE_TERRAIN_SET_DETAILOBJECTDENSITY_OFFSET UNITYSDK_OFFSET(0x1D2B8970)
#define UNITYENGINE_TERRAIN_SET_DETAILOBJECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D2B8960)
#define UNITYENGINE_TERRAIN_SET_DRAWINSTANCED_OFFSET UNITYSDK_OFFSET(0x1D2B89B0)
#define UNITYENGINE_TERRAIN_SET_MATERIALTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D2B8990)
#define UNITYENGINE_TERRAIN_SET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1D2B8950)
#define UNITYENGINE_TERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B89F0)

namespace UnityEngine
{
	inline static constexpr unsigned int Terrain_TypeDefinitionIndex = 5320;

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

		::System::Void set_terrainData(::UnityEngine::TerrainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_TERRAINDATA_OFFSET))(this, a1);
		}

		::System::Void set_detailObjectDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DETAILOBJECTDISTANCE_OFFSET))(this, a1);
		}

		::System::Void set_detailObjectDensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DETAILOBJECTDENSITY_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_materialTemplate()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_MATERIALTEMPLATE_OFFSET))(this);
		}

		::System::Void set_materialTemplate(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_MATERIALTEMPLATE_OFFSET))(this, a1);
		}

		::System::Boolean get_allowAutoConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET))(this);
		}

		::System::Void set_allowAutoConnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_ALLOWAUTOCONNECT_OFFSET))(this, a1);
		}

		::System::Int32 get_groupingID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET))(this);
		}

		::System::Void set_drawInstanced(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DRAWINSTANCED_OFFSET))(this, a1);
		}

		::System::Void set_deformationReceived(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SET_DEFORMATIONRECEIVED_OFFSET))(this, a1);
		}

		::System::Void SetNeighbors(::UnityEngine::Terrain* a1, ::UnityEngine::Terrain* a2, ::UnityEngine::Terrain* a3, ::UnityEngine::Terrain* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_FLUSH_OFFSET))(this);
		}

		::System::Void SetSplatMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETSPLATMATERIALPROPERTYBLOCK_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Terrain*>* get_activeTerrains()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET))();
		}
	};
}
