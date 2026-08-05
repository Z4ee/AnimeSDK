#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement_Legacy.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_SPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D70C9B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Sprite_TypeDefinitionIndex = 39856;

	class TMP_Sprite : public ::TMPro::TMP_TextElement_Legacy
	{
	public:
		::System::String* name; // 0x38
		::System::Int32 hashCode; // 0x40
		::System::Int32 unicode; // 0x44
		::UnityEngine::Vector2 pivot; // 0x48
		::UnityEngine::Sprite* sprite; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITE__CTOR_OFFSET))(this);
		}
	};
}
