#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_ALLOCATERESOLUTIONDEPENDENTBUFFERS_OFFSET UNITYSDK_OFFSET(0x1EDE43A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1EDE4BB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EDE4210)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDE5610)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE5550)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_TileAndClusterData_TypeDefinitionIndex = 6006;

	class LightLoop_TileAndClusterData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>** StaticGet_s_CachedPerVoxelLightLists()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TileAndClusterData_TypeDefinitionIndex)->GetStaticField(0x56D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>** StaticGet_s_CachedPerTileLogBaseTweak()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TileAndClusterData_TypeDefinitionIndex)->GetStaticField(0x56D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>** StaticGet_s_CachedPunctualLightList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TileAndClusterData_TypeDefinitionIndex)->GetStaticField(0x56E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>** StaticGet_s_CachedPerVoxelOffset()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TileAndClusterData_TypeDefinitionIndex)->GetStaticField(0x56E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>** StaticGet_s_CachedFeatureFlags()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TileAndClusterData_TypeDefinitionIndex)->GetStaticField(0x56F0);
		}
		::UnityEngine::ComputeBuffer* LightVolumeDataBuffer; // 0x10
		::UnityEngine::ComputeBuffer* AABBBoundsBuffer; // 0x18
		::UnityEngine::ComputeBuffer* PunctualLightList; // 0x20
		::UnityEngine::ComputeBuffer* TileFeatureFlags; // 0x28
		::UnityEngine::ComputeBuffer* PerVoxelLightLists; // 0x30
		::UnityEngine::ComputeBuffer* PerVoxelOffset; // 0x38
		::UnityEngine::ComputeBuffer* PerTileLogBaseTweak; // 0x40
		::UnityEngine::ComputeBuffer* GlobalLightListAtomic; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* listsAreaClear; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA__CCTOR_OFFSET))();
		}

		::System::Void Initialize(::System::Int32 MaxLightsOnScreen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_INITIALIZE_OFFSET))(this, MaxLightsOnScreen);
		}

		::System::Void AllocateResolutionDependentBuffers(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_ALLOCATERESOLUTIONDEPENDENTBUFFERS_OFFSET))(this, width, height);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_TILEANDCLUSTERDATA_CLEANUP_OFFSET))(this);
		}
	};
}
