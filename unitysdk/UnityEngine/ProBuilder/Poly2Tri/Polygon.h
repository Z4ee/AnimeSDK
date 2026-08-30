#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class PolygonPoint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDHOLE_OFFSET UNITYSDK_OFFSET(0x1EAC9C10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1EAC9DA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1EAC9D00)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1EAC9CF0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_GET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1EAC9C00)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_PREPARE_OFFSET UNITYSDK_OFFSET(0x1EAC9E20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC9B80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9460)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int Polygon_TypeDefinitionIndex = 37438;

	class Polygon : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _triangles; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* _holes; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _steinerPoints; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _points; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_GET_TRIANGULATIONMODE_OFFSET))(this);
		}

		::System::Void AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Polygon*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDHOLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDTRIANGLE_OFFSET))(this, a1);
		}

		::System::Void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_ADDTRIANGLES_OFFSET))(this, a1);
		}

		::System::Void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGON_PREPARE_OFFSET))(this, a1);
		}
	};
}
