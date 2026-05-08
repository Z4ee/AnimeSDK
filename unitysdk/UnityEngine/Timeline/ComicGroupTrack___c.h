#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA84970)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA849B0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__GET_SPLITSCREENCLIPS_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BA849C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicGroupTrack___c_TypeDefinitionIndex = 30760;

	class ComicGroupTrack___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::ComicGroupTrack___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::ComicGroupTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack___c_TypeDefinitionIndex)->GetStaticField(0x24DE0);
		}
		static ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack___c_TypeDefinitionIndex)->GetStaticField(0x24DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_SplitScreenClips_b__22_0(::UnityEngine::Timeline::TimelineClip* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__GET_SPLITSCREENCLIPS_B__22_0_OFFSET))(this, c);
		}
	};
}
