#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System { class String; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGDocument_ElemHandler; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_HANDLERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D210)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_Handlers_TypeDefinitionIndex = 31741;

	class SVGDocument_Handlers : public ::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SVGDocument_ElemHandler*>
	{
	public:
		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_HANDLERS__CTOR_OFFSET))(this, capacity);
		}
	};
}
