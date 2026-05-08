#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0C3C00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B0C3BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_RELOAD_OFFSET UNITYSDK_OFFSET(0x1B0C3700)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C36F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeStack_TypeDefinitionIndex = 6060;

	class VolumeStack : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* components; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK__CTOR_OFFSET))(this);
		}

		::System::Void Reload(::System::Collections::Generic::IEnumerable_1<::System::Type*>* baseTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_RELOAD_OFFSET))(this, baseTypes);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* GetComponent(::System::Int32 typeId)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_GETCOMPONENT_OFFSET))(this, typeId);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMESTACK_DISPOSE_OFFSET))(this);
		}
	};
}
