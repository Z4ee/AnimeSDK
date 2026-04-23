#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22EC390)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22EC340)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22EC430)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x22AB750)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x22A7220)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0xE21D0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x22A7200)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x22A7210)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x22CE520)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x2A500)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x22D8AA0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x22D8A90)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0xE21E0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x22D8A80)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x22D9550)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x22D8A70)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0xD87E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBlendState_TypeDefinitionIndex = 4574;

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

		::UnityEngine::Rendering::ColorWriteMask get_writeMask()
		{
			return ((::UnityEngine::Rendering::ColorWriteMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_WRITEMASK_OFFSET))(this);
		}

		::System::Void set_writeMask(::UnityEngine::Rendering::ColorWriteMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendMode get_sourceColorBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCECOLORBLENDMODE_OFFSET))(this);
		}

		::System::Void set_sourceColorBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendMode get_destinationColorBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONCOLORBLENDMODE_OFFSET))(this);
		}

		::System::Void set_destinationColorBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendMode get_sourceAlphaBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCEALPHABLENDMODE_OFFSET))(this);
		}

		::System::Void set_sourceAlphaBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendMode get_destinationAlphaBlendMode()
		{
			return ((::UnityEngine::Rendering::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONALPHABLENDMODE_OFFSET))(this);
		}

		::System::Void set_destinationAlphaBlendMode(::UnityEngine::Rendering::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendOp get_colorBlendOperation()
		{
			return ((::UnityEngine::Rendering::BlendOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_COLORBLENDOPERATION_OFFSET))(this);
		}

		::System::Void set_colorBlendOperation(::UnityEngine::Rendering::BlendOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::BlendOp get_alphaBlendOperation()
		{
			return ((::UnityEngine::Rendering::BlendOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_ALPHABLENDOPERATION_OFFSET))(this);
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
