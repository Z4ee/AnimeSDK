#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

#define UNITYENGINE_RENDERING_BATCHFILTERSETTINGS_SET_SHADOWCASTINGMODE_OFFSET UNITYSDK_OFFSET(0x9C8C30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchFilterSettings_TypeDefinitionIndex = 6215;

	struct alignas(4) BatchFilterSettings
	{
		::System::UInt32 renderingLayerMask; // 0x10
		::System::Byte layer; // 0x14
		::System::Byte m_motionMode; // 0x15
		::System::Byte m_shadowMode; // 0x16
		::System::Byte m_receiveShadows; // 0x17
		::System::Byte m_staticShadowCaster; // 0x18
		::System::Byte m_allDepthSorted; // 0x19

		::System::Void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHFILTERSETTINGS_SET_SHADOWCASTINGMODE_OFFSET))(this, value);
		}
	};
}
