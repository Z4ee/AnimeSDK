#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBlendState.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA2AE90)
#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AE40)
#define UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AF20)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1DA9B7B0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define UNITYENGINE_RENDERING_BLENDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AE10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendState_TypeDefinitionIndex = 6226;

	struct alignas(2) BlendState
	{
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState0; // 0x10
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState1; // 0x18
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState2; // 0x20
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState3; // 0x28
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState4; // 0x30
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState5; // 0x38
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState6; // 0x40
		::UnityEngine::Rendering::RenderTargetBlendState m_BlendState7; // 0x48
		::System::Byte m_SeparateMRTBlendStates; // 0x50
		::System::Byte m_AlphaToMask; // 0x51
		::System::Int16 m_Padding; // 0x52

		::System::Void _ctor(::System::Boolean separateMRTBlend, ::System::Boolean alphaToMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE__CTOR_OFFSET))(this, separateMRTBlend, alphaToMask);
		}

		static ::UnityEngine::Rendering::BlendState get_defaultValue()
		{
			return ((::UnityEngine::Rendering::BlendState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_DEFAULTVALUE_OFFSET))();
		}

		::System::Void set_blendState0(::UnityEngine::Rendering::RenderTargetBlendState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::BlendState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
