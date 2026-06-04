#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphValueRecord.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x2D2CE60)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphAdjustmentRecord_TypeDefinitionIndex = 5821;

	struct alignas(4) GlyphAdjustmentRecord
	{
		::System::UInt32 m_GlyphIndex; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord; // 0x14

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(this);
		}

		::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphValueRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(this);
		}
	};
}
