#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A255190)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A255250)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A2551E0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2551D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandles___c_TypeDefinitionIndex = 39931;

	class MeshHandles___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshHandles___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshHandles___c**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x25DD0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x25DD8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x25DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMesh_b__9_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMeshFromFaces_b__10_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET))(this, x);
		}
	};
}
