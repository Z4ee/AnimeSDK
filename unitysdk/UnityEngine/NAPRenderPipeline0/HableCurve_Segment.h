#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SEGMENT_EVAL_OFFSET UNITYSDK_OFFSET(0x1E7CB2E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CB340)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int HableCurve_Segment_TypeDefinitionIndex = 5964;

	class HableCurve_Segment : public ::System::Object
	{
	public:
		::System::Single offsetX; // 0x10
		::System::Single offsetY; // 0x14
		::System::Single scaleX; // 0x18
		::System::Single scaleY; // 0x1C
		::System::Single lnA; // 0x20
		::System::Single B; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SEGMENT__CTOR_OFFSET))(this);
		}

		::System::Single Eval(::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SEGMENT_EVAL_OFFSET))(this, x);
		}
	};
}
