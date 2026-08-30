#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C010)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C050)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET UNITYSDK_OFFSET(0x1EB5C1F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET UNITYSDK_OFFSET(0x1EB5C210)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1EB5C1B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1EB5C1D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET UNITYSDK_OFFSET(0x1EB5C190)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1EB5C180)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EB5C170)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1EB5C160)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1EB5C150)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EB5C060)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1EB5C090)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1EB5C0B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EB5C0F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET UNITYSDK_OFFSET(0x1EB5C110)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection___c_TypeDefinitionIndex = 43302;

	class ElementSelection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D710);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D718);
		}
		static ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D720);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D728);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D730);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D738);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D740);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D748);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D750);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D758);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D760);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D768);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D770);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D778);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x5D780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetPerimeterEdges_b__5_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetPerimeterEdges_b__5_2(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetPerimeterFaces_b__7_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _GetPerimeterFaces_b__7_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET))(this, a1);
		}

		::System::Int32 _FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> a1, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET))(this, a1, a2);
		}
	};
}
