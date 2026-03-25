#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Triangle.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18859FC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1885A000)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1885A010)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1885A020)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__REMOVEUNUSEDVERTICES_B__7_0_OFFSET UNITYSDK_OFFSET(0x1885A030)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation___c_TypeDefinitionIndex = 34245;

	class MeshValidation___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshValidation___c_TypeDefinitionIndex)->GetStaticField(0x28E20);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshValidation___c_TypeDefinitionIndex)->GetStaticField(0x28E28);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c**)Il2CppClass::FromTypeDefinitionIndex(MeshValidation___c_TypeDefinitionIndex)->GetStaticField(0x28E30);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshValidation___c_TypeDefinitionIndex)->GetStaticField(0x28E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_B__4_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_B__4_1_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__REMOVEUNUSEDVERTICES_B__7_0_OFFSET))(this, x);
		}
	};
}
