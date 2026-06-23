#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_TagItem; }

#define UNITYENGINE_TIMELINE_COMICEVENTBASE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD09D40)
#define UNITYENGINE_TIMELINE_COMICEVENTBASE___C__DISPLAYCLASS15_0__ONTAGDROPDOWN_B__0_OFFSET UNITYSDK_OFFSET(0x1DD09D50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicEventBase___c__DisplayClass15_0_TypeDefinitionIndex = 32324;

	class ComicEventBase___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* ans; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTagDropDown_b__0(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_TagItem* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_TagItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICEVENTBASE___C__DISPLAYCLASS15_0__ONTAGDROPDOWN_B__0_OFFSET))(this, x);
		}
	};
}
