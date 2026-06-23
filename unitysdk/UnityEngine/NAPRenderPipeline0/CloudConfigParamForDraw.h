#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CloudConfigParamForDraw_TypeDefinitionIndex = 5940;

	struct alignas(8) CloudConfigParamForDraw
	{
		::System::Int32 highCloudCount; // 0x10
		::UnityEngine::Material* cloudMaterial; // 0x18
		::System::Int32 cloudMaterialID; // 0x20
		::UnityEngine::Vector4 _CloudMoveParam; // 0x24
		::System::Single _CloudHeight; // 0x34
		::System::Single _CloudHeightOffset; // 0x38
		::System::Single _CloudMiddleColorRange; // 0x3C
		::UnityEngine::Vector4 _CloudEmmitParam; // 0x40
		::UnityEngine::Vector4 _CloudSize_AtlasInfo; // 0x50
		::UnityEngine::Vector4 _CloudAroundSunColor_Curve; // 0x60
		::UnityEngine::Vector4 _CloudAroundMoonColor_Curve; // 0x70
	};
}
