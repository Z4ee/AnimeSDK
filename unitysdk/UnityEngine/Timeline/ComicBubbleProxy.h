#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Timeline/ArrowDir.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_COMICBUBBLEPROXY_SHOWARROW_OFFSET UNITYSDK_OFFSET(0x1F9B6BF0)
#define UNITYENGINE_TIMELINE_COMICBUBBLEPROXY_SHOWTEX_OFFSET UNITYSDK_OFFSET(0x1F9B6C50)
#define UNITYENGINE_TIMELINE_COMICBUBBLEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B6CF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicBubbleProxy_TypeDefinitionIndex = 32939;

	class ComicBubbleProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::String*>* ShowTextAction; // 0x18
		::System::Action_1<::UnityEngine::Timeline::ArrowDir>* ShowArrowAction; // 0x20
		::UnityEngine::GameObject* Arrow; // 0x28
		::System::Action_1<::System::Boolean>* SetArrowActive; // 0x30
		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* GetOffsetPostion; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICBUBBLEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void ShowArrow(::UnityEngine::Timeline::ArrowDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ArrowDir))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICBUBBLEPROXY_SHOWARROW_OFFSET))(this, dir);
		}

		::System::Void ShowTex(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICBUBBLEPROXY_SHOWTEX_OFFSET))(this, text);
		}
	};
}
