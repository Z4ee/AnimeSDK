#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OffscreenParticleManager_DamageParticleItemDesc.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class OffscreenParticleManager_IResourceLoader; }
namespace UnityEngine::NAPRenderPipeline0 { class OffscreenParticleManager_OffscreenParticleItem; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData_SpecialDamageBloomConfig; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D4D4040)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D4D3E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_DOWNSAMPLEANDBLUR_OFFSET UNITYSDK_OFFSET(0x1D4D4E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ENABLESIMULATION_OFFSET UNITYSDK_OFFSET(0x1D4D4AA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_GETGOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D4D4D60)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_GETRT_OFFSET UNITYSDK_OFFSET(0x1D4D4CC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D4D4890)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ONBATTLEEND_OFFSET UNITYSDK_OFFSET(0x1D4D4A60)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REFRESHITEMSIMULATION_OFFSET UNITYSDK_OFFSET(0x1D4D42E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REINITDRAWSETIDS_OFFSET UNITYSDK_OFFSET(0x1D4D3580)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D4D4940)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1D4D4C00)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_SETRESOURCELOADER_OFFSET UNITYSDK_OFFSET(0x1D4D3620)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_UPDATEINSRP_OFFSET UNITYSDK_OFFSET(0x1D4D5AE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4D6FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D36B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_TypeDefinitionIndex = 26715;

	class OffscreenParticleManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_Alloc()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x216D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager** StaticGet_Instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager**)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x216D8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_Initialize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x216E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_SetupThings()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x216E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_IResourceLoader** StaticGet_s_Loader()
		{
			return (::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_IResourceLoader**)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x216F0);
		}
		static ::System::Boolean* StaticGet_EnableOffscreenParticleBloom()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x6330);
		}
		static ::System::Boolean* StaticGet_ShowLoadName()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x6331);
		}
		static ::System::Int32* StaticGet_kInstantiateCacheFrames()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_TypeDefinitionIndex)->GetStaticField(0x6334);
		}
		::System::Collections::Generic::List_1<::System::Byte>* m_AvailDrawSetIds; // 0x10
		::Il2CppArray<::System::Int32>* _BloomTempMips; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* m_Processed; // 0x20
		::Il2CppArray<::System::Int32>* _BloomMips; // 0x28
		::System::Collections::Generic::LinkedList_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* m_UsedList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* m_ToReorder; // 0x38
		::System::Boolean m_Running; // 0x40
		::UnityEngine::Rendering::FilteringSettings m_FilterSettings; // 0x44
		::UnityEngine::Rendering::DrawingSettings m_DrawSetting; // 0x60
		::UnityEngine::Rendering::ScriptableCullingParameters m_CullingParam; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void ReinitDrawSetIds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REINITDRAWSETIDS_OFFSET))(this);
		}

		::System::Void SetResourceLoader(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_IResourceLoader* loader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_IResourceLoader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_SETRESOURCELOADER_OFFSET))(this, loader);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_CLEANUP_OFFSET))(this);
		}

		::System::Object* AddItem(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc& desc)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ADDITEM_OFFSET))(this, desc);
		}

		::System::Boolean IsValid(::System::Object* handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ISVALID_OFFSET))(this, handle);
		}

		::System::Void RemoveItem(::System::Object* handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REMOVEITEM_OFFSET))(this, handle);
		}

		::System::Void OnBattleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ONBATTLEEND_OFFSET))(this);
		}

		::System::Void EnableSimulation(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_ENABLESIMULATION_OFFSET))(this, enable);
		}

		::System::Void RefreshItemSimulation(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_REFRESHITEMSIMULATION_OFFSET))(this, item);
		}

		::System::Void Resize(::System::Object* handle, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_RESIZE_OFFSET))(this, handle, width, height);
		}

		::UnityEngine::RenderTexture* GetRT(::System::Object* handle)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_GETRT_OFFSET))(this, handle);
		}

		::UnityEngine::GameObject* GetGOInstance(::System::Object* handle)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_GETGOINSTANCE_OFFSET))(this, handle);
		}

		::System::Void DownSampleAndBlur(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 mipIndex, ::UnityEngine::Vector2Int sourceSize, ::UnityEngine::RenderTexture* sourceColor, ::UnityEngine::Rendering::Universal::ForwardRendererData_SpecialDamageBloomConfig* napBloomConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Vector2Int, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::Universal::ForwardRendererData_SpecialDamageBloomConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_DOWNSAMPLEANDBLUR_OFFSET))(this, cmd, mipIndex, sourceSize, sourceColor, napBloomConfig);
		}

		::System::Void UpdateInSRP(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_UPDATEINSRP_OFFSET))(this, context, renderingData, globalSetings);
		}
	};
}
