#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_ViewBoxAlign.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGDocument_ViewBoxAspectRatio.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_ViewBoxInfo_TypeDefinitionIndex = 31119;

	struct alignas(4) SVGDocument_ViewBoxInfo
	{
		::UnityEngine::Rect ViewBox; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxAspectRatio AspectRatio; // 0x20
		::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxAlign AlignX; // 0x24
		::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ViewBoxAlign AlignY; // 0x28
		::System::Boolean IsEmpty; // 0x2C
	};
}
