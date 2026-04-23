#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class Type; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProxy; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET UNITYSDK_OFFSET(0x1A33A960)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x1A33A9B0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET UNITYSDK_OFFSET(0x1A339A00)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET UNITYSDK_OFFSET(0x1A339A40)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x1A3385C0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTPROXY_OFFSET UNITYSDK_OFFSET(0x1A338670)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A338600)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A336F70)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_ISANYENABLE_OFFSET UNITYSDK_OFFSET(0x1A3385E0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINPROXY_OFFSET UNITYSDK_OFFSET(0x1A338740)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x1A3386D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1A3385A0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABALLBASETYPES_OFFSET UNITYSDK_OFFSET(0x1A339BE0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A3388A0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A33A270)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A336FD0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET UNITYSDK_OFFSET(0x1A338B00)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET UNITYSDK_OFFSET(0x1A33A4D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1A339D80)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x1A3385D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_CURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A338630)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_ISANYENABLE_OFFSET UNITYSDK_OFFSET(0x1A3385F0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x1A338700)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET UNITYSDK_OFFSET(0x1A3385B0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A337150)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATECURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A339BF0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1A33AD80)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A33AD70)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A33B040)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3387A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeManager_TypeDefinitionIndex = 33530;

	class VolumeManager : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x684E0);
		}
		static ::UnityEngine::Rendering::Volume** StaticGet__CurrentVolume_k__BackingField()
		{
			return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x684E8);
		}
		static ::UnityEngine::Rendering::Volume** StaticGet__MainVolume_k__BackingField()
		{
			return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(VolumeManager_TypeDefinitionIndex)->GetStaticField(0x684F0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* m_ComponentsDefaultState; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::Type*>* _baseComponentTypes_k__BackingField; // 0x18
		::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* m_Volumes; // 0x28
		::System::Boolean _IsAnyEnable_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::VolumeManager* get_instance()
		{
			return ((::UnityEngine::Rendering::VolumeManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::Rendering::VolumeStack* get_stack()
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET))(this);
		}

		::System::Void set_stack(::UnityEngine::Rendering::VolumeStack* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_baseComponentTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET))(this);
		}

		::System::Void set_baseComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET))(this, value);
		}

		::System::Boolean get_IsAnyEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_ISANYENABLE_OFFSET))(this);
		}

		::System::Void set_IsAnyEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_ISANYENABLE_OFFSET))(this, value);
		}

		static ::UnityEngine::Rendering::Volume* get_CurrentVolume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTVOLUME_OFFSET))();
		}

		static ::System::Void set_CurrentVolume(::UnityEngine::Rendering::Volume* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_CURRENTVOLUME_OFFSET))(value);
		}

		static ::UnityEngine::Rendering::VolumeProxy* get_CurrentProxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTPROXY_OFFSET))();
		}

		static ::UnityEngine::Rendering::Volume* get_MainVolume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINVOLUME_OFFSET))();
		}

		static ::System::Void set_MainVolume(::UnityEngine::Rendering::Volume* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_MAINVOLUME_OFFSET))(value);
		}

		static ::UnityEngine::Rendering::VolumeProxy* get_MainProxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINPROXY_OFFSET))();
		}

		::System::Void Init(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_INIT_OFFSET))(this, types);
		}

		::UnityEngine::Rendering::VolumeStack* CreateStack()
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET))(this);
		}

		::System::Void DestroyStack(::UnityEngine::Rendering::VolumeStack* stack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET))(this, stack);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* GrabAllBaseTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABALLBASETYPES_OFFSET))(this);
		}

		::System::Void ReloadBaseTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET))(this, types);
		}

		::System::Void Register(::UnityEngine::Rendering::Volume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET))(this, volume);
		}

		::System::Void Unregister(::UnityEngine::Rendering::Volume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET))(this, volume);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RESET_OFFSET))(this);
		}

		::System::Void UpdateCurrentVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATECURRENTVOLUME_OFFSET))(this);
		}

		::System::Void OverrideData(::UnityEngine::Rendering::VolumeStack* stack, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET))(this, stack, components);
		}

		::System::Void ReplaceData(::UnityEngine::Rendering::VolumeStack* stack, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET))(this, stack, components);
		}

		::System::Void CheckBaseTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET))(this);
		}

		::System::Void CheckStack(::UnityEngine::Rendering::VolumeStack* stack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET))(this, stack);
		}

		::System::Void Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET))(this, trigger, layerMask);
		}

		::System::Void Update_1(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_1_OFFSET))(this, stack, trigger, layerMask);
		}
	};
}
