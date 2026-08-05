#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawCloudParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawFakeLightVolumetricFogParam.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawLightShaftParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainDropParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainSplashParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawSkyCoverParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawVolumetricFogWeatherConfigParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EKodamaGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ESupportedGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/UpdateKodamaLightingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigDrawSkyParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigSkyLutGradParams.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int IWeatherConfig_TypeDefinitionIndex = 5908;

	class IWeatherConfig
	{
	public:
	};
}
