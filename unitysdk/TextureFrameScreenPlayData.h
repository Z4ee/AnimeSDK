#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/ScreenPlayData.h"

namespace UnityEngine::Events { class UnityAction; }

#define TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4EE60)

inline static constexpr unsigned int TextureFrameScreenPlayData_TypeDefinitionIndex = 65381;

class TextureFrameScreenPlayData : public ::ScreenPlayData
{
public:
	::MoleMole::TextureSheetType textureSheetType; // 0x50
	::UnityEngine::Events::UnityAction* loopEvent; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET))(this);
	}
};
