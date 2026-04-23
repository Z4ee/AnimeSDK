#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A269D80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A269DC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET UNITYSDK_OFFSET(0x1A269DE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET UNITYSDK_OFFSET(0x1A269E00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET UNITYSDK_OFFSET(0x1A269DA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A269D30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A269D70)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c_TypeDefinitionIndex = 40033;

	class Bevel___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::Bevel___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::Bevel___c**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26660);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26668);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26670);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26678);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>** StaticGet___9__0_6()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26680);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x26688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET))(this, x);
		}

		::System::Int32 _BevelEdges_b__0_6(::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*> x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET))(this, x);
		}
	};
}
