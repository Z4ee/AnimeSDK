#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UberPostAndFinalPassSharedData.h"

namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET UNITYSDK_OFFSET(0x1A6A92A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET UNITYSDK_OFFSET(0x1A6A94F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_ISANTIALIASINGNEEDUPSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A6A9250)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessUtils_TypeDefinitionIndex = 30218;

	class PostProcessUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsAntialiasingNeedUpSample(::UnityEngine::NAPRenderPipeline0::AntialiasingMode mode)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_ISANTIALIASINGNEEDUPSAMPLE_OFFSET))(mode);
		}

		static ::System::Int32 ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, ::System::Int32 index, ::System::Int32 cameraPixelWidth, ::System::Int32 cameraPixelHeight, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET))(data, index, cameraPixelWidth, cameraPixelHeight, uberOrFinalPassMaterial, sharedData);
		}

		static ::System::Void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Rendering::Universal::FilmGrain* settings, ::System::Int32 cameraPixelWidth, ::System::Int32 cameraPixelHeight, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET))(data, settings, cameraPixelWidth, cameraPixelHeight, uberOrFinalPassMaterial, sharedData);
		}
	};
}
