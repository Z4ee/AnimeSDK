#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB83790)
#define UNITYENGINE_PROBUILDER_MESHUTILITY___C__COLLAPSESHAREDVERTICES_B__10_0_OFFSET UNITYSDK_OFFSET(0x1EB837E0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB837D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshUtility___c_TypeDefinitionIndex = 43186;

	class MeshUtility___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshUtility___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshUtility___c**)Il2CppClass::FromTypeDefinitionIndex(MeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x5E770);
		}
		static ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, ::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, ::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>**)Il2CppClass::FromTypeDefinitionIndex(MeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x5E778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>* _CollapseSharedVertices_b__10_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, ::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY___C__COLLAPSESHAREDVERTICES_B__10_0_OFFSET))(this, a1);
		}
	};
}
