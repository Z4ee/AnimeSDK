#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder { class WingedEdge; }
namespace UnityEngine::ProBuilder::MeshOperations { class ConnectFaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFD4E80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_0_OFFSET UNITYSDK_OFFSET(0xCFD4FE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_1_OFFSET UNITYSDK_OFFSET(0xCFD5030)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_2_OFFSET UNITYSDK_OFFSET(0xCFD5090)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_0_OFFSET UNITYSDK_OFFSET(0xCFD50D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_1_OFFSET UNITYSDK_OFFSET(0xCFD5120)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_2_OFFSET UNITYSDK_OFFSET(0xCFD5180)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__0_0_OFFSET UNITYSDK_OFFSET(0xCFD4ED0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_1_OFFSET UNITYSDK_OFFSET(0xCFD4F00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_2_OFFSET UNITYSDK_OFFSET(0xCFD4F20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_0_OFFSET UNITYSDK_OFFSET(0xCFD4F40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_1_OFFSET UNITYSDK_OFFSET(0xCFD4F60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_2_OFFSET UNITYSDK_OFFSET(0xCFD4F80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_4_OFFSET UNITYSDK_OFFSET(0xCFD4FD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD4EC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__INSERTVERTICES_B__6_0_OFFSET UNITYSDK_OFFSET(0xCFD50B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements___c_TypeDefinitionIndex = 43294;

	class ConnectElements___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C00);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C08);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C10);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C18);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C20);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C28);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C30);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C38);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__3_4()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C40);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C48);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C50);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C58);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C60);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C68);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x63C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__0_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _Connect_b__2_1(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__2_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_2_OFFSET))(this, a1);
		}

		::System::Int32 _Connect_b__3_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__3_1(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__3_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_2_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _Connect_b__3_4(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_4_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectEdgesInFace_b__5_0(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectEdgesInFace_b__5_1(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _ConnectEdgesInFace_b__5_2(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_2_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _InsertVertices_b__6_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__INSERTVERTICES_B__6_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectIndexesPerFace_b__8_0(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectIndexesPerFace_b__8_1(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectIndexesPerFace_b__8_2(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_2_OFFSET))(this, a1);
		}
	};
}
