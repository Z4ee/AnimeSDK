#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B4DBA80)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B4DADD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4DAD10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B4DADF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4DBB50)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B4DB290)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B4DAE10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B4DB520)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B4DBB60)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SETALLOVERRIDESTO_1_OFFSET UNITYSDK_OFFSET(0x1B4DB780)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x1B4DB770)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B4DADE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4DAD20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B4DAE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D2D00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT__ONENABLE_B__15_2_OFFSET UNITYSDK_OFFSET(0x1B4DBC00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeComponent_TypeDefinitionIndex = 6057;

	class VolumeComponent : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean active; // 0x18
		::System::String* _displayName_k__BackingField; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>* _parameters_k__BackingField; // 0x28
		::System::Boolean m_AdvancedMode; // 0x30
		::System::Int32 TypeId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_isActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>* get_parameters()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SET_PARAMETERS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Override(::UnityEngine::NAPRenderPipeline0::VolumeComponent* state, ::System::Single interpFactor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_OVERRIDE_OFFSET))(this, state, interpFactor);
		}

		::System::Void SetAllOverridesTo(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET))(this, state);
		}

		::System::Void SetAllOverridesTo_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>* enumerable, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::NAPRenderPipeline0::VolumeParameter*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_SETALLOVERRIDESTO_1_OFFSET))(this, enumerable, state);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT_RELEASE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeParameter* _OnEnable_b__15_2(::System::Reflection::FieldInfo* t)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeParameter*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT__ONENABLE_B__15_2_OFFSET))(this, t);
		}
	};
}
