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

#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET UNITYSDK_OFFSET(0xA76B50)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET UNITYSDK_OFFSET(0xA76C30)
#define UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA76CC0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerationSettings_TypeDefinitionIndex = 6361;

	struct alignas(8) TextGenerationSettings
	{
		::UnityEngine::Font* font; // 0x10
		::UnityEngine::Color color; // 0x18
		::System::Int32 fontSize; // 0x28
		::System::Single lineSpacing; // 0x2C
		::System::Boolean richText; // 0x30
		::System::Single scaleFactor; // 0x34
		::UnityEngine::FontStyle fontStyle; // 0x38
		::UnityEngine::TextAnchor textAnchor; // 0x3C
		::System::Boolean alignByGeometry; // 0x40
		::System::Boolean resizeTextForBestFit; // 0x41
		::System::Int32 resizeTextMinSize; // 0x44
		::System::Int32 resizeTextMaxSize; // 0x48
		::System::Boolean updateBounds; // 0x4C
		::UnityEngine::VerticalWrapMode verticalOverflow; // 0x50
		::UnityEngine::HorizontalWrapMode horizontalOverflow; // 0x54
		::UnityEngine::Vector2 generationExtents; // 0x58
		::UnityEngine::Vector2 pivot; // 0x60
		::System::Boolean generateOutOfBounds; // 0x68

		::System::Boolean CompareColors(::UnityEngine::Color left, ::UnityEngine::Color right)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPARECOLORS_OFFSET))(this, left, right);
		}

		::System::Boolean CompareVector2(::UnityEngine::Vector2 left, ::UnityEngine::Vector2 right)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_COMPAREVECTOR2_OFFSET))(this, left, right);
		}

		::System::Boolean Equals(::UnityEngine::TextGenerationSettings other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATIONSETTINGS_EQUALS_OFFSET))(this, other);
		}
	};
}
