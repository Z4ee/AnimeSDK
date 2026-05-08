#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D50C0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D5050)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D4FE0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET UNITYSDK_OFFSET(0x3B3000)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET UNITYSDK_OFFSET(0x43E9B0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4FB0)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphMetrics_TypeDefinitionIndex = 30943;

	struct alignas(4) GlyphMetrics
	{
		::System::Single m_Width; // 0x10
		::System::Single m_Height; // 0x14
		::System::Single m_HorizontalBearingX; // 0x18
		::System::Single m_HorizontalBearingY; // 0x1C
		::System::Single m_HorizontalAdvance; // 0x20

		::System::Void _ctor(::System::Single width, ::System::Single height, ::System::Single bearingX, ::System::Single bearingY, ::System::Single advance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET))(this, width, height, bearingX, bearingY, advance);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_horizontalBearingX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET))(this);
		}

		::System::Single get_horizontalBearingY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET))(this);
		}

		::System::Single get_horizontalAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::TextCore::GlyphMetrics other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET))(this, other);
		}
	};
}
