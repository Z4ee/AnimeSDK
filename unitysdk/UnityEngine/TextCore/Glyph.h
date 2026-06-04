#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.h"

#define UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x1B346200)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x1B3461C0)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B346170)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x1B346190)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1B3461E0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x1B346210)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x1B3461D0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B346180)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET UNITYSDK_OFFSET(0x1B3461B0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1B3461F0)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B346240)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B3462B0)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B346220)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int Glyph_TypeDefinitionIndex = 5818;

	class Glyph : public ::System::Object
	{
	public:
		::System::UInt32 m_Index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics m_Metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect m_GlyphRect; // 0x28
		::System::Single m_Scale; // 0x38
		::System::Int32 m_AtlasIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::UnityEngine::TextCore::GlyphMetrics a2, ::UnityEngine::TextCore::GlyphRect a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::TextCore::GlyphMetrics get_metrics()
		{
			return ((::UnityEngine::TextCore::GlyphMetrics(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET))(this);
		}

		::System::Void set_metrics(::UnityEngine::TextCore::GlyphMetrics a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET))(this, a1);
		}

		::UnityEngine::TextCore::GlyphRect get_glyphRect()
		{
			return ((::UnityEngine::TextCore::GlyphRect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET))(this);
		}

		::System::Void set_glyphRect(::UnityEngine::TextCore::GlyphRect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphRect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET))(this, a1);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET))(this, a1);
		}

		::System::Int32 get_atlasIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET))(this);
		}

		::System::Void set_atlasIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET))(this, a1);
		}
	};
}
