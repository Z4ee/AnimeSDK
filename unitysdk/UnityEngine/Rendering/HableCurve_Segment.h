#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HABLECURVE_SEGMENT_EVAL_OFFSET UNITYSDK_OFFSET(0x1EBFBE50)
#define UNITYENGINE_RENDERING_HABLECURVE_SEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFBD80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_Segment_TypeDefinitionIndex = 34932;

	class HableCurve_Segment : public ::System::Object
	{
	public:
		::System::Single offsetY; // 0x10
		::System::Single B; // 0x14
		::System::Single offsetX; // 0x18
		::System::Single scaleX; // 0x1C
		::System::Single lnA; // 0x20
		::System::Single scaleY; // 0x24

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
