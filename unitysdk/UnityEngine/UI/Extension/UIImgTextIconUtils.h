#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

class Class_1_95E491FD617A3F68;
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI::Extension { class IImgIconLoader; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET UNITYSDK_OFFSET(0x1A1607B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET UNITYSDK_OFFSET(0x1A160940)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETACTIONICONQUAD_OFFSET UNITYSDK_OFFSET(0x1A1610B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETICONMAPQUAD_OFFSET UNITYSDK_OFFSET(0x1A160F50)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETQUAD_OFFSET UNITYSDK_OFFSET(0x1A160E10)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READFLOAT_OFFSET UNITYSDK_OFFSET(0x1A1617D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_READNAME_OFFSET UNITYSDK_OFFSET(0x1A161690)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_REPLACEICONTAG_OFFSET UNITYSDK_OFFSET(0x1A160A00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A161890)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_TypeDefinitionIndex = 44981;

	class UIImgTextIconUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::Extension::IImgIconLoader** StaticGet__curLoader()
		{
			return (::UnityEngine::UI::Extension::IImgIconLoader**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3D630);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__Prefix()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3D638);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__Word()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3D640);
		}
		static ::Class_1_95E491FD617A3F68** StaticGet__quadMatchers()
		{
			return (::Class_1_95E491FD617A3F68**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x3D648);
		}
		static ::System::Boolean* StaticGet__curImgBestFit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0xEFB0);
		}
		static ::System::Int32* StaticGet__curStandFontSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0xEFB4);
		}
		// static const ::System::String* OVERRIDE_HEIGHT_KEY; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* BuildIconQuad(::System::String* inStr, ::UnityEngine::UI::Extension::IImgIconLoader* iconLoader, ::System::Boolean imgBestFit, ::System::Int32 standFontSize)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Extension::IImgIconLoader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET))(inStr, iconLoader, imgBestFit, standFontSize);
		}

		static ::Class_1_95E491FD617A3F68* GenTokenMatcher()
		{
			return ((::Class_1_95E491FD617A3F68*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET))();
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
