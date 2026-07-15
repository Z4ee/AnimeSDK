#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0BD520)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0BD560)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__SPLITBYMAXVERTEXCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC0BD570)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int CombineMeshes___c_TypeDefinitionIndex = 41680;

	class CombineMeshes___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c**)Il2CppClass::FromTypeDefinitionIndex(CombineMeshes___c_TypeDefinitionIndex)->GetStaticField(0x4FDC0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CombineMeshes___c_TypeDefinitionIndex)->GetStaticField(0x4FDC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__SPLITBYMAXVERTEXCOUNT_B__5_0_OFFSET))(this, a1);
		}
	};
}
