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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A27F9F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27FA30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A27FBE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A27FC00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1A27FBA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1A27FBC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A27FB80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1A27FB70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A27FB60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A27FB50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A27FB40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A27FA40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A27FA70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1A27FA90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A27FAC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET UNITYSDK_OFFSET(0x1A27FAE0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection___c_TypeDefinitionIndex = 40049;

	class ElementSelection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27260);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27268);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27270);
		}
		static ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27278);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27280);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27288);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27290);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x27298);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272A0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272A8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272B0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272B8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272C0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272C8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)Il2CppClass::FromTypeDefinitionIndex(ElementSelection___c_TypeDefinitionIndex)->GetStaticField(0x272D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET))(this, x);
		}

		::System::Boolean _GetPerimeterEdges_b__5_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetPerimeterEdges_b__5_2(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET))(this, x);
		}

		::System::Boolean _GetPerimeterFaces_b__7_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Face* _GetPerimeterFaces_b__7_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* x)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET))(this, x);
		}

		::System::Int32 _FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> x, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET))(this, x, y);
		}
	};
}
