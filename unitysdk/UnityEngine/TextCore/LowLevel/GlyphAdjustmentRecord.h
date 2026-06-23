#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphValueRecord.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x3E4280)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphAdjustmentRecord_TypeDefinitionIndex = 32498;

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
