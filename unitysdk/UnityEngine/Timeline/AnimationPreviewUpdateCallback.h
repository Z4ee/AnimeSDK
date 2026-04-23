#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Experimental::Animations { class IAnimationWindowPreview; }

#define UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A3D8060)
#define UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK_FETCHPREVIEWCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A3D8250)
#define UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D7F80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPreviewUpdateCallback_TypeDefinitionIndex = 35537;

	class AnimationPreviewUpdateCallback : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Animations::IAnimationWindowPreview*>* m_PreviewComponents; // 0x10
		::UnityEngine::Playables::PlayableGraph m_Graph; // 0x18
		::UnityEngine::Animations::AnimationPlayableOutput m_Output; // 0x28

		::System::Void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK__CTOR_OFFSET))(this, output);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK_EVALUATE_OFFSET))(this);
		}

		::System::Void FetchPreviewComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPREVIEWUPDATECALLBACK_FETCHPREVIEWCOMPONENTS_OFFSET))(this);
		}
	};
}
