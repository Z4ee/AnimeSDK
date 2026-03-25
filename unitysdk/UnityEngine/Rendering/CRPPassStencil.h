#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendState.h"
#include "unitysdk/UnityEngine/Rendering/DepthState.h"
#include "unitysdk/UnityEngine/Rendering/RasterState.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateMask.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

#define UNITYENGINE_RENDERING_CRPPASSSTENCIL_SETPASSSTENCIL_OFFSET UNITYSDK_OFFSET(0x18A3CE40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPassStencil_TypeDefinitionIndex = 4664;

	struct alignas(4) CRPPassStencil
	{
		::System::Int32 replaceType; // 0x10
		::System::Int32 shaderFilterID; // 0x14
		::UnityEngine::Rendering::BlendState blendState; // 0x18
		::UnityEngine::Rendering::RasterState rasterState; // 0x5C
		::UnityEngine::Rendering::DepthState depthState; // 0x6C
		::UnityEngine::Rendering::StencilState stencilState; // 0x6E
		::System::Int32 stencilRef; // 0x7C
		::UnityEngine::Rendering::RenderStateMask mask; // 0x80

		static ::System::Void SetPassStencil(::UnityEngine::Rendering::CRPPassStencil& stencilState, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPPassStencil&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPPASSSTENCIL_SETPASSSTENCIL_OFFSET))(stencilState, passIndex);
		}
	};
}
