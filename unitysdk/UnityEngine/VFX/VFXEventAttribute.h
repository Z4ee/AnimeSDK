#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::VFX { class VisualEffectAsset; }

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXEventAttribute_TypeDefinitionIndex = 6283;

	class VFXEventAttribute : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Boolean m_Owner; // 0x18
		::UnityEngine::VFX::VisualEffectAsset* m_VfxAsset; // 0x20
	};
}
