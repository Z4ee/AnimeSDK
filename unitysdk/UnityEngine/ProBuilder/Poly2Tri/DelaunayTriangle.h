#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A1EC270)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_EDGEINDEX_OFFSET UNITYSDK_OFFSET(0x1A1EFB10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECCW_OFFSET UNITYSDK_OFFSET(0x1A1F1880)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECW_OFFSET UNITYSDK_OFFSET(0x1A1ED240)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECCW_OFFSET UNITYSDK_OFFSET(0x1A1F1980)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECW_OFFSET UNITYSDK_OFFSET(0x1A1F1A80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GET_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x1A1F2EA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXCCWFROM_OFFSET UNITYSDK_OFFSET(0x1A1F2EC0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A1F16A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_LEGALIZE_OFFSET UNITYSDK_OFFSET(0x1A1F1B80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_1_OFFSET UNITYSDK_OFFSET(0x1A1EFC50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_OFFSET UNITYSDK_OFFSET(0x1A1EFBD0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_1_OFFSET UNITYSDK_OFFSET(0x1A1ED7B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1A1F2F60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORACROSSFROM_OFFSET UNITYSDK_OFFSET(0x1A1EC2C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCCWFROM_OFFSET UNITYSDK_OFFSET(0x1A1ECB90)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCWFROM_OFFSET UNITYSDK_OFFSET(0x1A1ECD60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_OPPOSITEPOINT_OFFSET UNITYSDK_OFFSET(0x1A1EC370)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCCWFROM_OFFSET UNITYSDK_OFFSET(0x1A1ECA90)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCWFROM_OFFSET UNITYSDK_OFFSET(0x1A1ECC60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_ROTATECW_OFFSET UNITYSDK_OFFSET(0x1A1F30E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECCW_OFFSET UNITYSDK_OFFSET(0x1A1F1F50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECW_OFFSET UNITYSDK_OFFSET(0x1A1F2050)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECCW_OFFSET UNITYSDK_OFFSET(0x1A1F1D50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECW_OFFSET UNITYSDK_OFFSET(0x1A1F1E50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SET_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x1A1F2EB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1F3190)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1ED760)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DelaunayTriangle_TypeDefinitionIndex = 35499;

	class DelaunayTriangle : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points; // 0x28
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained; // 0x40
		::System::Boolean _IsInterior_k__BackingField; // 0x43
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay; // 0x44

		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE__CTOR_OFFSET))(this, p1, p2, p3);
		}

		::System::Boolean get_IsInterior()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GET_ISINTERIOR_OFFSET))(this);
		}

		::System::Void set_IsInterior(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SET_ISINTERIOR_OFFSET))(this, value);
		}

		::System::Int32 IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXOF_OFFSET))(this, p);
		}

		::System::Int32 IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXCCWFROM_OFFSET))(this, p);
		}

		::System::Boolean Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CONTAINS_OFFSET))(this, p);
		}

		::System::Void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_OFFSET))(this, p1, p2, t);
		}

		::System::Void MarkNeighbor_1(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_1_OFFSET))(this, t);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_OPPOSITEPOINT_OFFSET))(this, t, p);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCWFROM_OFFSET))(this, point);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCCWFROM_OFFSET))(this, point);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORACROSSFROM_OFFSET))(this, point);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCCWFROM_OFFSET))(this, point);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCWFROM_OFFSET))(this, point);
		}

		::System::Void RotateCW()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_ROTATECW_OFFSET))(this);
		}

		::System::Void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_LEGALIZE_OFFSET))(this, oPoint, nPoint);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_TOSTRING_OFFSET))(this);
		}

		::System::Void MarkConstrainedEdge(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_OFFSET))(this, index);
		}

		::System::Void MarkConstrainedEdge_1(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_1_OFFSET))(this, p, q);
		}

		::System::Int32 EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_EDGEINDEX_OFFSET))(this, p1, p2);
		}

		::System::Boolean GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECCW_OFFSET))(this, p);
		}

		::System::Boolean GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECW_OFFSET))(this, p);
		}

		::System::Void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::System::Boolean ce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECCW_OFFSET))(this, p, ce);
		}

		::System::Void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::System::Boolean ce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECW_OFFSET))(this, p, ce);
		}

		::System::Boolean GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECCW_OFFSET))(this, p);
		}

		::System::Boolean GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECW_OFFSET))(this, p);
		}

		::System::Void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::System::Boolean ce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECCW_OFFSET))(this, p, ce);
		}

		::System::Void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::System::Boolean ce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECW_OFFSET))(this, p, ce);
		}
	};
}
