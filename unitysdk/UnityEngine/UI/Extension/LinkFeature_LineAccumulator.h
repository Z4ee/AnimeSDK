#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_EXPAND_OFFSET UNITYSDK_OFFSET(0x9AE9E0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_FLUSHTO_OFFSET UNITYSDK_OFFSET(0x9AEAD0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9AE990)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int LinkFeature_LineAccumulator_TypeDefinitionIndex = 71613;

	struct alignas(4) LinkFeature_LineAccumulator
	{
		::System::Single xMin; // 0x10
		::System::Single xMax; // 0x14
		::System::Single yMin; // 0x18
		::System::Single yMax; // 0x1C
		::System::Boolean hasQuad; // 0x20

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_RESET_OFFSET))(this);
		}

		::System::Void Expand(::System::Single leftX, ::System::Single rightX, ::System::Single topY, ::System::Single botY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_EXPAND_OFFSET))(this, leftX, rightX, topY, botY);
		}

		/*
		::System::Void FlushTo(::System::Collections::Generic::List_1<::UnityEngine::Rect>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_LINEACCUMULATOR_FLUSHTO_OFFSET))(this, output);
		}
		*/
	};
}
