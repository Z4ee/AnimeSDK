#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET UNITYSDK_OFFSET(0xCFC7AD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET UNITYSDK_OFFSET(0xCFC7B10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET UNITYSDK_OFFSET(0xCFC7B30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET UNITYSDK_OFFSET(0xCFC7B50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET UNITYSDK_OFFSET(0xCFC7AF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFC7A80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC7AC0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c_TypeDefinitionIndex = 43286;

	class Bevel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>** StaticGet___9__0_6()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B40);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B48);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::Bevel___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::Bevel___c**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B50);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B58);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B60);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(Bevel___c_TypeDefinitionIndex)->GetStaticField(0x63B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _BevelEdges_b__0_6(::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET))(this, a1);
		}
	};
}
