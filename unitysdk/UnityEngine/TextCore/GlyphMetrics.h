#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3899280)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3899210)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3899120)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET UNITYSDK_OFFSET(0x802E0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET UNITYSDK_OFFSET(0xD510)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET UNITYSDK_OFFSET(0xD530)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET UNITYSDK_OFFSET(0x38990F0)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphMetrics_TypeDefinitionIndex = 5817;

	struct alignas(4) GlyphMetrics
	{
		::System::Single m_Width; // 0x10
		::System::Single m_Height; // 0x14
		::System::Single m_HorizontalBearingX; // 0x18
		::System::Single m_HorizontalBearingY; // 0x1C
		::System::Single m_HorizontalAdvance; // 0x20

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::TextCore::GlyphMetrics a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
