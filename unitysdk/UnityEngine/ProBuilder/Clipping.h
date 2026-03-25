#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Clipping_OutCode.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_PROBUILDER_CLIPPING_COMPUTEOUTCODE_OFFSET UNITYSDK_OFFSET(0x187C1950)
#define UNITYENGINE_PROBUILDER_CLIPPING_RECTCONTAINSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x187C1990)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Clipping_TypeDefinitionIndex = 34079;

	class Clipping : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Clipping_OutCode ComputeOutCode(::UnityEngine::Rect rect, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::ProBuilder::Clipping_OutCode(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CLIPPING_COMPUTEOUTCODE_OFFSET))(rect, x, y);
		}

		static ::System::Boolean RectContainsLineSegment(::UnityEngine::Rect rect, ::System::Single x0, ::System::Single y0, ::System::Single x1, ::System::Single y1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CLIPPING_RECTCONTAINSLINESEGMENT_OFFSET))(rect, x0, y0, x1, y1);
		}
	};
}
