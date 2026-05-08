#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterGenQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterGen_WaterMeshStats.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANOCEANMATERIAL_OFFSET UNITYSDK_OFFSET(0x19BA3C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANUPMATERIALS_OFFSET UNITYSDK_OFFSET(0x19BA5130)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19BA51A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CREATEQUADMESH_OFFSET UNITYSDK_OFFSET(0x19BA4750)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWSTATICWATER_OFFSET UNITYSDK_OFFSET(0x19BA3F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWUNDERWATERDEPTH_OFFSET UNITYSDK_OFFSET(0x19BA4C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWWATER_OFFSET UNITYSDK_OFFSET(0x19BA4500)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GETWATERMESHSTATSREF_OFFSET UNITYSDK_OFFSET(0x19B95550)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_ENABLEDEBUGCENTER_OFFSET UNITYSDK_OFFSET(0x19BA3B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_ENABLEFRUSTUMCULL_OFFSET UNITYSDK_OFFSET(0x19BA3B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19B95370)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_MESHSTATS_OFFSET UNITYSDK_OFFSET(0x19BA3630)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_NEEDBAKEDMESH_OFFSET UNITYSDK_OFFSET(0x19BA3BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x19BA3BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_PREVIEWBAKEDMESH_OFFSET UNITYSDK_OFFSET(0x19BA3B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_STATICWATERLOWMESH_OFFSET UNITYSDK_OFFSET(0x19BA3EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_STATICWATERMESH_OFFSET UNITYSDK_OFFSET(0x19BA3EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERGENON_OFFSET UNITYSDK_OFFSET(0x19B967A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERGENQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x19B9CAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALFARLOD_OFFSET UNITYSDK_OFFSET(0x19B97CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALNEARLOD_OFFSET UNITYSDK_OFFSET(0x19B98100)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALNORMALLOD_OFFSET UNITYSDK_OFFSET(0x19B978E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_INIT_OFFSET UNITYSDK_OFFSET(0x19BA3B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_LOADSTATICWATERMESH_OFFSET UNITYSDK_OFFSET(0x19BA3790)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_ENABLEDEBUGCENTER_OFFSET UNITYSDK_OFFSET(0x19BA3B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_ENABLEFRUSTUMCULL_OFFSET UNITYSDK_OFFSET(0x19BA3B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_MESHSTATS_OFFSET UNITYSDK_OFFSET(0x19BA3660)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_NEEDBAKEDMESH_OFFSET UNITYSDK_OFFSET(0x19BA3BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_PREVIEWBAKEDMESH_OFFSET UNITYSDK_OFFSET(0x19BA3BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_STATICWATERLOWMESH_OFFSET UNITYSDK_OFFSET(0x19BA3EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_STATICWATERMESH_OFFSET UNITYSDK_OFFSET(0x19BA3ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_UNLOADSTATICWATERMESH_OFFSET UNITYSDK_OFFSET(0x19BA39A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B9C630)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA5240)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA3690)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__LOADSTATICWATERMESH_B__14_0_OFFSET UNITYSDK_OFFSET(0x19BA5360)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__LOADSTATICWATERMESH_B__14_1_OFFSET UNITYSDK_OFFSET(0x19BA53C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterGen_TypeDefinitionIndex = 30092;

	class WaterGen : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_WaterGenEnable()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterGen_TypeDefinitionIndex)->GetStaticField(0x24300);
		}
		static ::UnityEngine::Rendering::Universal::WaterGen** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterGen**)Il2CppClass::FromTypeDefinitionIndex(WaterGen_TypeDefinitionIndex)->GetStaticField(0x24308);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenNodeEvalC()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGen_TypeDefinitionIndex)->GetStaticField(0x24310);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterGen_TypeDefinitionIndex)->GetStaticField(0x24318);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ShowWaterMeshStats()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterGen_TypeDefinitionIndex)->GetStaticField(0x24320);
		}
		::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats m_MeshStats; // 0x10
		::UnityEngine::Material* m_WaterMaterialNormalLOD; // 0x58
		::Foundation::AssetRequestHandle m_StaticLowMeshAssetHandle; // 0x60
		::UnityEngine::Mesh* m_staticWaterMesh; // 0x80
		::UnityEngine::Material* m_WaterMaterialNearLOD; // 0x88
		::Foundation::AssetRequestHandle m_StaticMeshAssetHandle; // 0x90
		::UnityEngine::Mesh* m_staticWaterLowMesh; // 0xB0
		::UnityEngine::Material* m_WaterMaterialFarLOD; // 0xB8
		::UnityEngine::Mesh* depthQuadMesh; // 0xC0
		::UnityEngine::Matrix4x4 depthQuadWorldMatrix; // 0xC8
		::System::Boolean m_NeedBakedMesh; // 0x108
		::System::Boolean m_EnableDebugCenter; // 0x109
		::System::Boolean m_EnableFrustumCull; // 0x10A
		::System::Boolean m_PreviewBakedMesh; // 0x10B
		::UnityEngine::Vector3 DebugCenter; // 0x10C
		::UnityEngine::Rendering::Universal::EWaterGenQuality m_LastWaterGenQualityLevel; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats get_MeshStats()
		{
			return ((::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_MESHSTATS_OFFSET))(this);
		}

		::System::Void set_MeshStats(::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_MESHSTATS_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats& GetWaterMeshStatsRef()
		{
			return ((::UnityEngine::Rendering::Universal::WaterGen_WaterMeshStats&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GETWATERMESHSTATSREF_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::WaterGen* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::WaterGen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_INSTANCE_OFFSET))();
		}

		::System::Void LoadStaticWaterMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_LOADSTATICWATERMESH_OFFSET))(this);
		}

		::System::Void Update(::System::Boolean isRenderWaterCamera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_UPDATE_OFFSET))(this, isRenderWaterCamera);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_INIT_OFFSET))(this);
		}

		::System::Boolean get_WaterGenOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERGENON_OFFSET))(this);
		}

		::System::Boolean get_EnableFrustumCull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_ENABLEFRUSTUMCULL_OFFSET))(this);
		}

		::System::Void set_EnableFrustumCull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_ENABLEFRUSTUMCULL_OFFSET))(this, value);
		}

		::System::Boolean get_EnableDebugCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_ENABLEDEBUGCENTER_OFFSET))(this);
		}

		::System::Void set_EnableDebugCenter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_ENABLEDEBUGCENTER_OFFSET))(this, value);
		}

		::System::Boolean get_previewBakedMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_PREVIEWBAKEDMESH_OFFSET))(this);
		}

		::System::Void set_previewBakedMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_PREVIEWBAKEDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_needBakedMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_NEEDBAKEDMESH_OFFSET))(this);
		}

		::System::Void set_needBakedMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_NEEDBAKEDMESH_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::EWaterGenQuality get_WaterGenQualityLevel()
		{
			return ((::UnityEngine::Rendering::Universal::EWaterGenQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERGENQUALITYLEVEL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_PIVOT_OFFSET))(this);
		}

		::UnityEngine::Material* get_WaterMaterialNormalLOD()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALNORMALLOD_OFFSET))(this);
		}

		::UnityEngine::Material* get_WaterMaterialFarLOD()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALFARLOD_OFFSET))(this);
		}

		::UnityEngine::Material* get_WaterMaterialNearLOD()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_WATERMATERIALNEARLOD_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_staticWaterMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_STATICWATERMESH_OFFSET))(this);
		}

		::System::Void set_staticWaterMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_STATICWATERMESH_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_staticWaterLowMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_GET_STATICWATERLOWMESH_OFFSET))(this);
		}

		::System::Void set_staticWaterLowMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_SET_STATICWATERLOWMESH_OFFSET))(this, value);
		}

		::System::Void DrawStaticWater(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Mesh* bakedWaterMesh, ::UnityEngine::Mesh* bakedWaterLowMesh, ::UnityEngine::Matrix4x4& matrix, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Mesh*, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWSTATICWATER_OFFSET))(this, context, cmd, bakedWaterMesh, bakedWaterLowMesh, matrix, shaderPass);
		}

		::System::Void DrawWater(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass* waterGenPass, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWWATER_OFFSET))(this, context, cmd, waterGenPass, shaderPass);
		}

		::System::Void CreateQuadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CREATEQUADMESH_OFFSET))(this);
		}

		::System::Void DrawUnderwaterDepth(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_DRAWUNDERWATERDEPTH_OFFSET))(this, context, cmd, renderingData);
		}

		::System::Void UnloadStaticWaterMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_UNLOADSTATICWATERMESH_OFFSET))(this);
		}

		::System::Void CleanOceanMaterial(::UnityEngine::Material*& mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANOCEANMATERIAL_OFFSET))(this, mat);
		}

		::System::Void CleanupMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANUPMATERIALS_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN_CLEANUP_OFFSET))(this);
		}

		::System::Void _LoadStaticWaterMesh_b__14_0(::UnityEngine::Object* mesh, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__LOADSTATICWATERMESH_B__14_0_OFFSET))(this, mesh, requestHandle);
		}

		::System::Void _LoadStaticWaterMesh_b__14_1(::UnityEngine::Object* mesh, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERGEN__LOADSTATICWATERMESH_B__14_1_OFFSET))(this, mesh, requestHandle);
		}
	};
}
