#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class RectMask2D; }

#define UNITYENGINE_UI_CLIPPING_FINDCULLANDCLIPWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1B388FB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Clipping_TypeDefinitionIndex = 5855;

	class Clipping : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* a1, ::System::Boolean& a2)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPING_FINDCULLANDCLIPWORLDRECT_OFFSET))(a1, a2);
		}
	};
}
