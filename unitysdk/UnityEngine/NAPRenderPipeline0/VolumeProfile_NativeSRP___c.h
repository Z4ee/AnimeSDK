#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D433280)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4332C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__ONENABLE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D4332D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeProfile_NativeSRP___c_TypeDefinitionIndex = 6076;

	class VolumeProfile_NativeSRP___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile_NativeSRP___c_TypeDefinitionIndex)->GetStaticField(0x5320);
		}
		static ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP___c** StaticGet___9()
		{
			return (::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile_NativeSRP___c_TypeDefinitionIndex)->GetStaticField(0x5328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__3_0(::UnityEngine::NAPRenderPipeline0::VolumeComponent* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP___C__ONENABLE_B__3_0_OFFSET))(this, x);
		}
	};
}
