#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.h"

#define UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x1C383490)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x1C383450)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C383400)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x1C383420)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1C383470)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x1C3834A0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x1C383460)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C383410)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET UNITYSDK_OFFSET(0x1C383440)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1C383480)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3834D0)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C383540)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3834B0)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int Glyph_TypeDefinitionIndex = 30944;

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

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET))(this, glyphStruct);
		}

		::System::Void _ctor_2(::System::UInt32 index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, ::System::Single scale, ::System::Int32 atlasIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET))(this, index, metrics, glyphRect, scale, atlasIndex);
		}

		::System::UInt32 get_index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET))(this, value);
		}

		::UnityEngine::TextCore::GlyphMetrics get_metrics()
		{
			return ((::UnityEngine::TextCore::GlyphMetrics(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET))(this);
		}

		::System::Void set_metrics(::UnityEngine::TextCore::GlyphMetrics value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET))(this, value);
		}

		::UnityEngine::TextCore::GlyphRect get_glyphRect()
		{
			return ((::UnityEngine::TextCore::GlyphRect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET))(this);
		}

		::System::Void set_glyphRect(::UnityEngine::TextCore::GlyphRect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphRect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET))(this, value);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET))(this, value);
		}

		::System::Int32 get_atlasIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET))(this);
		}

		::System::Void set_atlasIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET))(this, value);
		}
	};
}
