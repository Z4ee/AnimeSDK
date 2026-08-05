#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendState.h"
#include "unitysdk/UnityEngine/Rendering/DepthState.h"
#include "unitysdk/UnityEngine/Rendering/RasterState.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateMask.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA417A0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA415B0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417B0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_BLENDSTATE_OFFSET UNITYSDK_OFFSET(0x6113F0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_MASK_OFFSET UNITYSDK_OFFSET(0xA415A0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_BLENDSTATE_OFFSET UNITYSDK_OFFSET(0xA41540)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_DEPTHSTATE_OFFSET UNITYSDK_OFFSET(0xA41570)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_MASK_OFFSET UNITYSDK_OFFSET(0x96F200)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILREFERENCE_OFFSET UNITYSDK_OFFSET(0xA41590)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA41580)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA41470)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderStateBlock_TypeDefinitionIndex = 6257;

	struct alignas(4) RenderStateBlock
	{
		::UnityEngine::Rendering::BlendState m_BlendState; // 0x10
		::UnityEngine::Rendering::RasterState m_RasterState; // 0x54
		::UnityEngine::Rendering::DepthState m_DepthState; // 0x64
		::UnityEngine::Rendering::StencilState m_StencilState; // 0x66
		::System::Int32 m_StencilReference; // 0x74
		::UnityEngine::Rendering::RenderStateMask m_Mask; // 0x78

		::System::Void _ctor(::UnityEngine::Rendering::RenderStateMask mask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderStateMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK__CTOR_OFFSET))(this, mask);
		}

		::UnityEngine::Rendering::BlendState get_blendState()
		{
			return ((::UnityEngine::Rendering::BlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_BLENDSTATE_OFFSET))(this);
		}

		::System::Void set_blendState(::UnityEngine::Rendering::BlendState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_BLENDSTATE_OFFSET))(this, value);
		}

		::System::Void set_depthState(::UnityEngine::Rendering::DepthState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DepthState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_DEPTHSTATE_OFFSET))(this, value);
		}

		::System::Void set_stencilState(::UnityEngine::Rendering::StencilState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILSTATE_OFFSET))(this, value);
		}

		::System::Void set_stencilReference(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILREFERENCE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::RenderStateMask get_mask()
		{
			return ((::UnityEngine::Rendering::RenderStateMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_MASK_OFFSET))(this);
		}

		::System::Void set_mask(::UnityEngine::Rendering::RenderStateMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderStateMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_MASK_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderStateBlock other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderStateBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET))(this);
		}
	};
}
