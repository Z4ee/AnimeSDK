#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET UNITYSDK_OFFSET(0x3B044D0)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET UNITYSDK_OFFSET(0x3B045B0)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B04640)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerationSettings_TypeDefinitionIndex = 5022;

	struct alignas(8) TextGenerationSettings
	{
		::UnityEngine::Font* font; // 0x10
		::UnityEngine::Color color; // 0x18
		::System::Int32 fontSize; // 0x28
		::System::Single lineSpacing; // 0x2C
		::System::Boolean richText; // 0x30
		::System::UInt32 invalidTag; // 0x34
		::System::Single scaleFactor; // 0x38
		::System::Single textureScale; // 0x3C
		::UnityEngine::FontStyle fontStyle; // 0x40
		::UnityEngine::TextAnchor textAnchor; // 0x44
		::System::Boolean alignByGeometry; // 0x48
		::System::Boolean resizeTextForBestFit; // 0x49
		::System::Boolean fitVertically; // 0x4A
		::System::Int32 resizeTextMinSize; // 0x4C
		::System::Int32 resizeTextMaxSize; // 0x50
		::System::Boolean updateBounds; // 0x54
		::UnityEngine::VerticalWrapMode verticalOverflow; // 0x58
		::UnityEngine::HorizontalWrapMode horizontalOverflow; // 0x5C
		::UnityEngine::Vector2 generationExtents; // 0x60
		::UnityEngine::Vector2 pivot; // 0x68
		::System::Boolean generateOutOfBounds; // 0x70
		::System::Boolean skipUpdateFontTexture; // 0x71
		::System::Boolean overrideProcessFormat; // 0x72
		::System::Boolean requireTextFormatFlags; // 0x73

		::System::Boolean CompareColors(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareVector2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::TextGenerationSettings a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET))(this, a1);
		}
	};
}
