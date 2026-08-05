#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_ISVISIBLEGLYPH_OFFSET UNITYSDK_OFFSET(0x1D341490)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_ISVISIBLETEXTGLYPH_OFFSET UNITYSDK_OFFSET(0x1D341540)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_TRYGETCOMPLETEVISIBLETEXTGLYPHRANGEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D341A20)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_TRYGETVISIBLETEXTGLYPHRANGEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D341750)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_TextInfoVisibilityUtils_TypeDefinitionIndex = 78942;

	class NAP_TextInfoVisibilityUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsVisibleGlyph(::UnityEngine::UI::Extension::NAP_CharacterInfo ci)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_CharacterInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_ISVISIBLEGLYPH_OFFSET))(ci);
		}

		static ::System::Boolean IsVisibleTextGlyph(::UnityEngine::UI::Extension::NAP_CharacterInfo ci)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_CharacterInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_ISVISIBLETEXTGLYPH_OFFSET))(ci);
		}

		static ::System::Boolean TryGetVisibleTextGlyphRangeBounds(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::System::Int32 giBegin, ::System::Int32 giEnd, ::System::Single& left, ::System::Single& right, ::System::Single& bottom, ::System::Single& top, ::System::Int32& firstVisibleGi, ::System::Int32& visibleCount)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_TRYGETVISIBLETEXTGLYPHRANGEBOUNDS_OFFSET))(charInfos, giBegin, giEnd, left, right, bottom, top, firstVisibleGi, visibleCount);
		}

		static ::System::Boolean TryGetCompleteVisibleTextGlyphRangeBounds(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::System::Int32 giBegin, ::System::Int32 giEnd, ::System::Single& left, ::System::Single& right, ::System::Single& bottom, ::System::Single& top, ::System::Int32& firstVisibleGi)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFOVISIBILITYUTILS_TRYGETCOMPLETEVISIBLETEXTGLYPHRANGEBOUNDS_OFFSET))(charInfos, giBegin, giEnd, left, right, bottom, top, firstVisibleGi);
		}
	};
}
