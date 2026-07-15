#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_GET_TRIANGULATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0xC0E6270)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_SORTANDTRIANGULATE_OFFSET UNITYSDK_OFFSET(0xC0E62F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_1_OFFSET UNITYSDK_OFFSET(0xC0A61E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_2_OFFSET UNITYSDK_OFFSET(0xC0E7A30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_OFFSET UNITYSDK_OFFSET(0xC0A6E40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_1_OFFSET UNITYSDK_OFFSET(0xC0E7BD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0xC0E6800)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Triangulation_TypeDefinitionIndex = 41713;

	class Triangulation : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext** StaticGet_s_TriangulationContext()
		{
			return (::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext**)Il2CppClass::FromTypeDefinitionIndex(Triangulation_TypeDefinitionIndex)->GetStaticField(0x53E60);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_GET_TRIANGULATIONCONTEXT_OFFSET))();
		}

		static ::System::Boolean SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_SORTANDTRIANGULATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TriangulateVertices_1(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TriangulateVertices_2(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATEVERTICES_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Triangulate_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION_TRIANGULATE_1_OFFSET))(a1, a2, a3);
		}
	};
}
