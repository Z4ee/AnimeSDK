#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationStream_TypeDefinitionIndex = 5185;

	struct alignas(8) AnimationStream
	{
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::IntPtr constant; // 0x18
		::System::IntPtr input; // 0x20
		::System::IntPtr output; // 0x28
		::System::IntPtr workspace; // 0x30
		::System::IntPtr inputStreamAccessor; // 0x38
		::System::IntPtr animationHandleBinder; // 0x40
	};
}
