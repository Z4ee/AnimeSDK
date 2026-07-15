#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HABLECURVE_SEGMENT_EVAL_OFFSET UNITYSDK_OFFSET(0x1B0F2910)
#define UNITYENGINE_RENDERING_HABLECURVE_SEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2840)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_Segment_TypeDefinitionIndex = 34165;

	class HableCurve_Segment : public ::System::Object
	{
	public:
		::System::Single scaleY; // 0x10
		::System::Single lnA; // 0x14
		::System::Single offsetY; // 0x18
		::System::Single offsetX; // 0x1C
		::System::Single scaleX; // 0x20
		::System::Single B; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SEGMENT__CTOR_OFFSET))(this);
		}

		::System::Single Eval(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SEGMENT_EVAL_OFFSET))(this, a1);
		}
	};
}
