#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SRPLensFlareBlendMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_SingleLensFlareData_TypeDefinitionIndex = 26962;

	struct alignas(8) LensFlareCommonSRP_SingleLensFlareData
	{
		::UnityEngine::Vector4 m_FlareData1; // 0x10
		::UnityEngine::Texture* m_FlareTexture; // 0x20
		::System::Int32 m_FlareTextureIndex; // 0x28
		::UnityEngine::Vector4 m_FlareTextureScaleOffset; // 0x2C
		::UnityEngine::Vector4 m_FlareData5; // 0x3C
		::UnityEngine::Vector4 m_FlareData4; // 0x4C
		::UnityEngine::NAPRenderPipeline0::SRPLensFlareBlendMode m_BlendMode; // 0x5C
		::UnityEngine::Matrix4x4 m_FlareMatrix; // 0x60
	};
}
