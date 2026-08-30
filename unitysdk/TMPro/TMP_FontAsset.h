#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/AtlasPopulationMode.h"
#include "unitysdk/TMPro/FontAssetCreationSettings.h"
#include "unitysdk/TMPro/TMP_Asset.h"
#include "unitysdk/TMPro/TMP_FontWeightPair.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPackingMode.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphRenderMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class FaceInfo_Legacy; }
namespace TMPro { class KerningTable; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontFeatureTable; }
namespace TMPro { class TMP_Glyph; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET UNITYSDK_OFFSET(0x18B33EB0)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET UNITYSDK_OFFSET(0x18B32A90)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x18B33B60)
#define TMPRO_TMP_FONTASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0x18B31F70)
#define TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x18B3AD00)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B3B110)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x18B3AAF0)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET UNITYSDK_OFFSET(0x18B3AB20)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET UNITYSDK_OFFSET(0x18B318D0)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x18B31870)
#define TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET UNITYSDK_OFFSET(0x18B368A0)
#define TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18B36790)
#define TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x18B36980)
#define TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B31710)
#define TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x18B31730)
#define TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x18B31160)
#define TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x18B31750)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x18B31650)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x18B31630)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B315E0)
#define TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x18B316F0)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x18B315B0)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x18B31590)
#define TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x18B31680)
#define TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18B317B0)
#define TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x18B31180)
#define TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x18B31790)
#define TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x18B31770)
#define TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET UNITYSDK_OFFSET(0x18B316E0)
#define TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x18B31850)
#define TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x18B316C0)
#define TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x18B31220)
#define TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x18B31200)
#define TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x18B31660)
#define TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x18B31120)
#define TMPRO_TMP_FONTASSET_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x18B31140)
#define TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x18B316A0)
#define TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18B31100)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x18B35C40)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x18B366E0)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18B35A40)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x18B34570)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18B357B0)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x18B34540)
#define TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x18B331B0)
#define TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0x18B32A60)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x18B32E30)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x18B334A0)
#define TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET UNITYSDK_OFFSET(0x18B31250)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET UNITYSDK_OFFSET(0x18B37150)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET UNITYSDK_OFFSET(0x18B36AA0)
#define TMPRO_TMP_FONTASSET_RENDERCHARACTERTOTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18B3D3C0)
#define TMPRO_TMP_FONTASSET_RENDERCHARACTERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B3B130)
#define TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B399E0)
#define TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B31720)
#define TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x18B31740)
#define TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x18B31170)
#define TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x18B31760)
#define TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x18B31640)
#define TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x18B31700)
#define TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x18B315A0)
#define TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x18B31690)
#define TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18B31800)
#define TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x18B311C0)
#define TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x18B317A0)
#define TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x18B31780)
#define TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x18B31860)
#define TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x18B316D0)
#define TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x18B31210)
#define TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x18B31670)
#define TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x18B31130)
#define TMPRO_TMP_FONTASSET_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x18B31150)
#define TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x18B316B0)
#define TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x18B31110)
#define TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET UNITYSDK_OFFSET(0x18B34500)
#define TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x18B33F90)
#define TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x18B34230)
#define TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x18B340E0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B34CE0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x18B37540)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x18B38A30)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET UNITYSDK_OFFSET(0x18B38A50)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18B37520)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x18B37510)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B384D0)
#define TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B39C60)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x18B372F0)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B3A480)
#define TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x18B3F820)
#define TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x18B36C40)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET UNITYSDK_OFFSET(0x18B3A7A0)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_2_OFFSET UNITYSDK_OFFSET(0x18B3AAD0)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_3_OFFSET UNITYSDK_OFFSET(0x18B3AAE0)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x18B36E10)
#define TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET UNITYSDK_OFFSET(0x18B31FA0)
#define TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x18B336F0)
#define TMPRO_TMP_FONTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B3FD80)
#define TMPRO_TMP_FONTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3F9B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset_TypeDefinitionIndex = 43376;

	class TMP_FontAsset : public ::TMPro::TMP_Asset
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_FontAssets_FontFeaturesUpdateQueueLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3270);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_k_GlyphIndexArray()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3278);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueueLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3280);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_SearchedFontAssetLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3288);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3290);
		}
		static ::System::String** StaticGet_s_DefaultMaterialSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x3298);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_FontFeaturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x32A0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_AddSynthesizedCharactersMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1160);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ClearFontAssetDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1168);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_TryAddCharactersMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1170);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_TryAddCharacterMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1178);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UpdateGlyphAdjustmentRecordsMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UpdateFontAssetDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1188);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ReadFontAssetDefinitionMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x1190);
		}
		::System::String* m_Version; // 0x30
		::System::String* m_SourceFontFileGUID; // 0x38
		::System::Int32 m_DicInitSizeOffset; // 0x40
		::UnityEngine::Font* m_SourceFontFile; // 0x48
		::UnityEngine::TextAsset* m_TextAsset; // 0x50
		::TMPro::AtlasPopulationMode m_AtlasPopulationMode; // 0x58
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary; // 0xC8
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharacterTable; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>* m_CharacterLookupDictionary; // 0xD8
		::UnityEngine::Texture2D* m_AtlasTexture; // 0xE0
		::Il2CppArray<::UnityEngine::Texture2D*>* m_AtlasTextures; // 0xE8
		::System::Int32 m_AtlasTextureIndex; // 0xF0
		::System::Boolean m_IsMultiAtlasTexturesEnabled; // 0xF4
		::System::Boolean m_ClearDynamicDataOnBuild; // 0xF5
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects; // 0x100
		::TMPro::FaceInfo_Legacy* m_fontInfo; // 0x108
		::UnityEngine::Texture2D* atlas; // 0x110
		::System::Int32 m_AtlasWidth; // 0x118
		::System::Int32 m_AtlasHeight; // 0x11C
		::System::Int32 m_AtlasPadding; // 0x120
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode; // 0x124
		::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* m_glyphInfoList; // 0x128
		::TMPro::KerningTable* m_KerningTable; // 0x130
		::TMPro::TMP_FontFeatureTable* m_FontFeatureTable; // 0x138
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fallbackFontAssets; // 0x140
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable; // 0x148
		::TMPro::FontAssetCreationSettings m_CreationSettings; // 0x150
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* m_FontWeightTable; // 0x1A8
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* fontWeights; // 0x1B0
		::System::Single normalStyle; // 0x1B8
		::System::Single normalSpacingOffset; // 0x1BC
		::System::Single boldStyle; // 0x1C0
		::System::Single boldSpacing; // 0x1C4
		::System::Byte italicStyle; // 0x1C8
		::System::Byte tabSize; // 0x1C9
		::System::Boolean IsFontAssetLookupTablesDirty; // 0x1CA
		::System::Collections::Generic::HashSet_1<::System::Int32>* FallbackSearchQueryLookup; // 0x1D0
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender; // 0x1D8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered; // 0x1E0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexList; // 0x1E8
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexListNewlyAdded; // 0x1F0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphsToAdd; // 0x1F8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_GlyphsToAddLookup; // 0x200
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharactersToAdd; // 0x208
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_CharactersToAddLookup; // 0x210
		::System::Collections::Generic::List_1<::System::UInt32>* s_MissingCharacterList; // 0x218
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_MissingUnicodesFromFontFile; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET__CCTOR_OFFSET))();
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET))(this, a1);
		}

		::UnityEngine::Font* get_sourceFontFile()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET))(this);
		}

		::System::Void set_sourceFontFile(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET))(this, a1);
		}

		::UnityEngine::TextAsset* get_textAsset()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_TEXTASSET_OFFSET))(this);
		}

		::System::Void set_textAsset(::UnityEngine::TextAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_TEXTASSET_OFFSET))(this, a1);
		}

		::TMPro::AtlasPopulationMode get_atlasPopulationMode()
		{
			return ((::TMPro::AtlasPopulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET))(this);
		}

		::System::Void set_atlasPopulationMode(::TMPro::AtlasPopulationMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::AtlasPopulationMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::TextCore::FaceInfo get_faceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET))(this);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET))(this);
		}

		::System::Void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* get_characterTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET))(this);
		}

		::System::Void set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>* get_characterLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_atlasTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Texture2D*>* get_atlasTextures()
		{
			return ((::Il2CppArray<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET))(this);
		}

		::System::Void set_atlasTextures(::Il2CppArray<::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET))(this, a1);
		}

		::System::Int32 get_atlasTextureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET))(this);
		}

		::System::Boolean get_isMultiAtlasTexturesEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this);
		}

		::System::Void set_isMultiAtlasTexturesEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(this);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET))(this);
		}

		::System::Void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET))(this);
		}

		::System::Void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET))(this, a1);
		}

		::TMPro::FaceInfo_Legacy* get_fontInfo()
		{
			return ((::TMPro::FaceInfo_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET))(this);
		}

		::System::Int32 get_atlasWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET))(this);
		}

		::System::Void set_atlasWidth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_atlasHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET))(this);
		}

		::System::Void set_atlasHeight(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_atlasPadding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET))(this);
		}

		::System::Void set_atlasPadding(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET))(this, a1);
		}

		::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET))(this);
		}

		::System::Void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET))(this, a1);
		}

		::TMPro::TMP_FontFeatureTable* get_fontFeatureTable()
		{
			return ((::TMPro::TMP_FontFeatureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET))(this);
		}

		::System::Void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontFeatureTable*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssetTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET))(this);
		}

		::System::Void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET))(this, a1);
		}

		::TMPro::FontAssetCreationSettings get_creationSettings()
		{
			return ((::TMPro::FontAssetCreationSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET))(this);
		}

		::System::Void set_creationSettings(::TMPro::FontAssetCreationSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::FontAssetCreationSettings))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET))(this, a1);
		}

		::Il2CppArray<::TMPro::TMP_FontWeightPair>* get_fontWeightTable()
		{
			return ((::Il2CppArray<::TMPro::TMP_FontWeightPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET))(this);
		}

		::System::Void set_fontWeightTable(::Il2CppArray<::TMPro::TMP_FontWeightPair>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_FontWeightPair>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET))(this, a1);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset(::UnityEngine::Font* a1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET))(a1);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset_1(::UnityEngine::Font* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a4, ::System::Int32 a5, ::System::Int32 a6, ::TMPro::AtlasPopulationMode a7, ::System::Boolean a8)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::TMPro::AtlasPopulationMode, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_AWAKE_OFFSET))(this);
		}

		::System::Void ReadFontAssetDefinition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET))(this);
		}

		::System::Void InitializeDictionaryLookupTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET))(this);
		}

		::System::Void InitializeGlyphLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET))(this);
		}

		::System::Void InitializeCharacterLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET))(this);
		}

		::System::Void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET))(this);
		}

		::System::Void AddSynthesizedCharactersAndFaceMetrics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET))(this);
		}

		::System::Void AddSynthesizedCharacter(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddCharacterToLookupCache(::System::UInt32 a1, ::TMPro::TMP_Character* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void SortCharacterTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET))(this);
		}

		::System::Void SortGlyphTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET))(this);
		}

		::System::Void SortFontFeatureTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET))(this);
		}

		::System::Void SortAllTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET))(this);
		}

		::System::Boolean HasCharacter(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET))(this, a1);
		}

		::System::Boolean HasCharacter_1(::System::Char a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasCharacter_Internal(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasCharacters(::System::String* a1, ::System::Collections::Generic::List_1<::System::Char>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Char>*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasCharacters_1(::System::String* a1, ::Il2CppArray<::System::UInt32>*& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasCharacters_2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET))(this, a1);
		}

		static ::System::String* GetCharacters(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::String*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* GetCharactersArray(::TMPro::TMP_FontAsset* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET))(a1);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET))(this, a1);
		}

		static ::System::Void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET))(a1);
		}

		static ::System::Void UpdateFontFeaturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET))();
		}

		static ::System::Void RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET))(a1);
		}

		static ::System::Void UpdateAtlasTexturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET))();
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCharacters_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryAddCharacters_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCharacters_3(::System::String* a1, ::System::String*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryAddCharacterInternal(::System::UInt32 a1, ::TMPro::TMP_Character*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetCharacter_and_QueueRenderToTexture(::System::UInt32 a1, ::TMPro::TMP_Character*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void TryAddGlyphsToAtlasTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET))(this);
		}

		::System::Boolean TryAddGlyphsToNewAtlasTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET))(this);
		}

		::System::Void SetupNewAtlasTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET))(this);
		}

		::System::Void UpdateAtlasTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET))(this);
		}

		::System::Void UpdateGlyphAdjustmentRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET))(this);
		}

		::System::Void UpdateGlyphAdjustmentRecords_1(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET))(this, a1);
		}

		::System::Void UpdateGlyphAdjustmentRecords_2(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_2_OFFSET))(this, a1);
		}

		::System::Void UpdateGlyphAdjustmentRecords_3(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_3_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFontAssetData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET))(this, a1);
		}

		::System::Void ClearFontAssetDataInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET))(this);
		}

		::System::Void RenderCharacterToTexture(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3, ::System::Collections::Generic::List_1<::System::UInt32>*& a4, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_RENDERCHARACTERTOTEXTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RenderCharacterToTexture_1(::UnityEngine::TextCore::LowLevel::GlyphRenderMode a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_RENDERCHARACTERTOTEXTURE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateFontAssetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET))(this);
		}

		::System::Void ClearFontAssetTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET))(this);
		}

		::System::Void ClearAtlasTextures(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET))(this, a1);
		}

		::System::Void UpgradeFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET))(this);
		}

		::System::Void UpgradeGlyphAdjustmentTableToFontFeatureTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET))(this);
		}
	};
}
