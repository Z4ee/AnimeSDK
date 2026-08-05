#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ADD_OFFSET UNITYSDK_OFFSET(0x1EE29CD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE2A240)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE2A190)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1EE2A040)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HAS_OFFSET UNITYSDK_OFFSET(0x1EE29DD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EE29BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EE29F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_RESET_OFFSET UNITYSDK_OFFSET(0x1EE29CC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2A320)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeProfile_NativeSRP_TypeDefinitionIndex = 6077;

	class VolumeProfile_NativeSRP : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* components; // 0x18
		::System::Boolean debugMode; // 0x20
		::System::Boolean isDirty; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_RESET_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* Add(::System::Type* type, ::System::Boolean overrides)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ADD_OFFSET))(this, type, overrides);
		}

		::System::Void Remove(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_REMOVE_OFFSET))(this, type);
		}

		::System::Boolean Has(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HAS_OFFSET))(this, type);
		}

		::System::Boolean HasSubclassOf(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HASSUBCLASSOF_OFFSET))(this, type);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETCOMPONENTLISTHASHCODE_OFFSET))(this);
		}
	};
}
