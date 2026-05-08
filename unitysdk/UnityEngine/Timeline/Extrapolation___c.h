#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_EXTRAPOLATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E2D20)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E2D60)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION___C__SORTCLIPSBYSTARTTIME_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C3E2D70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Extrapolation___c_TypeDefinitionIndex = 30880;

	class Extrapolation___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::Extrapolation___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::Extrapolation___c**)Il2CppClass::FromTypeDefinitionIndex(Extrapolation___c_TypeDefinitionIndex)->GetStaticField(0x24FE0);
		}
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(Extrapolation___c_TypeDefinitionIndex)->GetStaticField(0x24FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION___C__SORTCLIPSBYSTARTTIME_B__2_0_OFFSET))(this, clip1, clip2);
		}
	};
}
