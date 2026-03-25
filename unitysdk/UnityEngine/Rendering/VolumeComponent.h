#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::Rendering { class VolumeParameter; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188FE5A0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x188FD5A0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x188FD5C0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_INTERP_OFFSET UNITYSDK_OFFSET(0x188FDE20)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x188FE640)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x188FDA50)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188FD5E0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x188FDE10)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x188FDCB0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x188FE6C0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_1_OFFSET UNITYSDK_OFFSET(0x188FDFF0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x188FDFE0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x188FD5B0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x188FD5D0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x188FE740)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT__ONENABLE_B__10_2_OFFSET UNITYSDK_OFFSET(0x188FE760)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent_TypeDefinitionIndex = 27904;

	class VolumeComponent : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean active; // 0x18
		::System::String* _displayName_k__BackingField; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* _parameters_k__BackingField; // 0x28
		::System::Boolean m_AdvancedMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* get_parameters()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Override(::UnityEngine::Rendering::VolumeComponent* state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET))(this, state);
		}

		::System::Void OnOverride(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONOVERRIDE_OFFSET))(this, isActive);
		}

		::System::Void Interp(::UnityEngine::Rendering::VolumeComponent* from, ::UnityEngine::Rendering::VolumeComponent* to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*, ::UnityEngine::Rendering::VolumeComponent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_INTERP_OFFSET))(this, from, to, t);
		}

		::System::Void SetAllOverridesTo(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET))(this, state);
		}

		::System::Void SetAllOverridesTo_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>* enumerable, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_1_OFFSET))(this, enumerable, state);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeParameter* _OnEnable_b__10_2(::System::Reflection::FieldInfo* t)
		{
			return ((::UnityEngine::Rendering::VolumeParameter*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT__ONENABLE_B__10_2_OFFSET))(this, t);
		}
	};
}
