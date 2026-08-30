#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TRACKASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECDF8E0)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECDF910)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__164_0_OFFSET UNITYSDK_OFFSET(0x1ECDF920)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset___c_TypeDefinitionIndex = 37503;

	class TrackAsset___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__164_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset___c_TypeDefinitionIndex)->GetStaticField(0x54280);
		}
		static ::UnityEngine::Timeline::TrackAsset___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TrackAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset___c_TypeDefinitionIndex)->GetStaticField(0x54288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortClips_b__164_0(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__164_0_OFFSET))(this, a1, a2);
		}
	};
}
