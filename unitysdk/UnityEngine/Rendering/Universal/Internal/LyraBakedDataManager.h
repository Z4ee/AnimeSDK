#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_MinMaxAABB.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace LyraSector { class LyraPackedAsset; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_LyraClipmapManagerData; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_LyraClipmapRenderingContext; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_PropertiesSetInterface; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ADDASSET_OFFSET UNITYSDK_OFFSET(0x1AF00250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBIMPL_OFFSET UNITYSDK_OFFSET(0x1AEFE440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ENSUREASSETS_OFFSET UNITYSDK_OFFSET(0x1AEFDF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_FLOATTOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1AF00F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ALBEDOLUTTEX_OFFSET UNITYSDK_OFFSET(0x1AF001D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ENABLEDISTANCEFIELD_OFFSET UNITYSDK_OFFSET(0x1AEFDD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ENABLESCENEVOXEL_OFFSET UNITYSDK_OFFSET(0x1AEFDE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEFD590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_INVERSE_1_OFFSET UNITYSDK_OFFSET(0x1AF00ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_INVERSE_OFFSET UNITYSDK_OFFSET(0x1AF00E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRAADDUPDATEREGIONSFORAXIS_OFFSET UNITYSDK_OFFSET(0x1AF00FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_PREPAREFORRENDERINGIMPL_OFFSET UNITYSDK_OFFSET(0x1AEFF000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1AF00C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_REMOVEALLASSETS_OFFSET UNITYSDK_OFFSET(0x1AF00950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_REMOVEASSET_OFFSET UNITYSDK_OFFSET(0x1AF00800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETREFRESHCLIPMAP_OFFSET UNITYSDK_OFFSET(0x1AF07160)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIESGLOBAL_OFFSET UNITYSDK_OFFSET(0x1AF08B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIESIMPL_OFFSET UNITYSDK_OFFSET(0x1AF07780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1AF089F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1AF08A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF08890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ALBEDOLUTTEX_OFFSET UNITYSDK_OFFSET(0x1AF001F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ENABLEDISTANCEFIELD_OFFSET UNITYSDK_OFFSET(0x1AEFDDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ENABLESCENEVOXEL_OFFSET UNITYSDK_OFFSET(0x1AEFDED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1AF00DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_UPDATECLIPMAPIMPL_OFFSET UNITYSDK_OFFSET(0x1AF014A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_UPDATECLIPMAP_OFFSET UNITYSDK_OFFSET(0x1AF07230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_VISUALIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1AF08C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1AF09BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF09F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEFD680)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_TypeDefinitionIndex = 27315;

	class LyraBakedDataManager : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIVisualizeDistanceField()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20630);
		}
		static ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20638);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIForceFullUpdateDistanceField()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20640);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIEnableCheckForLyraDistanceFieldBlockDecompression()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20648);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIRefreshSceneVoxel()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20650);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldForcePropagate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20658);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIRefreshDistanceField()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20660);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIDistanceFieldTestClipmapUpdate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20668);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldBinaryDecompressJobCountPerFrame()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20670);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIDistanceFieldUseNextClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20678);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGISceneVoxelClipmapResolution()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20680);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIShouldFreezeSceneVoxel()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20688);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIShouldFreezeDistanceField()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20690);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIDistanceFieldTestUAVLoadFlag()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20698);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGISceneVoxelBinaryDecompressJobCountPerFrame()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldPropagateMaxSteps()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGISceneVoxelTestClipmapUpdate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldClipmapResolution()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIEnableSceneVoxel()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIEnableDistanceField()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIForceFullUpdateSceneVoxel()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldBlockDecompressJobCountPerFrame()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGISceneVoxelUseNextClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGIEnableLoadingBakedResources()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraGISceneVoxelTestUAVLoadFlag()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIDistanceFieldDecompressingBlockCountPreJob()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x206F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIBinaryDecompressingeUnitBufferSize()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20700);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraGIVisualizeSceneVoxel()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_TypeDefinitionIndex)->GetStaticField(0x20708);
		}
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData* m_LyraDistanceFieldManagerData; // 0x10
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_UpdateDistanceFieldSampler; // 0x18
		::Il2CppArray<::System::Collections::Generic::HashSet_1<::LyraSector::LyraSectorCoord>*>* changedSectorCoordArray; // 0x20
		::UnityEngine::ComputeShader* m_LyraUpdateBakedDataClipmapCS; // 0x28
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_VisualizeDistanceFieldSampler; // 0x30
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_UpdateSceneVoxelSampler; // 0x38
		::UnityEngine::ComputeShader* m_LyraDebugClipmapCS; // 0x40
		::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_MinMaxAABB>*>* updateRegionsArray; // 0x48
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData* m_LyraSceneVoxelManagerData; // 0x50
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_VisualizeSceneVoxelSampler; // 0x58
		::Il2CppArray<::UnityEngine::Vector3Int>* scrollOffsetInPagesArray; // 0x60
		::Unity::Profiling::ProfilerMarker m_LyraSectorBlockDecmpressProfiler; // 0x68
		::Unity::Profiling::ProfilerMarker m_LyraSectorDecompressProfiler; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_enableDistanceField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ENABLEDISTANCEFIELD_OFFSET))(this);
		}

		::System::Void set_enableDistanceField(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ENABLEDISTANCEFIELD_OFFSET))(this, value);
		}

		::System::Boolean get_enableSceneVoxel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ENABLESCENEVOXEL_OFFSET))(this);
		}

		::System::Void set_enableSceneVoxel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ENABLESCENEVOXEL_OFFSET))(this, value);
		}

		::System::Void EnsureAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ENSUREASSETS_OFFSET))(this);
		}

		static ::System::Void AsyncDecompressLyraSectorJobImpl(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* jobsData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBIMPL_OFFSET))(jobsData);
		}

		::System::Void PrepareForRenderingImpl(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext* context, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData* managerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext*, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_PREPAREFORRENDERINGIMPL_OFFSET))(this, context, managerData);
		}

		::UnityEngine::Texture2D* get_albedoLutTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GET_ALBEDOLUTTEX_OFFSET))(this);
		}

		::System::Void set_albedoLutTex(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SET_ALBEDOLUTTEX_OFFSET))(this, value);
		}

		::System::Void AddAsset(::LyraSector::LyraSectorCoord& coord, ::LyraSector::LyraPackedAsset* packedAsset, ::System::Boolean isForDistanceField)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord&, ::LyraSector::LyraPackedAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ADDASSET_OFFSET))(this, coord, packedAsset, isForDistanceField);
		}

		::System::Void RemoveAsset(::LyraSector::LyraSectorCoord& coord, ::System::Boolean isForDistanceField)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_REMOVEASSET_OFFSET))(this, coord, isForDistanceField);
		}

		::System::Void RemoveAllAssets(::System::Boolean isForDistanceField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_REMOVEALLASSETS_OFFSET))(this, isForDistanceField);
		}

		::System::Void PrepareForRendering(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_PREPAREFORRENDERING_OFFSET))(this, camera);
		}

		static ::UnityEngine::Vector3 ToVector3(::UnityEngine::Vector3Int& val)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_TOVECTOR3_OFFSET))(val);
		}

		static ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3& val)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_INVERSE_OFFSET))(val);
		}

		static ::UnityEngine::Vector3 Inverse_1(::UnityEngine::Vector3 val)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_INVERSE_1_OFFSET))(val);
		}

		static ::UnityEngine::Vector3 FloatToVector3(::System::Single val)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_FLOATTOVECTOR3_OFFSET))(val);
		}

		::System::Void LyraAddUpdateRegionsForAxis(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_MinMaxAABB& cimpmapBounds, ::UnityEngine::Vector3Int& movementInVoxel, ::System::Single pageWroldSize, ::System::Int32 componentIndex, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_MinMaxAABB>* updateRegions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_MinMaxAABB&, ::UnityEngine::Vector3Int&, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_MinMaxAABB>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRAADDUPDATEREGIONSFORAXIS_OFFSET))(this, cimpmapBounds, movementInVoxel, pageWroldSize, componentIndex, updateRegions);
		}

		::System::Void UpdateClipmapImpl(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext* context, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData* managerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext*, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapManagerData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_UPDATECLIPMAPIMPL_OFFSET))(this, camera, cb, context, managerData);
		}

		::System::Void SetRefreshClipmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETREFRESHCLIPMAP_OFFSET))(this);
		}

		::System::Void UpdateClipmap(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_UPDATECLIPMAP_OFFSET))(this, context, camera);
		}

		::System::Boolean SetShaderPropertiesImpl(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_PropertiesSetInterface* setter, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext* context, ::System::Boolean clear)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_PropertiesSetInterface*, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIESIMPL_OFFSET))(this, setter, context, clear);
		}

		::System::Boolean SetShaderProperties(::UnityEngine::Camera* camera, ::System::Boolean clear, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_PropertiesSetInterface* setter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_PropertiesSetInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_OFFSET))(this, camera, clear, setter);
		}

		::System::Boolean SetShaderProperties_1(::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::System::Boolean clear)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_1_OFFSET))(this, camera, materialPropertyBlock, clear);
		}

		::System::Boolean SetShaderProperties_2(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::ComputeShader* cs, ::System::Int32 kernel, ::System::Boolean clear)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIES_2_OFFSET))(this, camera, cb, cs, kernel, clear);
		}

		::System::Boolean SetShaderPropertiesGlobal(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cb, ::System::Boolean clear)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_SETSHADERPROPERTIESGLOBAL_OFFSET))(this, camera, cb, clear);
		}

		::System::Void VisualizeImpl(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext* context, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_VISUALIZEIMPL_OFFSET))(this, camera, cb, colorHandle, depthHandle, context, width, height);
		}

		::System::Void Visualize(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle, ::UnityEngine::Rendering::CommandBuffer* cb, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_VISUALIZE_OFFSET))(this, context, camera, colorHandle, depthHandle, cb, width, height);
		}
	};
}
