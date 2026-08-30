#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }

#define UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET UNITYSDK_OFFSET(0x1DEC8660)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGBA_OFFSET UNITYSDK_OFFSET(0x1DEC8A80)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET UNITYSDK_OFFSET(0x1DEC86E0)
#define UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC8670)
#define UNITYENGINE_COLORUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC8F60)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 4218;

	class ColorUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Boolean DoTryParseHtmlColor(::System::String* a1, ::UnityEngine::Color32& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseHtmlString(::System::String* a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* ToHtmlStringRGB(::UnityEngine::Color a1)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET))(a1);
		}

		static ::System::String* ToHtmlStringRGBA(::UnityEngine::Color a1)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGBA_OFFSET))(a1);
		}
	};
}
