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

#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDA0E0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET UNITYSDK_OFFSET(0x1EDDA050)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1EDDA0F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET UNITYSDK_OFFSET(0x1EDDCAB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x1EDDCAC0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET UNITYSDK_OFFSET(0x1EDDC940)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDD9FB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_OFFSET UNITYSDK_OFFSET(0x1EDD9F80)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0x1EDD9FC0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDA000)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_GLYPHINDEXES_OFFSET UNITYSDK_OFFSET(0x1EDDCAA0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RENDERGLYPHSTOTEXTUREBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDB740)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RENDERGLYPHSTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EDDB4C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EDDCC40)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETFACESIZE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDA040)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETFACESIZE_OFFSET UNITYSDK_OFFSET(0x1EDDA010)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDC930)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EDDBE10)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDBE00)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EDDB750)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1EDDA100)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDA360)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET UNITYSDK_OFFSET(0x1EDDA240)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDA230)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET UNITYSDK_OFFSET(0x1EDDA110)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYPACKGLYPHSINATLAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDDB4B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYPACKGLYPHSINATLAS_OFFSET UNITYSDK_OFFSET(0x1EDDA370)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDDCC50)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngine_TypeDefinitionIndex = 5842;

	class FontEngine : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>** StaticGet_s_GlyphMarshallingStruct_OUT()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x3E0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_GlyphIndexes_MarshallingArray_A()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x3E8);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>** StaticGet_s_PairAdjustmentRecords_MarshallingArray()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>** StaticGet_s_FreeGlyphRects()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::GlyphRect>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x3F8);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>** StaticGet_s_UsedGlyphRects()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::GlyphRect>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x400);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::Glyph*>** StaticGet_s_Glyphs()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::Glyph*>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x408);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>** StaticGet_s_GlyphLookupDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::Glyph*>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>** StaticGet_s_GlyphMarshallingStruct_IN()
		{
			return (::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>**)Il2CppClass::FromTypeDefinitionIndex(FontEngine_TypeDefinitionIndex)->GetStaticField(0x418);
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

		static ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::UnityEngine::Font* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::TextCore::LowLevel::FontEngineError(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LoadFontFace_With_Size_FromFont_Internal(::UnityEngine::Font* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::TextCore::LowLevel::FontEngineError SetFaceSize(::System::Int32 a1)
		{
			return ((::UnityEngine::TextCore::LowLevel::FontEngineError(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETFACESIZE_OFFSET))(a1);
		}

		static ::System::Int32 SetFaceSize_Internal(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETFACESIZE_INTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::TextCore::FaceInfo GetFaceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET))();
		}

		static ::System::Int32 GetFaceInfo_Internal(::UnityEngine::TextCore::FaceInfo& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::TextCore::FaceInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET))(a1);
		}

		static ::System::UInt32 GetGlyphIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET))(a1);
		}

		static ::System::Boolean TryGetGlyphIndex(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetGlyphWithUnicodeValue(::System::UInt32 a1, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags a2, ::UnityEngine::TextCore::Glyph*& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetGlyphWithUnicodeValue_Internal(::System::UInt32 a1, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags a2, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetGlyphWithIndexValue(::System::UInt32 a1, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags a2, ::UnityEngine::TextCore::Glyph*& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetGlyphWithIndexValue_Internal(::System::UInt32 a1, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags a2, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryPackGlyphsInAtlas(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* a2, ::System::Int32 a3, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a4, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a8, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a9)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYPACKGLYPHSINATLAS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean TryPackGlyphsInAtlas_Internal(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* a1, ::System::Int32& a2, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* a3, ::System::Int32& a4, ::System::Int32 a5, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a6, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a7, ::System::Int32 a8, ::System::Int32 a9, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a10, ::System::Int32& a11, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a12, ::System::Int32& a13)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*, ::System::Int32&, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYPACKGLYPHSINATLAS_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::UnityEngine::TextCore::LowLevel::FontEngineError RenderGlyphsToTexture(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* a1, ::System::Int32 a2, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::TextCore::LowLevel::FontEngineError(*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RENDERGLYPHSTOTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RenderGlyphsToTextureBuffer_Internal(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RENDERGLYPHSTOTEXTUREBUFFER_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean TryAddGlyphToTexture(::System::UInt32 a1, ::System::Int32 a2, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a3, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a4, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a5, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a6, ::UnityEngine::Texture2D* a7, ::UnityEngine::TextCore::Glyph*& a8)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::Glyph*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean TryAddGlyphToTexture_Internal(::System::UInt32 a1, ::System::Int32 a2, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a3, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a4, ::System::Int32& a5, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a6, ::System::Int32& a7, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a8, ::UnityEngine::Texture2D* a9, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& a10)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Boolean TryAddGlyphsToTexture(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a3, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a4, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* a5, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a6, ::UnityEngine::Texture2D* a7, ::Il2CppArray<::UnityEngine::TextCore::Glyph*>*& a8)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::Il2CppArray<::UnityEngine::TextCore::Glyph*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean TryAddGlyphsToTexture_Internal(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode a3, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a4, ::System::Int32& a5, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>* a6, ::System::Int32& a7, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode a8, ::UnityEngine::Texture2D* a9, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* a10, ::System::Int32& a11)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::Il2CppArray<::UnityEngine::TextCore::GlyphRect>*, ::System::Int32&, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*, ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentTable(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32& a2)
		{
			return ((::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(a1, a2);
		}

		static ::System::Int32 PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(::Il2CppArray<::System::UInt32>* a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_GLYPHINDEXES_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetGlyphPairAdjustmentRecordsFromMarshallingArray(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET))(a1);
		}

		static ::System::Void ResetAtlasTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET))(a1);
		}
	};
}
