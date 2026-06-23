#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class VolumeDataInterpolatorFunc; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENTINTERPOLATORS_REGISTERINTERPOLATORFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D6A55D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENTINTERPOLATORS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA360)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeComponentInterpolators_TypeDefinitionIndex = 6067;

	class VolumeComponentInterpolators : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeDataInterpolatorFunc*>** StaticGet_ComponentInterpolators()
		{
			return (::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeDataInterpolatorFunc*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponentInterpolators_TypeDefinitionIndex)->GetStaticField(0x4F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENTINTERPOLATORS__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterInterpolatorFunction(::System::Int32 componentTypeId, ::UnityEngine::NAPRenderPipeline0::VolumeDataInterpolatorFunc* func)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::NAPRenderPipeline0::VolumeDataInterpolatorFunc*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENTINTERPOLATORS_REGISTERINTERPOLATORFUNCTION_OFFSET))(componentTypeId, func);
		}
	};
}
