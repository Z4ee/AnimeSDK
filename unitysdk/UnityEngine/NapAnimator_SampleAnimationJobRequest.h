#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapAnimator_SampleAnimationJobRequest_TypeDefinitionIndex = 6657;

	struct alignas(8) NapAnimator_SampleAnimationJobRequest
	{
		::System::Int32 AnimationID; // 0x10
		::System::Single Time; // 0x14
		::System::Single PrevTime; // 0x18
		::System::Int32 PlayFlag; // 0x1C
		::System::Int32 OutPoseDataLen; // 0x20
		::System::Void* OutPoseDataPtr; // 0x28
		::System::Void* OutRootMotionDataPtr; // 0x30
		::System::Int32 CurveNum; // 0x38
		::System::Int32* CurveIds; // 0x40
		::System::Void* OutCurveValues; // 0x48
	};
}
