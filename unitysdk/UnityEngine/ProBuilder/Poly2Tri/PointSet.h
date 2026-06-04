#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B0584F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1B058410)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1B058360)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B058380)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B058400)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B0588A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1B058370)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B058390)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0583A0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PointSet_TypeDefinitionIndex = 35812;

	class PointSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _Triangles_k__BackingField; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _Points_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_Points(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_POINTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_Triangles(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_TRIANGLES_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGULATIONMODE_OFFSET))(this);
		}

		::System::Void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLE_OFFSET))(this, a1);
		}

		::System::Void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLES_OFFSET))(this, a1);
		}

		::System::Void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_PREPARE_OFFSET))(this, a1);
		}
	};
}
