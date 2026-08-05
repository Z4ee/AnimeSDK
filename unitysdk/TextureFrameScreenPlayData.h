#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/ScreenPlayData.h"

namespace MoleMole { class TextureSheetLoopFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5BFC0)

inline static constexpr unsigned int TextureFrameScreenPlayData_TypeDefinitionIndex = 71668;

class TextureFrameScreenPlayData : public ::ScreenPlayData
{
public:
	::MoleMole::TextureSheetType textureSheetType; // 0x50
	::UnityEngine::Events::UnityAction* loopEvent; // 0x58
	::System::Boolean isOverrideLoopFrames; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* overrideLoopFrames; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET))(this);
	}
};
