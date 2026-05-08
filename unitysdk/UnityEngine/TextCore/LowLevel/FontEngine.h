#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/FontEngineError.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphLoadFlags.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPackingMode.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphRenderMode.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::TextCore { class Glyph; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C383B10)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET UNITYSDK_OFFSET(0x1C383A60)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1C383B20)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET UNITYSDK_OFFSET(0x1C3850E0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x1C3850F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET UNITYSDK_OFFSET(0x1C384F20)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C3839D0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_OFFSET UNITYSDK_OFFSET(0x1C383970)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0x1C3839E0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C383A50)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_GLYPHINDEXES_OFFSET UNITYSDK_OFFSET(0x1C3850D0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C3852B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C384F10)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C384440)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C384430)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C383DD0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C383DC0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET UNITYSDK_OFFSET(0x1C383C80)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C383C70)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET UNITYSDK_OFFSET(0x1C383B30)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3852C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C383960)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngine_TypeDefinitionIndex = 30953;

	class FontEngine : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>** StaticGet_s_GlyphMarshallingStruct_OUT()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25230);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>** StaticGet_s_FreeGlyphRects()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::GlyphRect>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25238);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>** StaticGet_s_PairAdjustmentRecords_MarshallingArray()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25240);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::Glyph*>** StaticGet_s_Glyphs()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::Glyph*>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25248);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>** StaticGet_s_UsedGlyphRects()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::GlyphRect>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25250);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>** StaticGet_s_GlyphLookupDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25258);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_GlyphIndexes_MarshallingArray_A()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25260);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>** StaticGet_s_GlyphMarshallingStruct_IN()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x25268);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::TextCore::LowLevel::FontEngineError InitializeFontEngine()
		{
			return ((::UnityEngine::TextCore::LowLevel::FontEngineError(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_OFFSET))();
		}

		static ::System::Int32 InitializeFontEngine_Internal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_INTERNAL_OFFSET))();
		}

		static ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::UnityEngine::Font* font, ::System::Int32 pointSize)
		{
			return ((::UnityEngine::TextCore::LowLevel::FontEngineError(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(font, pointSize);
		}

		static ::System::Int32 LoadFontFace_With_Size_FromFont_Internal(::UnityEngine::Font* font, ::System::Int32 pointSize)
		{
			return ((::System::Int32(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET))(font, pointSize);
		}

		static ::UnityEngine::TextCore::FaceInfo GetFaceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET))();
		}

		static ::System::Int32 GetFaceInfo_Internal(::UnityEngine::TextCore::FaceInfo& faceInfo)
		{
			return ((::System::Int32(*)(::UnityEngine::TextCore::FaceInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET))(faceInfo);
		}

		static ::System::UInt32 GetGlyphIndex(::System::UInt32 unicode)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET))(unicode);
		}

		static ::System::Boolean TryGetGlyphWithUnicodeValue(::System::UInt32 unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ::UnityEngine::TextCore::Glyph*& glyph)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET))(unicode, flags, glyph);
		}

		static ::System::Boolean TryGetGlyphWithUnicodeValue_Internal(::System::UInt32 unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET))(unicode, loadFlags, glyphStruct);
		}

		static ::System::Boolean TryGetGlyphWithIndexValue(::System::UInt32 glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ::UnityEngine::TextCore::Glyph*& glyph)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET))(glyphIndex, flags, glyph);
		}

		static ::System::Boolean TryGetGlyphWithIndexValue_Internal(::System::UInt32 glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET))(glyphIndex, loadFlags, glyphStruct);
		}

		static ::System::Boolean TryAddGlyphToTexture(::System::UInt32 glyphIndex, ::System::Int32 padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture, ::UnityEngine::TextCore::Glyph*& glyph)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET))(glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
		}

		static ::System::Boolean TryAddGlyphToTexture_Internal(::System::UInt32 glyphIndex, ::System::Int32 padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, ::System::Int32& freeGlyphRectCount, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::System::Int32& usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyph)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET))(glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyph);
		}

		static ::System::Boolean TryAddGlyphsToTexture(::System::Collections::Generic::List_1<::System::UInt32>* glyphIndexes, ::System::Int32 padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture, ::Il2CppArray<::UnityEngine::TextCore::Glyph*>*& glyphs)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::Il2CppArray<::UnityEngine::TextCore::Glyph*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET))(glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
		}

		static ::System::Boolean TryAddGlyphsToTexture_Internal(::Il2CppArray<::System::UInt32>* glyphIndex, ::System::Int32 padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, ::System::Int32& freeGlyphRectCount, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::System::Int32& usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* glyphs, ::System::Int32& glyphCount)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET))(glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyphs, glyphCount);
		}

		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentTable(::Il2CppArray<::System::UInt32>* glyphIndexes)
		{
			return ((::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET))(glyphIndexes);
		}

		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::System::UInt32>* glyphIndexes, ::System::Int32& recordCount)
		{
			return ((::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(glyphIndexes, recordCount);
		}

		static ::System::Int32 PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(::Il2CppArray<::System::UInt32>* glyphIndexes, ::System::Int32& recordCount)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_GLYPHINDEXES_OFFSET))(glyphIndexes, recordCount);
		}

		static ::System::Int32 GetGlyphPairAdjustmentRecordsFromMarshallingArray(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* glyphPairAdjustmentRecords)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET))(glyphPairAdjustmentRecords);
		}

		static ::System::Void ResetAtlasTexture(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET))(texture);
		}
	};
}
