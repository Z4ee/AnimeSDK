#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgTextIconUtils_EIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

class Class_1_D79D852F682C7303;
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI::Extension { class IImgIconLoader; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET UNITYSDK_OFFSET(0x1A0F0DD0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET UNITYSDK_OFFSET(0x1A0F0F70)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETACTIONICONQUAD_OFFSET UNITYSDK_OFFSET(0x1A0F16E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETICONMAPQUAD_OFFSET UNITYSDK_OFFSET(0x1A0F1580)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x1A0F0CC0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETQUAD_OFFSET UNITYSDK_OFFSET(0x1A0F1440)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READFLOAT_OFFSET UNITYSDK_OFFSET(0x1A0F1E00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READNAME_OFFSET UNITYSDK_OFFSET(0x1A0F1CC0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_REPLACEICONTAG_OFFSET UNITYSDK_OFFSET(0x1A0F1030)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F1EC0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_TypeDefinitionIndex = 52332;

	class UIImgTextIconUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__Prefix()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3FB80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__Word()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3FB88);
		}
		static ::Class_1_D79D852F682C7303** StaticGet__quadMatchers()
		{
			return (::Class_1_D79D852F682C7303**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3FB90);
		}
		static ::UnityEngine::UI::Extension::IImgIconLoader** StaticGet__curLoader()
		{
			return (::UnityEngine::UI::Extension::IImgIconLoader**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3FB98);
		}
		static ::System::Int32* StaticGet__curStandFontSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0xF5D0);
		}
		static ::System::Boolean* StaticGet__curImgBestFit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0xF5D4);
		}
		// static const ::System::String* OVERRIDE_HEIGHT_KEY; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* GetPrefix(::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType type)
		{
			return ((::System::String*(*)(::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETPREFIX_OFFSET))(type);
		}

		static ::System::String* BuildIconQuad(::System::String* inStr, ::UnityEngine::UI::Extension::IImgIconLoader* iconLoader, ::System::Boolean imgBestFit, ::System::Int32 standFontSize)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Extension::IImgIconLoader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET))(inStr, iconLoader, imgBestFit, standFontSize);
		}

		static ::Class_1_D79D852F682C7303* GenTokenMatcher()
		{
			return ((::Class_1_D79D852F682C7303*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET))();
		}

		static ::System::Void ReplaceIconTag(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_REPLACEICONTAG_OFFSET))(rawStr, matched, sb);
		}

		static ::System::String* ReadName(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::Il2CppArray<::System::String*>* word)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READNAME_OFFSET))(rawStr, matched, word);
		}

		static ::System::Single ReadFloat(::System::String* rawStr, ::System::String* key, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READFLOAT_OFFSET))(rawStr, key, matched);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETQUAD_OFFSET))(rawStr, matched);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetIconMapQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETICONMAPQUAD_OFFSET))(rawStr, matched);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetActionIconQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETACTIONICONQUAD_OFFSET))(rawStr, matched);
		}
	};
}
