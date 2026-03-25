#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2119E10)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2119DC0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2119EB0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x20D9B40)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x20D5610)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x888B0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x20D55F0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x20D5600)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x20FB900)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x29C50)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_ALPHABLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x2105EE0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_COLORBLENDOPERATION_OFFSET UNITYSDK_OFFSET(0x2105ED0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x888C0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_DESTINATIONCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x2105EC0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCEALPHABLENDMODE_OFFSET UNITYSDK_OFFSET(0x2106990)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_SOURCECOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x2105EB0)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x791D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBlendState_TypeDefinitionIndex = 4572;

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
