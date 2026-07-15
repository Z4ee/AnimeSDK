#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FrameCommand_TypeDefinitionIndex = 37237;

	enum class BrowserNative_FrameCommand : ::System::Int32
	{
		Undo = 0,
		Redo = 1,
		Cut = 2,
		Copy = 3,
		Paste = 4,
		Delete = 5,
		SelectAll = 6,
		ViewSource = 7,
	};
}
