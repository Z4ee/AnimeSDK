#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendState.h"
#include "unitysdk/UnityEngine/Rendering/DepthState.h"
#include "unitysdk/UnityEngine/Rendering/RasterState.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateMask.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3889E80)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3889E20)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3889F30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderStateBlock_TypeDefinitionIndex = 4746;

	struct alignas(4) RenderStateBlock
	{
		::UnityEngine::Rendering::BlendState m_BlendState; // 0x10
		::UnityEngine::Rendering::RasterState m_RasterState; // 0x54
		::UnityEngine::Rendering::DepthState m_DepthState; // 0x64
		::UnityEngine::Rendering::StencilState m_StencilState; // 0x66
		::System::Int32 m_StencilReference; // 0x74
		::UnityEngine::Rendering::RenderStateMask m_Mask; // 0x78

		::System::Boolean Equals(::UnityEngine::Rendering::RenderStateBlock a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderStateBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET))(this);
		}
	};
}
