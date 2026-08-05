#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ZzzUiCurveGraphic_CurveSegment_PrevCurveInfo.h"
#include "unitysdk/ZzzUiCurveGraphic_CurveType.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECONTROLPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1E517EE0)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1E517E80)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECURVEINFO_OFFSET UNITYSDK_OFFSET(0x1E518340)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT_GET_HASNEXTCURVE_OFFSET UNITYSDK_OFFSET(0x1E517A30)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT_GET_HASPREVCURVE_OFFSET UNITYSDK_OFFSET(0x1E517A20)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E517C60)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E517D70)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E517DC0)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E517E20)
#define ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E517A40)

inline static constexpr unsigned int ZzzUiCurveGraphic_CurveSegment_TypeDefinitionIndex = 45745;

class ZzzUiCurveGraphic_CurveSegment : public ::System::Object
{
public:
	::System::String* key; // 0x10
	::ZzzUiCurveGraphic_CurveType curveType; // 0x18
	::UnityEngine::Vector2 startPoint; // 0x1C
	::UnityEngine::Vector2 controlPoint1; // 0x24
	::UnityEngine::Vector2 controlPoint2; // 0x2C
	::UnityEngine::Vector2 endPoint; // 0x34
	::System::Boolean invertStartEnd; // 0x3C
	::System::Boolean invertUV; // 0x3D
	::System::Boolean isOpen; // 0x3E
	::System::Boolean isAnimated; // 0x3F
	::ZzzUiCurveGraphic_CurveSegment* prevCurve; // 0x40
	::ZzzUiCurveGraphic_CurveSegment* nextCurve; // 0x48

	::System::Void _ctor(::UnityEngine::RectTransform* startPointRectTransform, ::UnityEngine::RectTransform* endPointRectTransform, ::UnityEngine::RectTransform* parent, ::System::Boolean invertStartEnd, ::System::Boolean invertUV, ::System::Boolean isOpen, ::System::Boolean isAnimated)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_OFFSET))(this, startPointRectTransform, endPointRectTransform, parent, invertStartEnd, invertUV, isOpen, isAnimated);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::UnityEngine::RectTransform* parent, ::System::Boolean invertStartEnd, ::System::Boolean invertUV, ::System::Boolean isOpen, ::System::Boolean isAnimated)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_1_OFFSET))(this, startPos, endPos, parent, invertStartEnd, invertUV, isOpen, isAnimated);
	}

	::System::Void _ctor_2(::UnityEngine::Vector2 startPoint, ::UnityEngine::Vector2 endPoint)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_2_OFFSET))(this, startPoint, endPoint);
	}

	::System::Void _ctor_3(::UnityEngine::Vector2 startPoint, ::UnityEngine::Vector2 endPoint, ::UnityEngine::Vector2 controlPoint1, ::UnityEngine::Vector2 controlPoint2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_3_OFFSET))(this, startPoint, endPoint, controlPoint1, controlPoint2);
	}

	::System::Void _ctor_4(::UnityEngine::Vector2 startPoint, ::UnityEngine::Vector2 endPoint, ::System::Boolean invertStartEnd, ::System::Boolean invertUV)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT__CTOR_4_OFFSET))(this, startPoint, endPoint, invertStartEnd, invertUV);
	}

	::System::Boolean get_HasPrevCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT_GET_HASPREVCURVE_OFFSET))(this);
	}

	::System::Boolean get_HasNextCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT_GET_HASNEXTCURVE_OFFSET))(this);
	}

	::ZzzUiCurveGraphic_CurveSegment* ComputeControlPoints(::System::Single curveSmoothness)
	{
		return ((::ZzzUiCurveGraphic_CurveSegment*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECONTROLPOINTS_OFFSET))(this, curveSmoothness);
	}

	::ZzzUiCurveGraphic_CurveSegment* ComputeControlPoints_1(::System::Single curveSmoothness, ::ZzzUiCurveGraphic_CurveType curveType)
	{
		return ((::ZzzUiCurveGraphic_CurveSegment*(*)(::PVOID, ::System::Single, ::ZzzUiCurveGraphic_CurveType))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECONTROLPOINTS_1_OFFSET))(this, curveSmoothness, curveType);
	}

	::ZzzUiCurveGraphic_CurveSegment_PrevCurveInfo ComputeCurveInfo(::System::Int32 segments)
	{
		return ((::ZzzUiCurveGraphic_CurveSegment_PrevCurveInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVESEGMENT_COMPUTECURVEINFO_OFFSET))(this, segments);
	}
};
