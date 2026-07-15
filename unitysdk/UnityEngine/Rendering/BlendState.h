#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBlendState.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3ACD750)
#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ACD700)
#define UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3ACD7E0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_ALPHATOMASK_OFFSET UNITYSDK_OFFSET(0x3ACD6E0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE0_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE1_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE2_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE3_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE4_OFFSET UNITYSDK_OFFSET(0xC36980)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE5_OFFSET UNITYSDK_OFFSET(0xC390B0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE6_OFFSET UNITYSDK_OFFSET(0xC39050)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE7_OFFSET UNITYSDK_OFFSET(0x2F01F40)
#define UNITYENGINE_RENDERING_BLENDSTATE_GET_SEPARATEMRTBLENDSTATES_OFFSET UNITYSDK_OFFSET(0x3ACD6C0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_ALPHATOMASK_OFFSET UNITYSDK_OFFSET(0x3ACD6F0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE1_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE2_OFFSET UNITYSDK_OFFSET(0xA4B360)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE3_OFFSET UNITYSDK_OFFSET(0x38CBD50)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE4_OFFSET UNITYSDK_OFFSET(0x38D42E0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE5_OFFSET UNITYSDK_OFFSET(0x38D42F0)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE6_OFFSET UNITYSDK_OFFSET(0x38D4300)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE7_OFFSET UNITYSDK_OFFSET(0x38D4310)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_SEPARATEMRTBLENDSTATES_OFFSET UNITYSDK_OFFSET(0x3ACD6D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendState_TypeDefinitionIndex = 4725;

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

		::System::Boolean get_separateMRTBlendStates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_SEPARATEMRTBLENDSTATES_OFFSET))(this);
		}

		::System::Void set_separateMRTBlendStates(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_SEPARATEMRTBLENDSTATES_OFFSET))(this, a1);
		}

		::System::Boolean get_alphaToMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_ALPHATOMASK_OFFSET))(this);
		}

		::System::Void set_alphaToMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_ALPHATOMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState0()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE0_OFFSET))(this);
		}

		::System::Void set_blendState0(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState1()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE1_OFFSET))(this);
		}

		::System::Void set_blendState1(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState2()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE2_OFFSET))(this);
		}

		::System::Void set_blendState2(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE2_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState3()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE3_OFFSET))(this);
		}

		::System::Void set_blendState3(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE3_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState4()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE4_OFFSET))(this);
		}

		::System::Void set_blendState4(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE4_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState5()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE5_OFFSET))(this);
		}

		::System::Void set_blendState5(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE5_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState6()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE6_OFFSET))(this);
		}

		::System::Void set_blendState6(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE6_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState get_blendState7()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_BLENDSTATE7_OFFSET))(this);
		}

		::System::Void set_blendState7(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE7_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::BlendState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BlendState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
