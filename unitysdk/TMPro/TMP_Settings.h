#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Settings_LineBreakingTable; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_StyleSheet; }
namespace UnityEngine { class TextAsset; }

#define TMPRO_TMP_SETTINGS_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C084EC0)
#define TMPRO_TMP_SETTINGS_GETFONTASSET_OFFSET UNITYSDK_OFFSET(0x1C084380)
#define TMPRO_TMP_SETTINGS_GETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C083FD0)
#define TMPRO_TMP_SETTINGS_GETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1C084740)
#define TMPRO_TMP_SETTINGS_GETSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x1C084B00)
#define TMPRO_TMP_SETTINGS_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1C081EF0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0x1C082E10)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0x1C0816B0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0x1C081550)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1C081810)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0x1C082730)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1C0825D0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x1C082F70)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMAXRATIO_OFFSET UNITYSDK_OFFSET(0x1C081AD0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMINRATIO_OFFSET UNITYSDK_OFFSET(0x1C081970)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROTEXTCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0x1C081C30)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROUITEXTCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0x1C081D90)
#define TMPRO_TMP_SETTINGS_GET_ENABLEEMOJISUPPORT_OFFSET UNITYSDK_OFFSET(0x1C082890)
#define TMPRO_TMP_SETTINGS_GET_ENABLEEXTRAPADDING_OFFSET UNITYSDK_OFFSET(0x1C080A50)
#define TMPRO_TMP_SETTINGS_GET_ENABLEKERNING_OFFSET UNITYSDK_OFFSET(0x1C0808F0)
#define TMPRO_TMP_SETTINGS_GET_ENABLEPARSEESCAPECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C080D10)
#define TMPRO_TMP_SETTINGS_GET_ENABLERAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1C080E70)
#define TMPRO_TMP_SETTINGS_GET_ENABLETINTALLSPRITES_OFFSET UNITYSDK_OFFSET(0x1C080BB0)
#define TMPRO_TMP_SETTINGS_GET_ENABLEWORDWRAPPING_OFFSET UNITYSDK_OFFSET(0x1C080640)
#define TMPRO_TMP_SETTINGS_GET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0x1C082310)
#define TMPRO_TMP_SETTINGS_GET_FOLLOWINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C083390)
#define TMPRO_TMP_SETTINGS_GET_GETFONTFEATURESATRUNTIME_OFFSET UNITYSDK_OFFSET(0x1C080FD0)
#define TMPRO_TMP_SETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C0807A0)
#define TMPRO_TMP_SETTINGS_GET_ISTEXTOBJECTSCALESTATIC_OFFSET UNITYSDK_OFFSET(0x1C082050)
#define TMPRO_TMP_SETTINGS_GET_LEADINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1C083230)
#define TMPRO_TMP_SETTINGS_GET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1C0834F0)
#define TMPRO_TMP_SETTINGS_GET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0x1C082470)
#define TMPRO_TMP_SETTINGS_GET_MISSINGCHARACTERSPRITEUNICODE_OFFSET UNITYSDK_OFFSET(0x1C082B50)
#define TMPRO_TMP_SETTINGS_GET_MISSINGGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0x1C081130)
#define TMPRO_TMP_SETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1C0830D0)
#define TMPRO_TMP_SETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1C083AE0)
#define TMPRO_TMP_SETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C080600)
#define TMPRO_TMP_SETTINGS_GET_WARNINGSDISABLED_OFFSET UNITYSDK_OFFSET(0x1C0813F0)
#define TMPRO_TMP_SETTINGS_LOADDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C083DA0)
#define TMPRO_TMP_SETTINGS_LOADLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1C0837B0)
#define TMPRO_TMP_SETTINGS_SET_ENABLEEMOJISUPPORT_OFFSET UNITYSDK_OFFSET(0x1C0829F0)
#define TMPRO_TMP_SETTINGS_SET_ISTEXTOBJECTSCALESTATIC_OFFSET UNITYSDK_OFFSET(0x1C0821B0)
#define TMPRO_TMP_SETTINGS_SET_MISSINGCHARACTERSPRITEUNICODE_OFFSET UNITYSDK_OFFSET(0x1C082CB0)
#define TMPRO_TMP_SETTINGS_SET_MISSINGGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0x1C081290)
#define TMPRO_TMP_SETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1C083C40)
#define TMPRO_TMP_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C085070)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Settings_TypeDefinitionIndex = 37561;

	class TMP_Settings : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::TMPro::TMP_Settings** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_Settings**)Il2CppClass::FromTypeDefinitionIndex(TMP_Settings_TypeDefinitionIndex)->GetStaticField(0x29180);
		}
		::System::Boolean m_enableWordWrapping; // 0x18
		::System::Boolean m_enableKerning; // 0x19
		::System::Boolean m_enableExtraPadding; // 0x1A
		::System::Boolean m_enableTintAllSprites; // 0x1B
		::System::Boolean m_enableParseEscapeCharacters; // 0x1C
		::System::Boolean m_EnableRaycastTarget; // 0x1D
		::System::Boolean m_GetFontFeaturesAtRuntime; // 0x1E
		::System::Int32 m_missingGlyphCharacter; // 0x20
		::System::Boolean m_warningsDisabled; // 0x24
		::TMPro::TMP_FontAsset* m_defaultFontAsset; // 0x28
		::System::String* m_defaultFontAssetPath; // 0x30
		::System::Single m_defaultFontSize; // 0x38
		::System::Single m_defaultAutoSizeMinRatio; // 0x3C
		::System::Single m_defaultAutoSizeMaxRatio; // 0x40
		::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize; // 0x44
		::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize; // 0x4C
		::System::Boolean m_autoSizeTextContainer; // 0x54
		::System::Boolean m_IsTextObjectScaleStatic; // 0x55
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_fallbackFontAssets; // 0x58
		::System::Boolean m_matchMaterialPreset; // 0x60
		::TMPro::TMP_SpriteAsset* m_defaultSpriteAsset; // 0x68
		::System::String* m_defaultSpriteAssetPath; // 0x70
		::System::Boolean m_enableEmojiSupport; // 0x78
		::System::UInt32 m_MissingCharacterSpriteUnicode; // 0x7C
		::System::String* m_defaultColorGradientPresetsPath; // 0x80
		::TMPro::TMP_StyleSheet* m_defaultStyleSheet; // 0x88
		::System::String* m_StyleSheetsResourcePath; // 0x90
		::UnityEngine::TextAsset* m_leadingCharacters; // 0x98
		::UnityEngine::TextAsset* m_followingCharacters; // 0xA0
		::TMPro::TMP_Settings_LineBreakingTable* m_linebreakingRules; // 0xA8
		::System::Boolean m_UseModernHangulLineBreakingRules; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_VERSION_OFFSET))();
		}

		static ::System::Boolean get_enableWordWrapping()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEWORDWRAPPING_OFFSET))();
		}

		static ::System::Boolean get_enableKerning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEKERNING_OFFSET))();
		}

		static ::System::Boolean get_enableExtraPadding()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEEXTRAPADDING_OFFSET))();
		}

		static ::System::Boolean get_enableTintAllSprites()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLETINTALLSPRITES_OFFSET))();
		}

		static ::System::Boolean get_enableParseEscapeCharacters()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEPARSEESCAPECHARACTERS_OFFSET))();
		}

		static ::System::Boolean get_enableRaycastTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLERAYCASTTARGET_OFFSET))();
		}

		static ::System::Boolean get_getFontFeaturesAtRuntime()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_GETFONTFEATURESATRUNTIME_OFFSET))();
		}

		static ::System::Int32 get_missingGlyphCharacter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MISSINGGLYPHCHARACTER_OFFSET))();
		}

		static ::System::Void set_missingGlyphCharacter(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_MISSINGGLYPHCHARACTER_OFFSET))(value);
		}

		static ::System::Boolean get_warningsDisabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_WARNINGSDISABLED_OFFSET))();
		}

		static ::TMPro::TMP_FontAsset* get_defaultFontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSET_OFFSET))();
		}

		static ::System::String* get_defaultFontAssetPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET))();
		}

		static ::System::Single get_defaultFontSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTSIZE_OFFSET))();
		}

		static ::System::Single get_defaultTextAutoSizingMinRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMINRATIO_OFFSET))();
		}

		static ::System::Single get_defaultTextAutoSizingMaxRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMAXRATIO_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROTEXTCONTAINERSIZE_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROUITEXTCONTAINERSIZE_OFFSET))();
		}

		static ::System::Boolean get_autoSizeTextContainer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_AUTOSIZETEXTCONTAINER_OFFSET))();
		}

		static ::System::Boolean get_isTextObjectScaleStatic()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ISTEXTOBJECTSCALESTATIC_OFFSET))();
		}

		static ::System::Void set_isTextObjectScaleStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_ISTEXTOBJECTSCALESTATIC_OFFSET))(value);
		}

		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssets()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_FALLBACKFONTASSETS_OFFSET))();
		}

		static ::System::Boolean get_matchMaterialPreset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MATCHMATERIALPRESET_OFFSET))();
		}

		static ::TMPro::TMP_SpriteAsset* get_defaultSpriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSET_OFFSET))();
		}

		static ::System::String* get_defaultSpriteAssetPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET))();
		}

		static ::System::Boolean get_enableEmojiSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEEMOJISUPPORT_OFFSET))();
		}

		static ::System::Void set_enableEmojiSupport(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_ENABLEEMOJISUPPORT_OFFSET))(value);
		}

		static ::System::UInt32 get_missingCharacterSpriteUnicode()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MISSINGCHARACTERSPRITEUNICODE_OFFSET))();
		}

		static ::System::Void set_missingCharacterSpriteUnicode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_MISSINGCHARACTERSPRITEUNICODE_OFFSET))(value);
		}

		static ::System::String* get_defaultColorGradientPresetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))();
		}

		static ::TMPro::TMP_StyleSheet* get_defaultStyleSheet()
		{
			return ((::TMPro::TMP_StyleSheet*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSTYLESHEET_OFFSET))();
		}

		static ::System::String* get_styleSheetsResourcePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET))();
		}

		static ::UnityEngine::TextAsset* get_leadingCharacters()
		{
			return ((::UnityEngine::TextAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_LEADINGCHARACTERS_OFFSET))();
		}

		static ::UnityEngine::TextAsset* get_followingCharacters()
		{
			return ((::UnityEngine::TextAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_FOLLOWINGCHARACTERS_OFFSET))();
		}

		static ::TMPro::TMP_Settings_LineBreakingTable* get_linebreakingRules()
		{
			return ((::TMPro::TMP_Settings_LineBreakingTable*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_LINEBREAKINGRULES_OFFSET))();
		}

		static ::System::Boolean get_useModernHangulLineBreakingRules()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))();
		}

		static ::System::Void set_useModernHangulLineBreakingRules(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(value);
		}

		static ::TMPro::TMP_Settings* get_instance()
		{
			return ((::TMPro::TMP_Settings*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_INSTANCE_OFFSET))();
		}

		static ::TMPro::TMP_Settings* LoadDefaultSettings()
		{
			return ((::TMPro::TMP_Settings*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_LOADDEFAULTSETTINGS_OFFSET))();
		}

		static ::TMPro::TMP_Settings* GetSettings()
		{
			return ((::TMPro::TMP_Settings*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSETTINGS_OFFSET))();
		}

		static ::TMPro::TMP_FontAsset* GetFontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETFONTASSET_OFFSET))();
		}

		static ::TMPro::TMP_SpriteAsset* GetSpriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSPRITEASSET_OFFSET))();
		}

		static ::TMPro::TMP_StyleSheet* GetStyleSheet()
		{
			return ((::TMPro::TMP_StyleSheet*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSTYLESHEET_OFFSET))();
		}

		static ::System::Void LoadLinebreakingRules()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_LOADLINEBREAKINGRULES_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>* GetCharacters(::UnityEngine::TextAsset* file)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>*(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETCHARACTERS_OFFSET))(file);
		}
	};
}
