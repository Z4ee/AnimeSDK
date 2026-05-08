#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierPathSegment.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x3AB220)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_GET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x5783A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_SET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int BezierContour_TypeDefinitionIndex = 28510;

	struct alignas(8) BezierContour
	{
		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* _Segments_k__BackingField; // 0x10
		::System::Boolean _Closed_k__BackingField; // 0x18

		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* get_Segments()
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_GET_SEGMENTS_OFFSET))(this);
		}

		::System::Void set_Segments(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_SET_SEGMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERCONTOUR_SET_CLOSED_OFFSET))(this, value);
		}
	};
}
