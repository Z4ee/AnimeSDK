#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_GET_TRIANGULATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A297450)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_SORTANDTRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1A2974D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1A259AC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_2_OFFSET UNITYSDK_OFFSET(0x1A298590)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_OFFSET UNITYSDK_OFFSET(0x1A25A6C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_1_OFFSET UNITYSDK_OFFSET(0x1A2986A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x1A297850)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Triangulation_TypeDefinitionIndex = 40071;

	class Triangulation : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext** StaticGet_s_TriangulationContext()
		{
			return (::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext**)Il2CppClass::FromTypeDefinitionIndex(Triangulation_TypeDefinitionIndex)->GetStaticField(0x28470);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_GET_TRIANGULATIONCONTEXT_OFFSET))();
		}

		static ::System::Boolean SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::List_1<::System::Int32>*& indexes, ::System::Boolean convex)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_SORTANDTRIANGULATE_OFFSET))(points, indexes, convex);
		}

		static ::System::Boolean TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::System::Int32>*& triangles, ::System::Boolean unordered, ::System::Boolean convex)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_OFFSET))(vertices, triangles, unordered, convex);
		}

		static ::System::Boolean TriangulateVertices_1(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<::System::Int32>*& triangles, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* holes)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_1_OFFSET))(vertices, triangles, holes);
		}

		static ::System::Boolean TriangulateVertices_2(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<::System::Int32>*& triangles, ::System::Boolean unordered, ::System::Boolean convex)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_2_OFFSET))(vertices, triangles, unordered, convex);
		}

		static ::System::Boolean Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::List_1<::System::Int32>*& indexes, ::System::Boolean convex)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_OFFSET))(points, indexes, convex);
		}

		static ::System::Boolean Triangulate_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>* holes, ::System::Collections::Generic::List_1<::System::Int32>*& indexes)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_1_OFFSET))(points, holes, indexes);
		}
	};
}
