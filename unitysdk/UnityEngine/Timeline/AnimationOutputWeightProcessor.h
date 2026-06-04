#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationMotionXToDeltaPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/AnimationOutputWeightProcessor_WeightInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B22AF20)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_1_OFFSET UNITYSDK_OFFSET(0x1B22AB90)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET UNITYSDK_OFFSET(0x1B22AA80)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22A9E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationOutputWeightProcessor_TypeDefinitionIndex = 35830;

	class AnimationOutputWeightProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* m_Mixers; // 0x10
		::UnityEngine::Animations::AnimationPlayableOutput m_Output; // 0x18
		::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable; // 0x28

		::System::Void _ctor(::UnityEngine::Animations::AnimationPlayableOutput a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void FindMixers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET))(this);
		}

		::System::Void FindMixers_1(::UnityEngine::Playables::Playable a1, ::System::Int32 a2, ::UnityEngine::Playables::Playable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Int32, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET))(this);
		}
	};
}
