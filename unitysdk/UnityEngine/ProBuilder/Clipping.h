#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Clipping_OutCode.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_PROBUILDER_CLIPPING_COMPUTEOUTCODE_OFFSET UNITYSDK_OFFSET(0x1EAD2770)
#define UNITYENGINE_PROBUILDER_CLIPPING_RECTCONTAINSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1EAD27B0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Clipping_TypeDefinitionIndex = 43151;

	class Clipping : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Clipping_OutCode ComputeOutCode(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::ProBuilder::Clipping_OutCode(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CLIPPING_COMPUTEOUTCODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RectContainsLineSegment(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CLIPPING_RECTCONTAINSLINESEGMENT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
