#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LerpItem.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeApplyCache.h"

namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeBounds_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeStack; }
namespace UnityEngine::NAPRenderPipeline0 { class Volume_NativeSRP; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_CREATESTACK_OFFSET UNITYSDK_OFFSET(0x1E94F9C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GETINTERPOLATEDVOLUMESTACKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E94F760)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x1E94F7B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_GLOBALPROFILE_OFFSET UNITYSDK_OFFSET(0x1E951210)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E94F320)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GRABVOLUMES_OFFSET UNITYSDK_OFFSET(0x1E9516A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x1E94FF30)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REBUILDINTERPOLATEDVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1E951A00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REGISTERDEFAULTPROFILE_OFFSET UNITYSDK_OFFSET(0x1E951220)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E94FA60)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_RELOADBASETYPES_OFFSET UNITYSDK_OFFSET(0x1E94F810)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REPLACEDATA_OFFSET UNITYSDK_OFFSET(0x1E9500C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_SETLAYERDIRTY_OFFSET UNITYSDK_OFFSET(0x1E94FC40)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_SORTBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E9521A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E94FD80)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATEVOLUMELAYER_OFFSET UNITYSDK_OFFSET(0x1E94FF00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1E950680)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E9505A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9522F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E94F410)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeManager_TypeDefinitionIndex = 6081;

	class VolumeManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_VolumeComponentTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x5590);
		}
		static ::UnityEngine::NAPRenderPipeline0::VolumeManager** StaticGet_s_Instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::VolumeManager**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x5598);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleVolumeManagerUpdate()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x55A0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleTraverseVolumes()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x55A8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleCheckStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x55B0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleCheckBaseTypes()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x55B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleRebuildInterpolatedVolumeData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x55C0);
		}
		::UnityEngine::NAPRenderPipeline0::VolumeStack* stack; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>*>* m_SortedVolumes; // 0x18
		::System::Action* OnVolumeChange; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>* m_Volumes; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* m_SortNeeded; // 0x30
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* m_ComponentsDefaultState; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeBounds_NativeSRP*>* m_TempColliders; // 0x40
		::UnityEngine::NAPRenderPipeline0::VolumeApplyCache m_OverrideCache; // 0x48
		::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* InterpolatedVolumeData; // 0x68
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::LerpItem>* m_TempLerpItemLists; // 0x70
		::Il2CppArray<::System::Int32>* m_TempLerpItemCounts; // 0x78
		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* m_GlobalProfile; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::VolumeManager* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* GetInterpolatedVolumeStackComponent(::System::Int32 index)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GETINTERPOLATEDVOLUMESTACKCOMPONENT_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_baseComponentTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeStack* CreateStack()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_CREATESTACK_OFFSET))(this);
		}

		::System::Void ReloadBaseTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_RELOADBASETYPES_OFFSET))(this);
		}

		::System::Void Register(::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP* volume, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REGISTER_OFFSET))(this, volume, layer);
		}

		::System::Void Unregister(::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP* volume, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UNREGISTER_OFFSET))(this, volume, layer);
		}

		::System::Void SetLayerDirty(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_SETLAYERDIRTY_OFFSET))(this, layer);
		}

		::System::Void UpdateVolumeLayer(::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP* volume, ::System::Int32 prevLayer, ::System::Int32 newLayer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATEVOLUMELAYER_OFFSET))(this, volume, prevLayer, newLayer);
		}

		::System::Void OverrideData(::UnityEngine::NAPRenderPipeline0::VolumeStack* stack, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* components, ::System::Single interpFactor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_OVERRIDEDATA_OFFSET))(this, stack, components, interpFactor);
		}

		::System::Void ReplaceData(::UnityEngine::NAPRenderPipeline0::VolumeStack* stack, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeStack*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REPLACEDATA_OFFSET))(this, stack, components);
		}

		::System::Void Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATE_OFFSET))(this, trigger, layerMask);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* get_GlobalProfile()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GET_GLOBALPROFILE_OFFSET))(this);
		}

		::System::Void RegisterDefaultProfile(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* globalProfile, ::System::Boolean overWrite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REGISTERDEFAULTPROFILE_OFFSET))(this, globalProfile, overWrite);
		}

		::System::Void Update_1(::UnityEngine::NAPRenderPipeline0::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_UPDATE_1_OFFSET))(this, stack, trigger, layerMask);
		}

		::System::Void RebuildInterpolatedVolumeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_REBUILDINTERPOLATEDVOLUMEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>* GrabVolumes(::UnityEngine::LayerMask mask)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_GRABVOLUMES_OFFSET))(this, mask);
		}

		static ::System::Void SortByPriority(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>* volumes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEMANAGER_SORTBYPRIORITY_OFFSET))(volumes);
		}
	};
}
