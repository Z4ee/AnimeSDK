#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierContour.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierPathSegment.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierSegment.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/VectorUtils_SceneNodeWorldTransform.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Shape; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ARCSEGMENTFORQUADRANT_OFFSET UNITYSDK_OFFSET(0x1A1C57F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERCOEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x1A1C6990)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERSEGMENTSTOPATH_OFFSET UNITYSDK_OFFSET(0x1A1C4CC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERSEGMENTTOPATH_OFFSET UNITYSDK_OFFSET(0x1A1B0FB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_1_OFFSET UNITYSDK_OFFSET(0x1A1BDC60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_2_OFFSET UNITYSDK_OFFSET(0x1A1C5030)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1A1BD800)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BUILDELLIPSEPATH_OFFSET UNITYSDK_OFFSET(0x1A1A79D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BUILDRECTANGLECONTOUR_OFFSET UNITYSDK_OFFSET(0x1A1C40E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_COMPUTEELLIPSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A1C2F10)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_CUBICROOTS_OFFSET UNITYSDK_OFFSET(0x1A1C6B40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ENSURERADIIARELARGEENOUGH_OFFSET UNITYSDK_OFFSET(0x1A1C4070)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_EVAL_OFFSET UNITYSDK_OFFSET(0x1A1C64E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_FINDBEZIERLINEINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1A1C5950)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_FLIPSEGMENT_OFFSET UNITYSDK_OFFSET(0x1A1C6400)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ISEMPTYSEGMENT_OFFSET UNITYSDK_OFFSET(0x1A1A7840)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEARCQUARTER_OFFSET UNITYSDK_OFFSET(0x1A1C5630)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEARC_OFFSET UNITYSDK_OFFSET(0x1A1C34D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKECIRCLESHAPE_OFFSET UNITYSDK_OFFSET(0x1A1AC9A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEELLIPSESHAPE_OFFSET UNITYSDK_OFFSET(0x1A1AD8D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKELINE_OFFSET UNITYSDK_OFFSET(0x1A1A7100)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEPATHLINE_OFFSET UNITYSDK_OFFSET(0x1A1C4BD0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKERECTANGLESHAPE_1_OFFSET UNITYSDK_OFFSET(0x1A1B6120)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKERECTANGLESHAPE_OFFSET UNITYSDK_OFFSET(0x1A1AF6F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_QUADRANTATANGLE_OFFSET UNITYSDK_OFFSET(0x1A1C5780)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A1BA310)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODES_OFFSET UNITYSDK_OFFSET(0x1A1B8C00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SEGMENTSINPATH_OFFSET UNITYSDK_OFFSET(0x1A1A7DA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SOLVEQUADRATIC_OFFSET UNITYSDK_OFFSET(0x1A1C6420)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SPLITSEGMENT_OFFSET UNITYSDK_OFFSET(0x1A1C5F00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMBEZIERPATH_1_OFFSET UNITYSDK_OFFSET(0x1A1C6660)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMBEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1A1C3D20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMSEGMENT_OFFSET UNITYSDK_OFFSET(0x1A1C6210)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_WORLDTRANSFORMEDSCENENODES_1_OFFSET UNITYSDK_OFFSET(0x1A1BBAC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_WORLDTRANSFORMEDSCENENODES_OFFSET UNITYSDK_OFFSET(0x1A1C68C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C7490)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils_TypeDefinitionIndex = 28496;

	class VectorUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VectorUtils_TypeDefinitionIndex)->GetStaticField(0x4AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* BuildEllipsePath(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::System::Single rotation, ::System::Single rx, ::System::Single ry, ::System::Boolean largeArc, ::System::Boolean sweep)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BUILDELLIPSEPATH_OFFSET))(p0, p1, rotation, rx, ry, largeArc, sweep);
		}

		static ::System::Void ComputeEllipseParameters(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::System::Single phi, ::System::Single rx, ::System::Single ry, ::System::Boolean fa, ::System::Boolean fs, ::UnityEngine::Vector2& c, ::System::Single& theta1, ::System::Single& sweepTheta, ::System::Single& adjustedRx, ::System::Single& adjustedRy)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_COMPUTEELLIPSEPARAMETERS_OFFSET))(p0, p1, phi, rx, ry, fa, fs, c, theta1, sweepTheta, adjustedRx, adjustedRy);
		}

		static ::System::Void EnsureRadiiAreLargeEnough(::UnityEngine::Vector2 p, ::System::Single& rx, ::System::Single& ry)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ENSURERADIIARELARGEENOUGH_OFFSET))(p, rx, ry);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierContour BuildRectangleContour(::UnityEngine::Rect rect, ::UnityEngine::Vector2 radiusTL, ::UnityEngine::Vector2 radiusTR, ::UnityEngine::Vector2 radiusBR, ::UnityEngine::Vector2 radiusBL)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierContour(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BUILDRECTANGLECONTOUR_OFFSET))(rect, radiusTL, radiusTR, radiusBR, radiusBL);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* BezierSegmentToPath(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERSEGMENTTOPATH_OFFSET))(segment);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* BezierSegmentsToPath(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>* segments)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERSEGMENTSTOPATH_OFFSET))(segments);
		}

		static ::System::Void MakeRectangleShape(::ToolBuddy::ThirdParty::VectorGraphics::Shape* rectShape, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::Shape*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKERECTANGLESHAPE_OFFSET))(rectShape, rect);
		}

		static ::System::Void MakeRectangleShape_1(::ToolBuddy::ThirdParty::VectorGraphics::Shape* rectShape, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 radiusTL, ::UnityEngine::Vector2 radiusTR, ::UnityEngine::Vector2 radiusBR, ::UnityEngine::Vector2 radiusBL)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::Shape*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKERECTANGLESHAPE_1_OFFSET))(rectShape, rect, radiusTL, radiusTR, radiusBR, radiusBL);
		}

		static ::System::Void MakeEllipseShape(::ToolBuddy::ThirdParty::VectorGraphics::Shape* ellipseShape, ::UnityEngine::Vector2 pos, ::System::Single radiusX, ::System::Single radiusY)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::Shape*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEELLIPSESHAPE_OFFSET))(ellipseShape, pos, radiusX, radiusY);
		}

		static ::System::Void MakeCircleShape(::ToolBuddy::ThirdParty::VectorGraphics::Shape* circleShape, ::UnityEngine::Vector2 pos, ::System::Single radius)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::Shape*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKECIRCLESHAPE_OFFSET))(circleShape, pos, radius);
		}

		static ::UnityEngine::Rect Bounds(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* path)
		{
			return ((::UnityEngine::Rect(*)(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_OFFSET))(path);
		}

		static ::UnityEngine::Rect Bounds_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* vertices)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_1_OFFSET))(vertices);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment MakeLine(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKELINE_OFFSET))(from, to);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* MakePathLine(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEPATHLINE_OFFSET))(from, to);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment MakeArcQuarter(::UnityEngine::Vector2 center, ::System::Single startAngleRads, ::System::Single sweepAngleRads)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEARCQUARTER_OFFSET))(center, startAngleRads, sweepAngleRads);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* MakeArc(::UnityEngine::Vector2 center, ::System::Single startAngleRads, ::System::Single sweepAngleRads, ::System::Single radius)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_MAKEARC_OFFSET))(center, startAngleRads, sweepAngleRads, radius);
		}

		static ::System::Int32 QuadrantAtAngle(::System::Single angle)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_QUADRANTATANGLE_OFFSET))(angle);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment ArcSegmentForQuadrant(::System::Int32 quadrant)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ARCSEGMENTFORQUADRANT_OFFSET))(quadrant);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment FlipSegment(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_FLIPSEGMENT_OFFSET))(segment);
		}

		static ::System::Void Bounds_2(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment, ::UnityEngine::Vector2& min, ::UnityEngine::Vector2& max)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BOUNDS_2_OFFSET))(segment, min, max);
		}

		static ::UnityEngine::Vector2 Eval(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_EVAL_OFFSET))(segment, t);
		}

		static ::System::Void SplitSegment(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment, ::System::Single t, ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment& b1, ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment& b2)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment, ::System::Single, ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment&, ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SPLITSEGMENT_OFFSET))(segment, t, b1, b2);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment TransformSegment(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment, ::UnityEngine::Vector2 translation, ::System::Single rotation, ::UnityEngine::Vector2 scaling)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMSEGMENT_OFFSET))(segment, translation, rotation, scaling);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* TransformBezierPath(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* path, ::UnityEngine::Vector2 translation, ::System::Single rotation, ::UnityEngine::Vector2 scaling)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMBEZIERPATH_OFFSET))(path, translation, rotation, scaling);
		}

		static ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* TransformBezierPath_1(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* path, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D matrix)
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*(*)(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_TRANSFORMBEZIERPATH_1_OFFSET))(path, matrix);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* SceneNodes(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODES_OFFSET))(root);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>* WorldTransformedSceneNodes(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* child, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* nodeOpacities, ::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform parent)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>*, ::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_WORLDTRANSFORMEDSCENENODES_OFFSET))(child, nodeOpacities, parent);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>* WorldTransformedSceneNodes_1(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* nodeOpacities)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_WORLDTRANSFORMEDSCENENODES_1_OFFSET))(root, nodeOpacities);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>* SegmentsInPath(::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* segments, ::System::Boolean closed)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>*(*)(::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>*, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SEGMENTSINPATH_OFFSET))(segments, closed);
		}

		static ::System::Void SolveQuadratic(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single& s1, ::System::Single& s2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SOLVEQUADRATIC_OFFSET))(a, b, c, s1, s2);
		}

		static ::Il2CppArray<::System::Single>* FindBezierLineIntersections(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment, ::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_FINDBEZIERLINEINTERSECTIONS_OFFSET))(segment, p0, p1);
		}

		static ::Il2CppArray<::System::Single>* CubicRoots(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_CUBICROOTS_OFFSET))(a, b, c, d);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* BezierCoefficients(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment segment)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_BEZIERCOEFFICIENTS_OFFSET))(segment);
		}

		static ::UnityEngine::Rect SceneNodeBounds(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root)
		{
			return ((::UnityEngine::Rect(*)(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEBOUNDS_OFFSET))(root);
		}

		static ::System::Boolean IsEmptySegment(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment bs)
		{
			return ((::System::Boolean(*)(::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_ISEMPTYSEGMENT_OFFSET))(bs);
		}
	};
}
