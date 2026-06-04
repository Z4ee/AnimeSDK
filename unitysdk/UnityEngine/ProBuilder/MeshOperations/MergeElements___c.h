#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2DA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2DE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__MERGE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B0F2DF0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MergeElements___c_TypeDefinitionIndex = 40884;

	class MergeElements___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MergeElements___c**)Il2CppClass::FromTypeDefinitionIndex(MergeElements___c_TypeDefinitionIndex)->GetStaticField(0x53D30);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MergeElements___c_TypeDefinitionIndex)->GetStaticField(0x53D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _Merge_b__1_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__MERGE_B__1_0_OFFSET))(this, a1);
		}
	};
}
