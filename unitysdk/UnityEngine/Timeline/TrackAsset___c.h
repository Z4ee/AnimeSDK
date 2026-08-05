#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class Frame; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TRACKASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F821F30)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F821F70)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__GET_END_B__59_0_OFFSET UNITYSDK_OFFSET(0x1F821F80)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__153_0_OFFSET UNITYSDK_OFFSET(0x1F821FA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset___c_TypeDefinitionIndex = 32912;

	class TrackAsset___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__153_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset___c_TypeDefinitionIndex)->GetStaticField(0x28190);
		}
		static ::System::Func_2<::UnityEngine::Timeline::Frame*, ::System::Single>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::Frame*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset___c_TypeDefinitionIndex)->GetStaticField(0x28198);
		}
		static ::UnityEngine::Timeline::TrackAsset___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TrackAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset___c_TypeDefinitionIndex)->GetStaticField(0x281A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__CTOR_OFFSET))(this);
		}

		::System::Single _get_end_b__59_0(::UnityEngine::Timeline::Frame* item)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Timeline::Frame*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__GET_END_B__59_0_OFFSET))(this, item);
		}

		::System::Int32 _SortClips_b__153_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__153_0_OFFSET))(this, clip1, clip2);
		}
	};
}
