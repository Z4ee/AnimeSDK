#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/SVGParser_SceneInfo.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/ViewportOptions.h"

namespace System::IO { class TextReader; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_IMPORTSVG_1_OFFSET UNITYSDK_OFFSET(0x1DA9D9C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_IMPORTSVG_OFFSET UNITYSDK_OFFSET(0x1DA9D960)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E410)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGParser_TypeDefinitionIndex = 31728;

	class SVGParser : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER__CTOR_OFFSET))(this);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGParser_SceneInfo ImportSVG(::System::IO::TextReader* textReader, ::System::Single dpi, ::System::Single pixelsPerUnit, ::System::Int32 windowWidth, ::System::Int32 windowHeight, ::System::Boolean clipViewport)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGParser_SceneInfo(*)(::System::IO::TextReader*, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_IMPORTSVG_OFFSET))(textReader, dpi, pixelsPerUnit, windowWidth, windowHeight, clipViewport);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGParser_SceneInfo ImportSVG_1(::System::IO::TextReader* textReader, ::ToolBuddy::ThirdParty::VectorGraphics::ViewportOptions viewportOptions, ::System::Single dpi, ::System::Single pixelsPerUnit, ::System::Int32 windowWidth, ::System::Int32 windowHeight)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SVGParser_SceneInfo(*)(::System::IO::TextReader*, ::ToolBuddy::ThirdParty::VectorGraphics::ViewportOptions, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_IMPORTSVG_1_OFFSET))(textReader, viewportOptions, dpi, pixelsPerUnit, windowWidth, windowHeight);
		}
	};
}
