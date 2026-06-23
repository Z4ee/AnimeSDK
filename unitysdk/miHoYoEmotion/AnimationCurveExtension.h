#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace UnityEngine { class AnimationCurve; }

#define MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_AREPOINTSCOLINEAR_OFFSET UNITYSDK_OFFSET(0x1BAE04A0)
#define MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_CHECKTANGENTCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1BAE0890)
#define MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1BAE0C90)
#define MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_KEYFRAMEREDUCTIONWITHCOLINEARITY_OFFSET UNITYSDK_OFFSET(0x1BAE0070)
#define MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_KEYFRAMEREDUCTION_OFFSET UNITYSDK_OFFSET(0x1BAE0A00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int AnimationCurveExtension_TypeDefinitionIndex = 39386;

	class AnimationCurveExtension : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationCurve* KeyFrameReductionWithColinearity(::UnityEngine::AnimationCurve* curve, ::System::Single tolerance)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_KEYFRAMEREDUCTIONWITHCOLINEARITY_OFFSET))(curve, tolerance);
		}

		static ::System::Boolean ArePointsColinear(::UnityEngine::Keyframe a, ::UnityEngine::Keyframe b, ::UnityEngine::Keyframe c, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_AREPOINTSCOLINEAR_OFFSET))(a, b, c, tolerance);
		}

		static ::System::Boolean CheckTangentConsistency(::UnityEngine::Keyframe prev, ::UnityEngine::Keyframe curr, ::UnityEngine::Keyframe next, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_CHECKTANGENTCONSISTENCY_OFFSET))(prev, curr, next, tolerance);
		}

		static ::UnityEngine::AnimationCurve* KeyFrameReduction(::UnityEngine::AnimationCurve* curve)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_KEYFRAMEREDUCTION_OFFSET))(curve);
		}

		static ::System::Single GetDuration(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ANIMATIONCURVEEXTENSION_GETDURATION_OFFSET))(curve);
		}
	};
}
