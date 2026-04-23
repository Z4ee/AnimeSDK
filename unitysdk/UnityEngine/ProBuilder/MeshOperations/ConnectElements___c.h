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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2758D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A275A30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A275A80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_2_OFFSET UNITYSDK_OFFSET(0x1A275AD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A275B10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_1_OFFSET UNITYSDK_OFFSET(0x1A275B60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_2_OFFSET UNITYSDK_OFFSET(0x1A275BB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A275920)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A275950)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_2_OFFSET UNITYSDK_OFFSET(0x1A275970)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A275990)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A2759B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_2_OFFSET UNITYSDK_OFFSET(0x1A2759D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_4_OFFSET UNITYSDK_OFFSET(0x1A275A20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A275910)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__INSERTVERTICES_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A275AF0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements___c_TypeDefinitionIndex = 40041;

	class ConnectElements___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BD0);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BD8);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BE0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BE8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BF0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26BF8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C00);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__3_4()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C08);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C10);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C18);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C20);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C28);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C30);
		}
		static ::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C38);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConnectElements___c_TypeDefinitionIndex)->GetStaticField(0x26C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__0_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__0_0_OFFSET))(this, x);
		}

		::System::Int32 _Connect_b__2_1(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__2_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__2_2_OFFSET))(this, x);
		}

		::System::Int32 _Connect_b__3_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__3_1(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_1_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__3_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_2_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _Connect_b__3_4(::UnityEngine::ProBuilder::EdgeLookup x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECT_B__3_4_OFFSET))(this, x);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectEdgesInFace_b__5_0(::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectEdgesInFace_b__5_1(::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _ConnectEdgesInFace_b__5_2(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTEDGESINFACE_B__5_2_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _InsertVertices_b__6_0(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__INSERTVERTICES_B__6_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectIndexesPerFace_b__8_0(::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectIndexesPerFace_b__8_1(::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_1_OFFSET))(this, x);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _ConnectIndexesPerFace_b__8_2(::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__CONNECTINDEXESPERFACE_B__8_2_OFFSET))(this, x);
		}
	};
}
