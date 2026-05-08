#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SCALABLEIMAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8860B0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int ScalableImage_TypeDefinitionIndex = 25120;

	struct alignas(8) ScalableImage
	{
		::UnityEngine::Texture2D* normalImage; // 0x10
		::UnityEngine::Texture2D* highResolutionImage; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SCALABLEIMAGE_TOSTRING_OFFSET))(this);
		}
	};
}
