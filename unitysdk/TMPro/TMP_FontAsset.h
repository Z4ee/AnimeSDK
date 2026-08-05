#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/AtlasPopulationMode.h"
#include "unitysdk/TMPro/FontAssetCreationSettings.h"
#include "unitysdk/TMPro/TMP_Asset.h"
#include "unitysdk/TMPro/TMP_FontWeightPair.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
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
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET UNITYSDK_OFFSET(0x1D704C10)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTERSANDFACEMETRICS_OFFSET UNITYSDK_OFFSET(0x1D703850)
#define TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D704840)
#define TMPRO_TMP_FONTASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D702D70)
#define TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D70B420)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D70B9D0)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x1D70B250)
#define TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET UNITYSDK_OFFSET(0x1D70B280)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET UNITYSDK_OFFSET(0x1D702650)
#define TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1D7025C0)
#define TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET UNITYSDK_OFFSET(0x1D707730)
#define TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1D7075D0)
#define TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1D707840)
#define TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D702460)
#define TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1D702480)
#define TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1D701D60)
#define TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1D7024A0)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x1D7023A0)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D702380)
#define TMPRO_TMP_FONTASSET_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D702210)
#define TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x1D702440)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1D7021E0)
#define TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1D7021C0)
#define TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x1D7023D0)
#define TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D702500)
#define TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x1D701D80)
#define TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x1D7024E0)
#define TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x1D7024C0)
#define TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET UNITYSDK_OFFSET(0x1D702430)
#define TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x1D7025A0)
#define TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D702410)
#define TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1D701E20)
#define TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1D701E00)
#define TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x1D7023B0)
#define TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x1D701D40)
#define TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D7023F0)
#define TMPRO_TMP_FONTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D701D20)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x1D7068B0)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x1D707490)
#define TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1D7066A0)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x1D705030)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D706390)
#define TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D704FB0)
#define TMPRO_TMP_FONTASSET_INITIALIZECHARACTERLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D703F00)
#define TMPRO_TMP_FONTASSET_INITIALIZEDICTIONARYLOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0x1D703820)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D703BC0)
#define TMPRO_TMP_FONTASSET_INITIALIZEGLYPHPAIDADJUSTMENTRECORDSLOOKUPDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D7041D0)
#define TMPRO_TMP_FONTASSET_READFONTASSETDEFINITION_OFFSET UNITYSDK_OFFSET(0x1D701E50)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D707FB0)
#define TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7079D0)
#define TMPRO_TMP_FONTASSET_SETUPNEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D70A410)
#define TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D702470)
#define TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1D702490)
#define TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1D701D70)
#define TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1D7024B0)
#define TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D702390)
#define TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET UNITYSDK_OFFSET(0x1D702450)
#define TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1D7021D0)
#define TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x1D7023E0)
#define TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D702550)
#define TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x1D701DC0)
#define TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET UNITYSDK_OFFSET(0x1D7024F0)
#define TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x1D7024D0)
#define TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x1D7025B0)
#define TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D702420)
#define TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1D701E10)
#define TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET UNITYSDK_OFFSET(0x1D7023C0)
#define TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET UNITYSDK_OFFSET(0x1D701D50)
#define TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET UNITYSDK_OFFSET(0x1D702400)
#define TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D701D30)
#define TMPRO_TMP_FONTASSET_SORTALLTABLES_OFFSET UNITYSDK_OFFSET(0x1D704F70)
#define TMPRO_TMP_FONTASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1D704CF0)
#define TMPRO_TMP_FONTASSET_SORTFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x1D704F50)
#define TMPRO_TMP_FONTASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1D704E20)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D705850)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET UNITYSDK_OFFSET(0x1D708330)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET UNITYSDK_OFFSET(0x1D7095B0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET UNITYSDK_OFFSET(0x1D7095D0)
#define TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1D708310)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTOATLASTEXTURES_OFFSET UNITYSDK_OFFSET(0x1D708300)
#define TMPRO_TMP_FONTASSET_TRYADDGLYPHSTONEWATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D709120)
#define TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D70A650)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x1D7080E0)
#define TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D70ACB0)
#define TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET UNITYSDK_OFFSET(0x1D70B9F0)
#define TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET UNITYSDK_OFFSET(0x1D707B00)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET UNITYSDK_OFFSET(0x1D70AF90)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_2_OFFSET UNITYSDK_OFFSET(0x1D70B230)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_3_OFFSET UNITYSDK_OFFSET(0x1D70B240)
#define TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x1D707CE0)
#define TMPRO_TMP_FONTASSET_UPGRADEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1D702EC0)
#define TMPRO_TMP_FONTASSET_UPGRADEGLYPHADJUSTMENTTABLETOFONTFEATURETABLE_OFFSET UNITYSDK_OFFSET(0x1D704470)
#define TMPRO_TMP_FONTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D70BF80)
#define TMPRO_TMP_FONTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D70BB30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset_TypeDefinitionIndex = 39794;

	class TMP_FontAsset : public ::TMPro::TMP_Asset
	{
	public:
		static ::System::String** StaticGet_s_DefaultMaterialSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C5E0);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_FontFeaturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C5E8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_k_GlyphIndexArray()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C5F0);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueue()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C5F8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_SearchedFontAssetLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C600);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_FontAssets_FontFeaturesUpdateQueueLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C608);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_FontAssets_AtlasTexturesUpdateQueueLookup()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x2C610);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UpdateGlyphAdjustmentRecordsMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9720);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_AddSynthesizedCharactersMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9728);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_TryAddCharacterMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9730);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UpdateFontAssetDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9738);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ReadFontAssetDefinitionMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9740);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ClearFontAssetDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9748);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_TryAddCharactersMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset_TypeDefinitionIndex)->GetStaticField(0x9750);
		}
		::System::String* m_Version; // 0x30
		::System::String* m_SourceFontFileGUID; // 0x38
		::UnityEngine::Font* m_SourceFontFile; // 0x40
		::TMPro::AtlasPopulationMode m_AtlasPopulationMode; // 0x48
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary; // 0xB8
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharacterTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_Character*>* m_CharacterLookupDictionary; // 0xC8
		::UnityEngine::Texture2D* m_AtlasTexture; // 0xD0
		::Il2CppArray<::UnityEngine::Texture2D*>* m_AtlasTextures; // 0xD8
		::System::Int32 m_AtlasTextureIndex; // 0xE0
		::System::Boolean m_IsMultiAtlasTexturesEnabled; // 0xE4
		::System::Boolean m_ClearDynamicDataOnBuild; // 0xE5
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects; // 0xF0
		::TMPro::FaceInfo_Legacy* m_fontInfo; // 0xF8
		::UnityEngine::Texture2D* atlas; // 0x100
		::System::Int32 m_AtlasWidth; // 0x108
		::System::Int32 m_AtlasHeight; // 0x10C
		::System::Int32 m_AtlasPadding; // 0x110
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode; // 0x114
		::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* m_glyphInfoList; // 0x118
		::TMPro::KerningTable* m_KerningTable; // 0x120
		::TMPro::TMP_FontFeatureTable* m_FontFeatureTable; // 0x128
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fallbackFontAssets; // 0x130
		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable; // 0x138
		::TMPro::FontAssetCreationSettings m_CreationSettings; // 0x140
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* m_FontWeightTable; // 0x198
		::Il2CppArray<::TMPro::TMP_FontWeightPair>* fontWeights; // 0x1A0
		::System::Single normalStyle; // 0x1A8
		::System::Single normalSpacingOffset; // 0x1AC
		::System::Single boldStyle; // 0x1B0
		::System::Single boldSpacing; // 0x1B4
		::System::Byte italicStyle; // 0x1B8
		::System::Byte tabSize; // 0x1B9
		::System::Boolean IsFontAssetLookupTablesDirty; // 0x1BA
		::System::Collections::Generic::HashSet_1<::System::Int32>* FallbackSearchQueryLookup; // 0x1C0
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered; // 0x1D0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexList; // 0x1D8
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphIndexListNewlyAdded; // 0x1E0
		::System::Collections::Generic::List_1<::System::UInt32>* m_GlyphsToAdd; // 0x1E8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_GlyphsToAddLookup; // 0x1F0
		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* m_CharactersToAdd; // 0x1F8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_CharactersToAddLookup; // 0x200
		::System::Collections::Generic::List_1<::System::UInt32>* s_MissingCharacterList; // 0x208
		::System::Collections::Generic::HashSet_1<::System::UInt32>* m_MissingUnicodesFromFontFile; // 0x210

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

		::System::Void set_version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_VERSION_OFFSET))(this, value);
		}

		::UnityEngine::Font* get_sourceFontFile()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_SOURCEFONTFILE_OFFSET))(this);
		}

		::System::Void set_sourceFontFile(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_SOURCEFONTFILE_OFFSET))(this, value);
		}

		::TMPro::AtlasPopulationMode get_atlasPopulationMode()
		{
			return ((::TMPro::AtlasPopulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPOPULATIONMODE_OFFSET))(this);
		}

		::System::Void set_atlasPopulationMode(::TMPro::AtlasPopulationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::AtlasPopulationMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPOPULATIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::TextCore::FaceInfo get_faceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FACEINFO_OFFSET))(this);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FACEINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHTABLE_OFFSET))(this);
		}

		::System::Void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_GLYPHTABLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_GLYPHLOOKUPTABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* get_characterTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CHARACTERTABLE_OFFSET))(this);
		}

		::System::Void set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CHARACTERTABLE_OFFSET))(this, value);
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

		::System::Void set_atlasTextures(::Il2CppArray<::UnityEngine::Texture2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASTEXTURES_OFFSET))(this, value);
		}

		::System::Int32 get_atlasTextureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASTEXTURECOUNT_OFFSET))(this);
		}

		::System::Boolean get_isMultiAtlasTexturesEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this);
		}

		::System::Void set_isMultiAtlasTexturesEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ISMULTIATLASTEXTURESENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(this);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_USEDGLYPHRECTS_OFFSET))(this);
		}

		::System::Void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_USEDGLYPHRECTS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FREEGLYPHRECTS_OFFSET))(this);
		}

		::System::Void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FREEGLYPHRECTS_OFFSET))(this, value);
		}

		::TMPro::FaceInfo_Legacy* get_fontInfo()
		{
			return ((::TMPro::FaceInfo_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTINFO_OFFSET))(this);
		}

		::System::Int32 get_atlasWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASWIDTH_OFFSET))(this);
		}

		::System::Void set_atlasWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASWIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_atlasHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASHEIGHT_OFFSET))(this);
		}

		::System::Void set_atlasHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASHEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_atlasPadding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASPADDING_OFFSET))(this);
		}

		::System::Void set_atlasPadding(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASPADDING_OFFSET))(this, value);
		}

		::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_ATLASRENDERMODE_OFFSET))(this);
		}

		::System::Void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_ATLASRENDERMODE_OFFSET))(this, value);
		}

		::TMPro::TMP_FontFeatureTable* get_fontFeatureTable()
		{
			return ((::TMPro::TMP_FontFeatureTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTFEATURETABLE_OFFSET))(this);
		}

		::System::Void set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontFeatureTable*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTFEATURETABLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssetTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FALLBACKFONTASSETTABLE_OFFSET))(this);
		}

		::System::Void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FALLBACKFONTASSETTABLE_OFFSET))(this, value);
		}

		::TMPro::FontAssetCreationSettings get_creationSettings()
		{
			return ((::TMPro::FontAssetCreationSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_CREATIONSETTINGS_OFFSET))(this);
		}

		::System::Void set_creationSettings(::TMPro::FontAssetCreationSettings value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::FontAssetCreationSettings))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_CREATIONSETTINGS_OFFSET))(this, value);
		}

		::Il2CppArray<::TMPro::TMP_FontWeightPair>* get_fontWeightTable()
		{
			return ((::Il2CppArray<::TMPro::TMP_FontWeightPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GET_FONTWEIGHTTABLE_OFFSET))(this);
		}

		::System::Void set_fontWeightTable(::Il2CppArray<::TMPro::TMP_FontWeightPair>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_FontWeightPair>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_SET_FONTWEIGHTTABLE_OFFSET))(this, value);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset(::UnityEngine::Font* font)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_OFFSET))(font);
		}

		static ::TMPro::TMP_FontAsset* CreateFontAsset_1(::UnityEngine::Font* font, ::System::Int32 samplingPointSize, ::System::Int32 atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::System::Int32 atlasWidth, ::System::Int32 atlasHeight, ::TMPro::AtlasPopulationMode atlasPopulationMode, ::System::Boolean enableMultiAtlasSupport)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::TMPro::AtlasPopulationMode, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CREATEFONTASSET_1_OFFSET))(font, samplingPointSize, atlasPadding, renderMode, atlasWidth, atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
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

		::System::Void AddSynthesizedCharacter(::System::UInt32 unicode, ::System::Boolean isFontFaceLoaded, ::System::Boolean addImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDSYNTHESIZEDCHARACTER_OFFSET))(this, unicode, isFontFaceLoaded, addImmediately);
		}

		::System::Void AddCharacterToLookupCache(::System::UInt32 unicode, ::TMPro::TMP_Character* character)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_ADDCHARACTERTOLOOKUPCACHE_OFFSET))(this, unicode, character);
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

		::System::Boolean HasCharacter(::System::Int32 character)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_OFFSET))(this, character);
		}

		::System::Boolean HasCharacter_1(::System::Char character, ::System::Boolean searchFallbacks, ::System::Boolean tryAddCharacter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_1_OFFSET))(this, character, searchFallbacks, tryAddCharacter);
		}

		::System::Boolean HasCharacter_Internal(::System::UInt32 character, ::System::Boolean searchFallbacks, ::System::Boolean tryAddCharacter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTER_INTERNAL_OFFSET))(this, character, searchFallbacks, tryAddCharacter);
		}

		::System::Boolean HasCharacters(::System::String* text, ::System::Collections::Generic::List_1<::System::Char>*& missingCharacters)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Char>*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_OFFSET))(this, text, missingCharacters);
		}

		::System::Boolean HasCharacters_1(::System::String* text, ::Il2CppArray<::System::UInt32>*& missingCharacters, ::System::Boolean searchFallbacks, ::System::Boolean tryAddCharacter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_1_OFFSET))(this, text, missingCharacters, searchFallbacks, tryAddCharacter);
		}

		::System::Boolean HasCharacters_2(::System::String* text)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_HASCHARACTERS_2_OFFSET))(this, text);
		}

		static ::System::String* GetCharacters(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::String*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERS_OFFSET))(fontAsset);
		}

		static ::Il2CppArray<::System::Int32>* GetCharactersArray(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETCHARACTERSARRAY_OFFSET))(fontAsset);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 unicode)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_GETGLYPHINDEX_OFFSET))(this, unicode);
		}

		static ::System::Void RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORFONTFEATUREUPDATE_OFFSET))(fontAsset);
		}

		static ::System::Void UpdateFontFeaturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTFEATURESFORFONTASSETSINQUEUE_OFFSET))();
		}

		static ::System::Void RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_REGISTERFONTASSETFORATLASTEXTUREUPDATE_OFFSET))(fontAsset);
		}

		static ::System::Void UpdateAtlasTexturesForFontAssetsInQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEATLASTEXTURESFORFONTASSETSINQUEUE_OFFSET))();
		}

		::System::Boolean TryAddCharacters(::Il2CppArray<::System::UInt32>* unicodes, ::System::Boolean includeFontFeatures)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_OFFSET))(this, unicodes, includeFontFeatures);
		}

		::System::Boolean TryAddCharacters_1(::Il2CppArray<::System::UInt32>* unicodes, ::Il2CppArray<::System::UInt32>*& missingUnicodes, ::System::Boolean includeFontFeatures)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_1_OFFSET))(this, unicodes, missingUnicodes, includeFontFeatures);
		}

		::System::Boolean TryAddCharacters_2(::System::String* characters, ::System::Boolean includeFontFeatures)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_2_OFFSET))(this, characters, includeFontFeatures);
		}

		::System::Boolean TryAddCharacters_3(::System::String* characters, ::System::String*& missingCharacters, ::System::Boolean includeFontFeatures)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERS_3_OFFSET))(this, characters, missingCharacters, includeFontFeatures);
		}

		::System::Boolean TryAddCharacterInternal(::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYADDCHARACTERINTERNAL_OFFSET))(this, unicode, character);
		}

		::System::Boolean TryGetCharacter_and_QueueRenderToTexture(::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_TRYGETCHARACTER_AND_QUEUERENDERTOTEXTURE_OFFSET))(this, unicode, character);
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

		::System::Void UpdateGlyphAdjustmentRecords_1(::Il2CppArray<::System::UInt32>* glyphIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_1_OFFSET))(this, glyphIndexes);
		}

		::System::Void UpdateGlyphAdjustmentRecords_2(::System::Collections::Generic::List_1<::System::UInt32>* glyphIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_2_OFFSET))(this, glyphIndexes);
		}

		::System::Void UpdateGlyphAdjustmentRecords_3(::System::Collections::Generic::List_1<::System::UInt32>* newGlyphIndexes, ::System::Collections::Generic::List_1<::System::UInt32>* allGlyphIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEGLYPHADJUSTMENTRECORDS_3_OFFSET))(this, newGlyphIndexes, allGlyphIndexes);
		}

		::System::Void ClearFontAssetData(::System::Boolean setAtlasSizeToZero)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATA_OFFSET))(this, setAtlasSizeToZero);
		}

		::System::Void ClearFontAssetDataInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETDATAINTERNAL_OFFSET))(this);
		}

		::System::Void UpdateFontAssetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_UPDATEFONTASSETDATA_OFFSET))(this);
		}

		::System::Void ClearFontAssetTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARFONTASSETTABLES_OFFSET))(this);
		}

		::System::Void ClearAtlasTextures(::System::Boolean setAtlasSizeToZero)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET_CLEARATLASTEXTURES_OFFSET))(this, setAtlasSizeToZero);
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
