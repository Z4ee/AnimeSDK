#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9ABB30)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9ABAD0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9ABBD0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BC21D20)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x96F720)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x96F710)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x54B330)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x744950)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x9ABAC0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x5C3EC0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABA80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBlendState_TypeDefinitionIndex = 6229;

	struct alignas(1) RenderTargetBlendState
	{
		::System::Byte m_WriteMask; // 0x10
		::System::Byte m_SourceColorBlendMode; // 0x11
		::System::Byte m_DestinationColorBlendMode; // 0x12
		::System::Byte m_SourceAlphaBlendMode; // 0x13
		::System::Byte m_DestinationAlphaBlendMode; // 0x14
		::System::Byte m_ColorBlendOperation; // 0x15
		::System::Byte m_AlphaBlendOperation; // 0x16
		::System::Byte m_Padding; // 0x17

		::System::Void _ctor(::UnityEngine::Rendering::ColorWriteMask writeMask, ::UnityEngine::Rendering::BlendMode sourceColorBlendMode, ::UnityEngine::Rendering::BlendMode destinationColorBlendMode, ::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode, ::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode, ::UnityEngine::Rendering::BlendOp colorBlendOperation, ::UnityEngine::Rendering::BlendOp alphaBlendOperation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ColorWriteMask, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendOp, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE__CTOR_OFFSET))(this, writeMask, sourceColorBlendMode, destinationColorBlendMode, sourceAlphaBlendMode, destinationAlphaBlendMode, colorBlendOperation, alphaBlendOperation);
		}

		static ::UnityEngine::Rendering::RenderTargetBlendState get_defaultValue()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DEFAULTVALUE_OFFSET))();
		}

		::System::Void set_writeMask(::UnityEngine::Rendering::ColorWriteMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET))(this, value);
		}

		::System::Void set_sourceColorBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET))(this, value);
		}

		::System::Void set_destinationColorBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET))(this, value);
		}

		::System::Void set_sourceAlphaBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET))(this, value);
		}

		::System::Void set_destinationAlphaBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET))(this, value);
		}

		::System::Void set_colorBlendOperation(::UnityEngine::Rendering::BlendOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET))(this, value);
		}

		::System::Void set_alphaBlendOperation(::UnityEngine::Rendering::BlendOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetBlendState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
