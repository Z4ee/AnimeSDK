#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

inline static constexpr unsigned int ZzzUiCurveGraphic_CurveSegment_PrevCurveInfo_TypeDefinitionIndex = 45746;

struct alignas(4) ZzzUiCurveGraphic_CurveSegment_PrevCurveInfo
{
	::System::Single TotalLength; // 0x10
	::UnityEngine::Vector2 EndDirection; // 0x14
};
