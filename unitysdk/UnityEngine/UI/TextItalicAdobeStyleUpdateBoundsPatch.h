#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC6A790)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EC6A970)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6AAE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextItalicAdobeStyleUpdateBoundsPatch_TypeDefinitionIndex = 51924;

	class TextItalicAdobeStyleUpdateBoundsPatch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::TextItalicAdobeStyle* _textItalicAdobeStyle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLEUPDATEBOUNDSPATCH_ONDESTROY_OFFSET))(this);
		}
	};
}
