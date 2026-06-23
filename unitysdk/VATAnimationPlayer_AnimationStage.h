#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int VATAnimationPlayer_AnimationStage_TypeDefinitionIndex = 67998;

struct alignas(4) VATAnimationPlayer_AnimationStage
{
	::System::Int32 startFrame; // 0x10
	::System::Int32 endFrame; // 0x14
	::System::Single time; // 0x18
};
