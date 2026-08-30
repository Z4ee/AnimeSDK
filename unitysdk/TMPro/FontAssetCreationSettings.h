#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define TMPRO_FONTASSETCREATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB1F90)

namespace TMPro
{
	inline static constexpr unsigned int FontAssetCreationSettings_TypeDefinitionIndex = 43382;

	struct alignas(8) FontAssetCreationSettings
	{
		::System::String* sourceFontFileName; // 0x10
		::System::String* sourceFontFileGUID; // 0x18
		::System::Int32 pointSizeSamplingMode; // 0x20
		::System::Int32 pointSize; // 0x24
		::System::Int32 padding; // 0x28
		::System::Int32 packingMode; // 0x2C
		::System::Int32 atlasWidth; // 0x30
		::System::Int32 atlasHeight; // 0x34
		::System::Int32 characterSetSelectionMode; // 0x38
		::System::String* characterSequence; // 0x40
		::System::String* referencedFontAssetGUID; // 0x48
		::System::String* referencedTextAssetGUID; // 0x50
		::System::Int32 fontStyle; // 0x58
		::System::Single fontStyleModifier; // 0x5C
		::System::Int32 renderMode; // 0x60
		::System::Boolean includeFontFeatures; // 0x64

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::String* a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_FONTASSETCREATIONSETTINGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
