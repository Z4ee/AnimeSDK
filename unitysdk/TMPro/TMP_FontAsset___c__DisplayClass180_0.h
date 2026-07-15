#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define TMPRO_TMP_FONTASSET___C__DISPLAYCLASS180_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171ACCB0)
#define TMPRO_TMP_FONTASSET___C__DISPLAYCLASS180_0__RENDERCHARACTERTOTEXTURE_B__1_OFFSET UNITYSDK_OFFSET(0x171AD560)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset___c__DisplayClass180_0_TypeDefinitionIndex = 41768;

	class TMP_FontAsset___c__DisplayClass180_0 : public ::System::Object
	{
	public:
		::System::UInt32 unicode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__DISPLAYCLASS180_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RenderCharacterToTexture_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__DISPLAYCLASS180_0__RENDERCHARACTERTOTEXTURE_B__1_OFFSET))(this, a1);
		}
	};
}
