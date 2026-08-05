#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }

#define UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET UNITYSDK_OFFSET(0x1E312940)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGBA_OFFSET UNITYSDK_OFFSET(0x1E312E20)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET UNITYSDK_OFFSET(0x1E3129C0)
#define UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET UNITYSDK_OFFSET(0x1E312950)
#define UNITYENGINE_COLORUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3133C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 5293;

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
