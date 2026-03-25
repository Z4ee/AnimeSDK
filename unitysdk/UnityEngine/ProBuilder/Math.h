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

#define UNITYENGINE_PROBUILDER_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x18816800)
#define UNITYENGINE_PROBUILDER_MATH_APPROX2_OFFSET UNITYSDK_OFFSET(0x18816690)
#define UNITYENGINE_PROBUILDER_MATH_APPROX3_OFFSET UNITYSDK_OFFSET(0x188166D0)
#define UNITYENGINE_PROBUILDER_MATH_APPROX4_OFFSET UNITYSDK_OFFSET(0x18816720)
#define UNITYENGINE_PROBUILDER_MATH_APPROXC_OFFSET UNITYSDK_OFFSET(0x18816780)
#define UNITYENGINE_PROBUILDER_MATH_APPROX_OFFSET UNITYSDK_OFFSET(0x188167E0)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_1_OFFSET UNITYSDK_OFFSET(0x188156F0)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_2_OFFSET UNITYSDK_OFFSET(0x18815E90)
#define UNITYENGINE_PROBUILDER_MATH_AVERAGE_OFFSET UNITYSDK_OFFSET(0x188152A0)
#define UNITYENGINE_PROBUILDER_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x18811400)
#define UNITYENGINE_PROBUILDER_MATH_CROSS_OFFSET UNITYSDK_OFFSET(0x18813470)
#define UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_1_OFFSET UNITYSDK_OFFSET(0x188122D0)
#define UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x18812180)
#define UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_1_OFFSET UNITYSDK_OFFSET(0x188147E0)
#define UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_OFFSET UNITYSDK_OFFSET(0x188147B0)
#define UNITYENGINE_PROBUILDER_MATH_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1880A0D0)
#define UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_1_OFFSET UNITYSDK_OFFSET(0x187BE1F0)
#define UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_OFFSET UNITYSDK_OFFSET(0x18812890)
#define UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_1_OFFSET UNITYSDK_OFFSET(0x188126E0)
#define UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_OFFSET UNITYSDK_OFFSET(0x18812520)
#define UNITYENGINE_PROBUILDER_MATH_INVERTSCALEVECTOR_OFFSET UNITYSDK_OFFSET(0x18816640)
#define UNITYENGINE_PROBUILDER_MATH_ISCARDINALAXIS_OFFSET UNITYSDK_OFFSET(0x18814620)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_1_OFFSET UNITYSDK_OFFSET(0x188168C0)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_2_OFFSET UNITYSDK_OFFSET(0x188168E0)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_3_OFFSET UNITYSDK_OFFSET(0x18816910)
#define UNITYENGINE_PROBUILDER_MATH_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x188168B0)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_1_OFFSET UNITYSDK_OFFSET(0x18814860)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_OFFSET UNITYSDK_OFFSET(0x18814810)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x18814E50)
#define UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_OFFSET UNITYSDK_OFFSET(0x18814D90)
#define UNITYENGINE_PROBUILDER_MATH_MAKENONZERO_OFFSET UNITYSDK_OFFSET(0x18816950)
#define UNITYENGINE_PROBUILDER_MATH_NORMALTANGENTBITANGENT_OFFSET UNITYSDK_OFFSET(0x188096F0)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_1_OFFSET UNITYSDK_OFFSET(0x18813670)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_2_OFFSET UNITYSDK_OFFSET(0x18814200)
#define UNITYENGINE_PROBUILDER_MATH_NORMAL_OFFSET UNITYSDK_OFFSET(0x188134F0)
#define UNITYENGINE_PROBUILDER_MATH_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x18811EE0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINCIRCUMFERENCE_OFFSET UNITYSDK_OFFSET(0x18811470)
#define UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCEWITHCONSTANTANGLE_OFFSET UNITYSDK_OFFSET(0x18811610)
#define UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCE_OFFSET UNITYSDK_OFFSET(0x18811500)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_1_OFFSET UNITYSDK_OFFSET(0x18812FD0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_2_OFFSET UNITYSDK_OFFSET(0x188131B0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x188129C0)
#define UNITYENGINE_PROBUILDER_MATH_POINTINSPHERE_OFFSET UNITYSDK_OFFSET(0x188117E0)
#define UNITYENGINE_PROBUILDER_MATH_POLYGONAREA_OFFSET UNITYSDK_OFFSET(0x18811B30)
#define UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE2_OFFSET UNITYSDK_OFFSET(0x18806FA0)
#define UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE_OFFSET UNITYSDK_OFFSET(0x188052A0)
#define UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_1_OFFSET UNITYSDK_OFFSET(0x18813400)
#define UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x188133C0)
#define UNITYENGINE_PROBUILDER_MATH_REFLECTPOINT_OFFSET UNITYSDK_OFFSET(0x18811F00)
#define UNITYENGINE_PROBUILDER_MATH_ROTATEAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x18811DB0)
#define UNITYENGINE_PROBUILDER_MATH_SCALEAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x18811E90)
#define UNITYENGINE_PROBUILDER_MATH_SECANT_OFFSET UNITYSDK_OFFSET(0x188134D0)
#define UNITYENGINE_PROBUILDER_MATH_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x188118B0)
#define UNITYENGINE_PROBUILDER_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x18816830)
#define UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x18814940)
#define UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_OFFSET UNITYSDK_OFFSET(0x18814880)
#define UNITYENGINE_PROBUILDER_MATH_SQRDISTANCERAYPOINT_OFFSET UNITYSDK_OFFSET(0x18812120)
#define UNITYENGINE_PROBUILDER_MATH_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x188119E0)
#define UNITYENGINE_PROBUILDER_MATH_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x18813440)
#define UNITYENGINE_PROBUILDER_MATH_SUM_OFFSET UNITYSDK_OFFSET(0x18816880)
#define UNITYENGINE_PROBUILDER_MATH_TRIANGLEAREA_OFFSET UNITYSDK_OFFSET(0x18811A20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 34109;

	class Math : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_tv3()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0xCFC0);
		}
		static ::UnityEngine::Vector3* StaticGet_tv1()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0xCFCC);
		}
		static ::UnityEngine::Vector3* StaticGet_tv2()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0xCFD8);
		}
		static ::UnityEngine::Vector3* StaticGet_tv4()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Math_TypeDefinitionIndex)->GetStaticField(0xCFE4);
		}
		// static const ::System::Single phi; // 0x0
		// static const ::System::Single k_FltEpsilon; // 0x0
		// static const ::System::Single k_FltCompareEpsilon; // 0x0
		// static const ::System::Single handleEpsilon; // 0x0

		static ::UnityEngine::Vector2 PointInCircumference(::System::Single radius, ::System::Single angleInDegrees, ::UnityEngine::Vector2 origin)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINCIRCUMFERENCE_OFFSET))(radius, angleInDegrees, origin);
		}

		static ::UnityEngine::Vector2 PointInEllipseCircumference(::System::Single xRadius, ::System::Single yRadius, ::System::Single angleInDegrees, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2& tangent)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCE_OFFSET))(xRadius, yRadius, angleInDegrees, origin, tangent);
		}

		static ::UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(::System::Single xRadius, ::System::Single yRadius, ::System::Single angleInDegrees, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2& tangent)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINELLIPSECIRCUMFERENCEWITHCONSTANTANGLE_OFFSET))(xRadius, yRadius, angleInDegrees, origin, tangent);
		}

		static ::UnityEngine::Vector3 PointInSphere(::System::Single radius, ::System::Single latitudeAngle, ::System::Single longitudeAngle)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINSPHERE_OFFSET))(radius, latitudeAngle, longitudeAngle);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SIGNEDANGLE_OFFSET))(a, b);
		}

		static ::System::Single SqrDistance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SQRDISTANCE_OFFSET))(a, b);
		}

		static ::System::Single TriangleArea(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y, ::UnityEngine::Vector3 z)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_TRIANGLEAREA_OFFSET))(x, y, z);
		}

		static ::System::Single PolygonArea(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POLYGONAREA_OFFSET))(vertices, indexes);
		}

		static ::UnityEngine::Vector2 RotateAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, ::System::Single theta)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ROTATEAROUNDPOINT_OFFSET))(v, origin, theta);
		}

		static ::UnityEngine::Vector2 ScaleAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 scale)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SCALEAROUNDPOINT_OFFSET))(v, origin, scale);
		}

		static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_PERPENDICULAR_OFFSET))(value);
		}

		static ::UnityEngine::Vector2 ReflectPoint(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_REFLECTPOINT_OFFSET))(point, lineStart, lineEnd);
		}

		static ::System::Single SqrDistanceRayPoint(::UnityEngine::Ray ray, ::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::UnityEngine::Ray, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SQRDISTANCERAYPOINT_OFFSET))(ray, point);
		}

		static ::System::Single DistancePointLineSegment(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_OFFSET))(point, lineStart, lineEnd);
		}

		static ::System::Single DistancePointLineSegment_1(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DISTANCEPOINTLINESEGMENT_1_OFFSET))(point, lineStart, lineEnd);
		}

		static ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Ray a, ::UnityEngine::Ray b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Ray, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 GetNearestPointRayRay_1(::UnityEngine::Vector3 ao, ::UnityEngine::Vector3 ad, ::UnityEngine::Vector3 bo, ::UnityEngine::Vector3 bd)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETNEARESTPOINTRAYRAY_1_OFFSET))(ao, ad, bo, bd);
		}

		static ::System::Boolean GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::UnityEngine::Vector2& intersect)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_OFFSET))(p0, p1, p2, p3, intersect);
		}

		static ::System::Boolean GetLineSegmentIntersect_1(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETLINESEGMENTINTERSECT_1_OFFSET))(p0, p1, p2, p3);
		}

		static ::System::Boolean PointInPolygon(::Il2CppArray<::UnityEngine::Vector2>* polygon, ::UnityEngine::Vector2 point, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_OFFSET))(polygon, point, indexes);
		}

		static ::System::Boolean PointInPolygon_1(::Il2CppArray<::UnityEngine::Vector2>* positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::Bounds2D*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_1_OFFSET))(positions, polyBounds, edges, point);
		}

		static ::System::Boolean PointInPolygon_2(::Il2CppArray<::UnityEngine::Vector3>* positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::Bounds2D*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_POINTINPOLYGON_2_OFFSET))(positions, polyBounds, edges, point);
		}

		static ::System::Boolean RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_OFFSET))(rect, a, b);
		}

		static ::System::Boolean RectIntersectsLineSegment_1(::UnityEngine::Rect rect, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RECTINTERSECTSLINESEGMENT_1_OFFSET))(rect, a, b);
		}

		static ::System::Boolean RayIntersectsTriangle(::UnityEngine::Ray InRay, ::UnityEngine::Vector3 InTriangleA, ::UnityEngine::Vector3 InTriangleB, ::UnityEngine::Vector3 InTriangleC, ::System::Single& OutDistance, ::UnityEngine::Vector3& OutPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE_OFFSET))(InRay, InTriangleA, InTriangleB, InTriangleC, OutDistance, OutPoint);
		}

		static ::System::Boolean RayIntersectsTriangle2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 vert0, ::UnityEngine::Vector3 vert1, ::UnityEngine::Vector3 vert2, ::System::Single& distance, ::UnityEngine::Vector3& normal)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_RAYINTERSECTSTRIANGLE2_OFFSET))(origin, dir, vert0, vert1, vert2, distance, normal);
		}

		static ::System::Single Secant(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SECANT_OFFSET))(x);
		}

		static ::UnityEngine::Vector3 Normal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_OFFSET))(p0, p1, p2);
		}

		static ::UnityEngine::Vector3 Normal_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_1_OFFSET))(vertices, indexes);
		}

		static ::UnityEngine::Vector3 Normal_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMAL_2_OFFSET))(mesh, face);
		}

		static ::UnityEngine::ProBuilder::Normal NormalTangentBitangent(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::ProBuilder::Normal(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_NORMALTANGENTBITANGENT_OFFSET))(mesh, face);
		}

		static ::System::Boolean IsCardinalAxis(::UnityEngine::Vector3 v, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISCARDINALAXIS_OFFSET))(v, epsilon);
		}

		static ::UnityEngine::Vector2 DivideBy(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 o)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_OFFSET))(v, o);
		}

		static ::UnityEngine::Vector3 DivideBy_1(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 o)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_DIVIDEBY_1_OFFSET))(v, o);
		}

		static ::System::Single LargestValue(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_OFFSET))(v);
		}

		static ::System::Single LargestValue_1(::UnityEngine::Vector2 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVALUE_1_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 SmallestVector2(::Il2CppArray<::UnityEngine::Vector2>* v)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 SmallestVector2_1(::Il2CppArray<::UnityEngine::Vector2>* v, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SMALLESTVECTOR2_1_OFFSET))(v, indexes);
		}

		static ::UnityEngine::Vector2 LargestVector2(::Il2CppArray<::UnityEngine::Vector2>* v)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 LargestVector2_1(::Il2CppArray<::UnityEngine::Vector2>* v, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_LARGESTVECTOR2_1_OFFSET))(v, indexes);
		}

		static ::UnityEngine::Bounds GetBounds(::Il2CppArray<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indices)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_GETBOUNDS_OFFSET))(positions, indices);
		}

		static ::UnityEngine::Vector2 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* array, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_OFFSET))(array, indexes);
		}

		static ::UnityEngine::Vector3 Average_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* array, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_1_OFFSET))(array, indexes);
		}

		static ::UnityEngine::Vector4 Average_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* array, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector4(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_AVERAGE_2_OFFSET))(array, indexes);
		}

		static ::UnityEngine::Vector3 InvertScaleVector(::UnityEngine::Vector3 scaleVector)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_INVERTSCALEVECTOR_OFFSET))(scaleVector);
		}

		static ::System::Boolean Approx2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX2_OFFSET))(a, b, delta);
		}

		static ::System::Boolean Approx3(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX3_OFFSET))(a, b, delta);
		}

		static ::System::Boolean Approx4(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX4_OFFSET))(a, b, delta);
		}

		static ::System::Boolean ApproxC(::UnityEngine::Color a, ::UnityEngine::Color b, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROXC_OFFSET))(a, b, delta);
		}

		static ::System::Boolean Approx(::System::Single a, ::System::Single b, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_APPROX_OFFSET))(a, b, delta);
		}

		static ::System::Int32 Clamp(::System::Int32 value, ::System::Int32 lowerBound, ::System::Int32 upperBound)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_CLAMP_OFFSET))(value, lowerBound, upperBound);
		}

		static ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ABS_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SIGN_OFFSET))(v);
		}

		static ::System::Single Sum(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SUM_OFFSET))(v);
		}

		static ::System::Void Cross(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3& res)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_CROSS_OFFSET))(a, b, res);
		}

		static ::System::Void Subtract(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3& res)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_SUBTRACT_OFFSET))(a, b, res);
		}

		static ::System::Boolean IsNumber(::System::Single value)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_OFFSET))(value);
		}

		static ::System::Boolean IsNumber_1(::UnityEngine::Vector2 value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_1_OFFSET))(value);
		}

		static ::System::Boolean IsNumber_2(::UnityEngine::Vector3 value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_2_OFFSET))(value);
		}

		static ::System::Boolean IsNumber_3(::UnityEngine::Vector4 value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_ISNUMBER_3_OFFSET))(value);
		}

		static ::System::Single MakeNonZero(::System::Single value, ::System::Single min)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATH_MAKENONZERO_OFFSET))(value, min);
		}
	};
}
