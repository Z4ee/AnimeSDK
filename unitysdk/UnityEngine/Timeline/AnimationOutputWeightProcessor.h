#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationMotionXToDeltaPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/AnimationOutputWeightProcessor_WeightInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F710470)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_1_OFFSET UNITYSDK_OFFSET(0x1F710000)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET UNITYSDK_OFFSET(0x1F70FE50)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_SETANIMATIONTRACK_OFFSET UNITYSDK_OFFSET(0x1F70FD70)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F70FD80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationOutputWeightProcessor_TypeDefinitionIndex = 32874;

	class AnimationOutputWeightProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* m_Mixers; // 0x10
		::UnityEngine::Timeline::AnimationTrack* _animTrack; // 0x18
		::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable; // 0x20
		::UnityEngine::Animations::AnimationPlayableOutput m_Output; // 0x30

		::System::Void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR__CTOR_OFFSET))(this, output);
		}

		::System::Void SetAnimationTrack(::UnityEngine::Timeline::AnimationTrack* animTrack)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_SETANIMATIONTRACK_OFFSET))(this, animTrack);
		}

		::System::Void FindMixers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET))(this);
		}

		::System::Void FindMixers_1(::UnityEngine::Playables::Playable parent, ::System::Int32 port, ::UnityEngine::Playables::Playable node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Int32, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_1_OFFSET))(this, parent, port, node);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET))(this);
		}
	};
}
