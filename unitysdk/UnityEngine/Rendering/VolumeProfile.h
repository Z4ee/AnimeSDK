#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET UNITYSDK_OFFSET(0x18901600)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x18901BD0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x18901940)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET UNITYSDK_OFFSET(0x18901730)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18901520)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET UNITYSDK_OFFSET(0x18901850)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET UNITYSDK_OFFSET(0x189015F0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET UNITYSDK_OFFSET(0x18901AA0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18901C80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile_TypeDefinitionIndex = 27947;

	class VolumeProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* components; // 0x18
		::System::Boolean isDirty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeComponent* Add(::System::RuntimeTypeHandle typeHandle, ::System::Boolean overrides)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET))(this, typeHandle, overrides);
		}

		::System::Void Remove(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET))(this, typeHandle);
		}

		::System::Boolean Has(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET))(this, typeHandle);
		}

		::System::Boolean HasSubclassOf(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET))(this, typeHandle);
		}

		::System::Boolean TryGet(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeComponent*& component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeComponent*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET))(this, typeHandle, component);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET))(this);
		}
	};
}
