#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }

#define UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET UNITYSDK_OFFSET(0x189F7AE0)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGBA_OFFSET UNITYSDK_OFFSET(0x189F7FE0)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET UNITYSDK_OFFSET(0x189F7B60)
#define UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET UNITYSDK_OFFSET(0x189F7AF0)
#define UNITYENGINE_COLORUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x189F85D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 4027;

	class ColorUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Boolean DoTryParseHtmlColor(::System::String* htmlString, ::UnityEngine::Color32& color)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET))(htmlString, color);
		}

		static ::System::Boolean TryParseHtmlString(::System::String* htmlString, ::UnityEngine::Color& color)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET))(htmlString, color);
		}

		static ::System::String* ToHtmlStringRGB(::UnityEngine::Color color)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET))(color);
		}

		static ::System::String* ToHtmlStringRGBA(::UnityEngine::Color color)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGBA_OFFSET))(color);
		}
	};
}
