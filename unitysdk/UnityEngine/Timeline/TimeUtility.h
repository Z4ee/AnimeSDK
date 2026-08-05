#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_1_OFFSET UNITYSDK_OFFSET(0x1EF77340)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_OFFSET UNITYSDK_OFFSET(0x1EF77240)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x1EF787F0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_GETEPSILON_OFFSET UNITYSDK_OFFSET(0x1EF77080)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_1_OFFSET UNITYSDK_OFFSET(0x1EF77590)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1EF77440)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_PARSETIMECODE_OFFSET UNITYSDK_OFFSET(0x1EF78090)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_REMOVECHAR_OFFSET UNITYSDK_OFFSET(0x1EF78670)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ROUNDTOFRAME_OFFSET UNITYSDK_OFFSET(0x1EF77770)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASFRAMES_OFFSET UNITYSDK_OFFSET(0x1EF77910)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASTIMECODE_OFFSET UNITYSDK_OFFSET(0x1EF77A10)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TOEXACTFRAMES_OFFSET UNITYSDK_OFFSET(0x1EF77140)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TOFRAMES_OFFSET UNITYSDK_OFFSET(0x1EF76E20)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_VALIDATEFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1EF76D70)
#define UNITYENGINE_TIMELINE_TIMEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF78A40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeUtility_TypeDefinitionIndex = 33068;

	class TimeUtility : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kTimeEpsilon()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x7FB0);
		}
		static ::System::Double* StaticGet_k_MaxTimelineDurationInSeconds()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x7FB8);
		}
		static ::System::Double* StaticGet_kFrameRateEpsilon()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x7FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void ValidateFrameRate(::System::Double frameRate)
		{
			return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_VALIDATEFRAMERATE_OFFSET))(frameRate);
		}

		static ::System::Int32 ToFrames(::System::Double time, ::System::Double frameRate)
		{
			return ((::System::Int32(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TOFRAMES_OFFSET))(time, frameRate);
		}

		static ::System::Double ToExactFrames(::System::Double time, ::System::Double frameRate)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TOEXACTFRAMES_OFFSET))(time, frameRate);
		}

		static ::System::Double FromFrames(::System::Int32 frames, ::System::Double frameRate)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_OFFSET))(frames, frameRate);
		}

		static ::System::Double FromFrames_1(::System::Double frames, ::System::Double frameRate)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_1_OFFSET))(frames, frameRate);
		}

		static ::System::Boolean OnFrameBoundary(::System::Double time, ::System::Double frameRate)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_OFFSET))(time, frameRate);
		}

		static ::System::Double GetEpsilon(::System::Double time, ::System::Double frameRate)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_GETEPSILON_OFFSET))(time, frameRate);
		}

		static ::System::Boolean OnFrameBoundary_1(::System::Double time, ::System::Double frameRate, ::System::Double epsilon)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_1_OFFSET))(time, frameRate, epsilon);
		}

		static ::System::Double RoundToFrame(::System::Double time, ::System::Double frameRate)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ROUNDTOFRAME_OFFSET))(time, frameRate);
		}

		static ::System::String* TimeAsFrames(::System::Double timeValue, ::System::Double frameRate, ::System::String* format)
		{
			return ((::System::String*(*)(::System::Double, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASFRAMES_OFFSET))(timeValue, frameRate, format);
		}

		static ::System::String* TimeAsTimeCode(::System::Double timeValue, ::System::Double frameRate, ::System::String* format)
		{
			return ((::System::String*(*)(::System::Double, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASTIMECODE_OFFSET))(timeValue, frameRate, format);
		}

		static ::System::Double ParseTimeCode(::System::String* timeCode, ::System::Double frameRate, ::System::Double defaultValue)
		{
			return ((::System::Double(*)(::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_PARSETIMECODE_OFFSET))(timeCode, frameRate, defaultValue);
		}

		static ::System::Double GetAnimationClipLength(::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Double(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET))(clip);
		}

		static ::System::String* RemoveChar(::System::String* str, ::System::Func_2<::System::Char, ::System::Boolean>* charToRemoveFunc)
		{
			return ((::System::String*(*)(::System::String*, ::System::Func_2<::System::Char, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_REMOVECHAR_OFFSET))(str, charToRemoveFunc);
		}
	};
}
