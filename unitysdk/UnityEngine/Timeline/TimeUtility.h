#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_1_OFFSET UNITYSDK_OFFSET(0x1B242470)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_OFFSET UNITYSDK_OFFSET(0x1B2423E0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x1B22B6F0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_GETEPSILON_OFFSET UNITYSDK_OFFSET(0x1B2422A0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_1_OFFSET UNITYSDK_OFFSET(0x1B2425D0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1B242510)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_PARSETIMECODE_OFFSET UNITYSDK_OFFSET(0x1B242FF0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_REMOVECHAR_OFFSET UNITYSDK_OFFSET(0x1B243650)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_ROUNDTOFRAME_OFFSET UNITYSDK_OFFSET(0x1B2427A0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASFRAMES_OFFSET UNITYSDK_OFFSET(0x1B2428C0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASTIMECODE_OFFSET UNITYSDK_OFFSET(0x1B242AC0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TOEXACTFRAMES_OFFSET UNITYSDK_OFFSET(0x1B242340)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_TOFRAMES_OFFSET UNITYSDK_OFFSET(0x1B2420F0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_VALIDATEFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1B242070)
#define UNITYENGINE_TIMELINE_TIMEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B243750)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeUtility_TypeDefinitionIndex = 35940;

	class TimeUtility : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kTimeEpsilon()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x43D0);
		}
		static ::System::Double* StaticGet_k_MaxTimelineDurationInSeconds()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x43D8);
		}
		static ::System::Int32* StaticGet_FRAME_RATE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x43E0);
		}
		static ::System::Double* StaticGet_kFrameRateEpsilon()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimeUtility_TypeDefinitionIndex)->GetStaticField(0x43E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void ValidateFrameRate(::System::Double a1)
		{
			return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_VALIDATEFRAMERATE_OFFSET))(a1);
		}

		static ::System::Int32 ToFrames(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Int32(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TOFRAMES_OFFSET))(a1, a2);
		}

		static ::System::Double ToExactFrames(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TOEXACTFRAMES_OFFSET))(a1, a2);
		}

		static ::System::Double FromFrames(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_OFFSET))(a1, a2);
		}

		static ::System::Double FromFrames_1(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_FROMFRAMES_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean OnFrameBoundary(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_OFFSET))(a1, a2);
		}

		static ::System::Double GetEpsilon(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_GETEPSILON_OFFSET))(a1, a2);
		}

		static ::System::Boolean OnFrameBoundary_1(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ONFRAMEBOUNDARY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Double RoundToFrame(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_ROUNDTOFRAME_OFFSET))(a1, a2);
		}

		static ::System::String* TimeAsFrames(::System::Double a1, ::System::Double a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Double, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASFRAMES_OFFSET))(a1, a2, a3);
		}

		static ::System::String* TimeAsTimeCode(::System::Double a1, ::System::Double a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Double, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_TIMEASTIMECODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Double ParseTimeCode(::System::String* a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_PARSETIMECODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Double GetAnimationClipLength(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Double(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET))(a1);
		}

		static ::System::String* RemoveChar(::System::String* a1, ::System::Func_2<::System::Char, ::System::Boolean>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Func_2<::System::Char, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_REMOVECHAR_OFFSET))(a1, a2);
		}
	};
}
