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

#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXPOSITION_OFFSET UNITYSDK_OFFSET(0x177AC100)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXVALUES_OFFSET UNITYSDK_OFFSET(0x177AC6C0)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x177ABC50)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_1_OFFSET UNITYSDK_OFFSET(0x177AB130)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1778C540)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_1_OFFSET UNITYSDK_OFFSET(0x177ABF60)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_2_OFFSET UNITYSDK_OFFSET(0x177AC030)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_OFFSET UNITYSDK_OFFSET(0x177ABB80)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_VERTICESINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x177AAF20)
#define UNITYENGINE_PROBUILDER_VERTEXPOSITIONING__CCTOR_OFFSET UNITYSDK_OFFSET(0x177ACAD0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int VertexPositioning_TypeDefinitionIndex = 41650;

	class VertexPositioning : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_CoincidentVertices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VertexPositioning_TypeDefinitionIndex)->GetStaticField(0x55F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* VerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_VERTICESINWORLDSPACE_OFFSET))(a1);
		}

		static ::System::Void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TranslateVerticesInWorldSpace_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINWORLDSPACE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TranslateVertices_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TranslateVertices_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICES_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TranslateVerticesInternal(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_TRANSLATEVERTICESINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSharedVertexPosition(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSharedVertexValues(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::Vertex* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEXPOSITIONING_SETSHAREDVERTEXVALUES_OFFSET))(a1, a2, a3);
		}
	};
}
