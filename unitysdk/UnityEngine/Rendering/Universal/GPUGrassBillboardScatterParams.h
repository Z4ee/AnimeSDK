#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x934730)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x934690)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x934740)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETSANITIZED_OFFSET UNITYSDK_OFFSET(0x934660)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x934680)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BC1FDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_QUANTIZE_OFFSET UNITYSDK_OFFSET(0x1BC20880)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x934790)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x934810)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardScatterParams_TypeDefinitionIndex = 27076;

	struct alignas(4) GPUGrassBillboardScatterParams
	{
		::System::Int32 scatterCount; // 0x10
		::System::Single sideSurfaceNormalOffset; // 0x14
		::System::Single horizontalSurfaceHeightOffset; // 0x18
		::System::Single surfaceEdgeInset; // 0x1C
		::System::Single surfaceNoiseStrength; // 0x20
		::System::Single billboardSizeMin; // 0x24
		::System::Single billboardSizeMax; // 0x28
		::System::Boolean enableLocalYMinThreshold; // 0x2C
		::System::Single localYMinThreshold; // 0x30

		static ::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams get_Default()
		{
			return ((::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GET_DEFAULT_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams GetSanitized()
		{
			return ((::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETSANITIZED_OFFSET))(this);
		}

		::System::Int32 GetStableHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETSTABLEHASH_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 Quantize(::System::Single value, ::System::Single quantizeScale)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS_QUANTIZE_OFFSET))(value, quantizeScale);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSCATTERPARAMS___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
