#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/Normal.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Bounds2D; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x1F1C25B0)
#define UNITYENGINE_PROBUILDER_MATH_APPROX2_OFFSET UNITYSDK_OFFSET(0x1F1C2440)
#define UNITYENGINE_PROBUILDER_MATH_APPROX3_OFFSET UNITYSDK_OFFSET(0x1F1C2480)
#define UNITYENGINE_PROBUILDER_MATH_APPROX4_OFFSET UNITYSDK_OFFSET(0x1F1C24D0)
#define UNITYENGINE_PROBUILDER_MATH_APPROXC_OFFSET UNITYSDK_OFFSET(0x1F1C2530)
#define UNITYENGINE_PROBUILDER_MATH_APPROX_OFFSET UNITYSDK_OFFSET(0x1F1C2590)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_1_OFFSET UNITYSDK_OFFSET(0x1F1C0C00)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_2_OFFSET UNITYSDK_OFFSET(0x1F1C1800)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_OFFSET UNITYSDK_OFFSET(0x1F1C05D0)
#define UNITYENGINE_PROBUILDER_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x1F1BC010)
#define UNITYENGINE_PROBUILDER_MATH_CROSS_OFFSET UNITYSDK_OFFSET(0x1F1BDF70)
#define UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1F1BCE90)
#define UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1F1BCD40)
#define UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_1_OFFSET UNITYSDK_OFFSET(0x1F1BF690)
#define UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_OFFSET UNITYSDK_OFFSET(0x1F1BF660)
#define UNITYENGINE_PROBUILDER_MATH_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F1B4DA0)
#define UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_1_OFFSET UNITYSDK_OFFSET(0x1F167E70)
#define UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_OFFSET UNITYSDK_OFFSET(0x1F1BD450)
#define UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_1_OFFSET UNITYSDK_OFFSET(0x1F1BD2A0)
#define UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_OFFSET UNITYSDK_OFFSET(0x1F1BD0E0)
#define UNITYENGINE_PROBUILDER_MATH_INVERTSCALEVECTOR_OFFSET UNITYSDK_OFFSET(0x1F1C23F0)
#define UNITYENGINE_PROBUILDER_MATH_ISCARDINALAXIS_OFFSET UNITYSDK_OFFSET(0x1F1BF4D0)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_1_OFFSET UNITYSDK_OFFSET(0x1F1C2670)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_2_OFFSET UNITYSDK_OFFSET(0x1F1C2690)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_3_OFFSET UNITYSDK_OFFSET(0x1F1C26C0)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1C2660)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_1_OFFSET UNITYSDK_OFFSET(0x1F1BF6F0)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_OFFSET UNITYSDK_OFFSET(0x1F1BF6C0)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x1F1BFF40)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_OFFSET UNITYSDK_OFFSET(0x1F1BFE70)
#define UNITYENGINE_PROBUILDER_MATH_MAKENONZERO_OFFSET UNITYSDK_OFFSET(0x1F1C2700)
#define UNITYENGINE_PROBUILDER_MATH_NORMALTANGENTBITANGENT_OFFSET UNITYSDK_OFFSET(0x1F1B4470)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_1_OFFSET UNITYSDK_OFFSET(0x1F1BE170)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_2_OFFSET UNITYSDK_OFFSET(0x1F1BF110)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_OFFSET UNITYSDK_OFFSET(0x1F1BDFF0)
#define UNITYENGINE_PROBUILDER_MATH_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x1F1BCAA0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINCIRCUMFERENCE_OFFSET UNITYSDK_OFFSET(0x1F1BC060)
#define UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCEWITHCONSTANTANGLE_OFFSET UNITYSDK_OFFSET(0x1F1BC230)
#define UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCE_OFFSET UNITYSDK_OFFSET(0x1F1BC100)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_1_OFFSET UNITYSDK_OFFSET(0x1F1BDB10)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_2_OFFSET UNITYSDK_OFFSET(0x1F1BDCD0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x1F1BD580)
#define UNITYENGINE_PROBUILDER_MATH_POINTINSPHERE_OFFSET UNITYSDK_OFFSET(0x1F1BC400)
#define UNITYENGINE_PROBUILDER_MATH_POLYGONAREA_OFFSET UNITYSDK_OFFSET(0x1F1BC750)
#define UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1F1B1E70)
#define UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1F1B02E0)
#define UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1F1BDF00)
#define UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1F1BDEC0)
#define UNITYENGINE_PROBUILDER_MATH_REFLECTPOINT_OFFSET UNITYSDK_OFFSET(0x1F1BCAC0)
#define UNITYENGINE_PROBUILDER_MATH_ROTATEAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x1F1BC970)
#define UNITYENGINE_PROBUILDER_MATH_SCALEAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x1F1BCA50)
#define UNITYENGINE_PROBUILDER_MATH_SECANT_OFFSET UNITYSDK_OFFSET(0x1F1BDFD0)
#define UNITYENGINE_PROBUILDER_MATH_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1F1BC4D0)
#define UNITYENGINE_PROBUILDER_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x1F1C25E0)
#define UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x1F1BF7E0)
#define UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_OFFSET UNITYSDK_OFFSET(0x1F1BF710)
#define UNITYENGINE_PROBUILDER_MATH_SQRDISTANCERAYPOINT_OFFSET UNITYSDK_OFFSET(0x1F1BCCE0)
#define UNITYENGINE_PROBUILDER_MATH_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F1BC600)
#define UNITYENGINE_PROBUILDER_MATH_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1F1BDF40)
#define UNITYENGINE_PROBUILDER_MATH_SUM_OFFSET UNITYSDK_OFFSET(0x1F1C2630)
#define UNITYENGINE_PROBUILDER_MATH_TRIANGLEAREA_OFFSET UNITYSDK_OFFSET(0x1F1BC640)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 44373;

	class Math : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_tv3()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x11D40);
		}
		static ::UnityEngine::Vector3* StaticGet_tv4()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x11D4C);
		}
		static ::UnityEngine::Vector3* StaticGet_tv2()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x11D58);
		}
		static ::UnityEngine::Vector3* StaticGet_tv1()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0x11D64);
		}
		// static const ::System::Single phi; // 0x0
		// static const ::System::Single k_FltEpsilon; // 0x0
		// static const ::System::Single k_FltCompareEpsilon; // 0x0
		// static const ::System::Single handleEpsilon; // 0x0

		static ::UnityEngine::Vector2 PointInCircumference(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINCIRCUMFERENCE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 PointInEllipseCircumference(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCEWITHCONSTANTANGLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 PointInSphere(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINSPHERE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SIGNEDANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SqrDistance(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SQRDISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Single TriangleArea(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_TRIANGLEAREA_OFFSET))(a1, a2, a3);
		}

		static ::System::Single PolygonArea(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POLYGONAREA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 RotateAroundPoint(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ROTATEAROUNDPOINT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 ScaleAroundPoint(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SCALEAROUNDPOINT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_PERPENDICULAR_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 ReflectPoint(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_REFLECTPOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single SqrDistanceRayPoint(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Ray, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SQRDISTANCERAYPOINT_OFFSET))(a1, a2);
		}

		static ::System::Single DistancePointLineSegment(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DistancePointLineSegment_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Ray a1, ::UnityEngine::Ray a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Ray, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetNearestPointRayRay_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetLineSegmentIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetLineSegmentIntersect_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PointInPolygon(::Il2CppArray<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PointInPolygon_1(::Il2CppArray<::UnityEngine::Vector2>* a1, ::UnityEngine::ProBuilder::Bounds2D* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::Bounds2D*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PointInPolygon_2(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::ProBuilder::Bounds2D* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::Bounds2D*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean RectIntersectsLineSegment(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RectIntersectsLineSegment_1(::UnityEngine::Rect a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RayIntersectsTriangle(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single& a5, ::UnityEngine::Vector3& a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean RayIntersectsTriangle2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single& a6, ::UnityEngine::Vector3& a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Single Secant(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SECANT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Normal(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Normal_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Normal_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Normal NormalTangentBitangent(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::ProBuilder::Normal(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMALTANGENTBITANGENT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCardinalAxis(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISCARDINALAXIS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 DivideBy(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 DivideBy_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_1_OFFSET))(a1, a2);
		}

		static ::System::Single LargestValue(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_OFFSET))(a1);
		}

		static ::System::Single LargestValue_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 SmallestVector2(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 SmallestVector2_1(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 LargestVector2(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 LargestVector2_1(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds GetBounds(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETBOUNDS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Average_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 Average_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector4(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 InvertScaleVector(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_INVERTSCALEVECTOR_OFFSET))(a1);
		}

		static ::System::Boolean Approx2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Approx3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Approx4(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ApproxC(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROXC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Approx(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Clamp(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ABS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SIGN_OFFSET))(a1);
		}

		static ::System::Single Sum(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SUM_OFFSET))(a1);
		}

		static ::System::Void Cross(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_CROSS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Subtract(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SUBTRACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsNumber(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_OFFSET))(a1);
		}

		static ::System::Boolean IsNumber_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_1_OFFSET))(a1);
		}

		static ::System::Boolean IsNumber_2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_2_OFFSET))(a1);
		}

		static ::System::Boolean IsNumber_3(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_3_OFFSET))(a1);
		}

		static ::System::Single MakeNonZero(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_MAKENONZERO_OFFSET))(a1, a2);
		}
	};
}
