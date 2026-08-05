#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathCorner.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathEnding.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class Stroke; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x325D00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_STROKE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_TAIL_OFFSET UNITYSDK_OFFSET(0x330F60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_CORNERS_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_HEAD_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_STROKE_OFFSET UNITYSDK_OFFSET(0x324D50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_TAIL_OFFSET UNITYSDK_OFFSET(0x599190)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int PathProperties_TypeDefinitionIndex = 31791;

	struct alignas(8) PathProperties
	{
		::ToolBuddy::ThirdParty::VectorGraphics::Stroke* _Stroke_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::PathEnding _Head_k__BackingField; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::PathEnding _Tail_k__BackingField; // 0x1C
		::ToolBuddy::ThirdParty::VectorGraphics::PathCorner _Corners_k__BackingField; // 0x20

		::ToolBuddy::ThirdParty::VectorGraphics::Stroke* get_Stroke()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Stroke*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_STROKE_OFFSET))(this);
		}

		::System::Void set_Stroke(::ToolBuddy::ThirdParty::VectorGraphics::Stroke* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Stroke*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_STROKE_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathEnding get_Head()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathEnding(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_HEAD_OFFSET))(this);
		}

		::System::Void set_Head(::ToolBuddy::ThirdParty::VectorGraphics::PathEnding value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathEnding))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_HEAD_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathEnding get_Tail()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathEnding(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_TAIL_OFFSET))(this);
		}

		::System::Void set_Tail(::ToolBuddy::ThirdParty::VectorGraphics::PathEnding value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathEnding))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_TAIL_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathCorner get_Corners()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathCorner(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_GET_CORNERS_OFFSET))(this);
		}

		::System::Void set_Corners(::ToolBuddy::ThirdParty::VectorGraphics::PathCorner value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathCorner))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATHPROPERTIES_SET_CORNERS_OFFSET))(this, value);
		}
	};
}
