#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET UNITYSDK_OFFSET(0x1EC1B6C0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC1BD30)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1EC1BA70)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET UNITYSDK_OFFSET(0x1EC1B840)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC1B5B0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EC1B940)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET UNITYSDK_OFFSET(0x1EC1B6B0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET UNITYSDK_OFFSET(0x1EC1BC40)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1BE90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile_TypeDefinitionIndex = 34991;

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

		::UnityEngine::Rendering::VolumeComponent* Add(::System::RuntimeTypeHandle a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean Has(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET))(this, a1);
		}

		::System::Boolean HasSubclassOf(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeComponent*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeComponent*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET))(this);
		}
	};
}
