#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0A1520)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET UNITYSDK_OFFSET(0xC0A15C0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET UNITYSDK_OFFSET(0xC0A1570)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A1560)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandles___c_TypeDefinitionIndex = 41573;

	class MeshHandles___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x4F910);
		}
		static ::UnityEngine::ProBuilder::MeshHandles___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshHandles___c**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x4F918);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles___c_TypeDefinitionIndex)->GetStaticField(0x4F920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMesh_b__9_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMeshFromFaces_b__10_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET))(this, a1);
		}
	};
}
