#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXPOSITION_OFFSET UNITYSDK_OFFSET(0x188B98D0)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXVALUES_OFFSET UNITYSDK_OFFSET(0x188B9E20)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x188B9450)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_1_OFFSET UNITYSDK_OFFSET(0x188B8960)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1889B300)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_1_OFFSET UNITYSDK_OFFSET(0x188B9730)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_2_OFFSET UNITYSDK_OFFSET(0x188B9800)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_OFFSET UNITYSDK_OFFSET(0x188B9380)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_VERTICESINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x188B8740)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING__CCTOR_OFFSET UNITYSDK_OFFSET(0x188BA1C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int VertexPositioning_TypeDefinitionIndex = 34189;

	class VertexPositioning : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_CoincidentVertices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VertexPositioning_TypeDefinitionIndex)->GetStaticField(0x2ABF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* VerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_VERTICESINWORLDSPACE_OFFSET))(mesh);
		}

		static ::System::Void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_OFFSET))(mesh, indexes, offset);
		}

		static ::System::Void TranslateVerticesInWorldSpace_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes, ::UnityEngine::Vector3 offset, ::System::Single snapValue, ::System::Boolean snapAxisOnly)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_1_OFFSET))(mesh, indexes, offset, snapValue, snapAxisOnly);
		}

		static ::System::Void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_OFFSET))(mesh, indexes, offset);
		}

		static ::System::Void TranslateVertices_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_1_OFFSET))(mesh, edges, offset);
		}

		static ::System::Void TranslateVertices_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_2_OFFSET))(mesh, faces, offset);
		}

		static ::System::Void TranslateVerticesInternal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indices, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINTERNAL_OFFSET))(mesh, indices, offset);
		}

		static ::System::Void SetSharedVertexPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 sharedVertexHandle, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXPOSITION_OFFSET))(mesh, sharedVertexHandle, position);
		}

		static ::System::Void SetSharedVertexValues(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 sharedVertexHandle, ::UnityEngine::ProBuilder::Vertex* vertex)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXVALUES_OFFSET))(mesh, sharedVertexHandle, vertex);
		}
	};
}
