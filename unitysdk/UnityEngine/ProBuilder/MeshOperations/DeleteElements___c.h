#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0DC5B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DC5F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DELETEFACES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B0DC600)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int DeleteElements___c_TypeDefinitionIndex = 40872;

	class DeleteElements___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DeleteElements___c_TypeDefinitionIndex)->GetStaticField(0x536B0);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::DeleteElements___c**)Il2CppClass::FromTypeDefinitionIndex(DeleteElements___c_TypeDefinitionIndex)->GetStaticField(0x536B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _DeleteFaces_b__3_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DELETEFACES_B__3_0_OFFSET))(this, a1);
		}
	};
}
