#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class SharedVertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__BEVELEDGES_B__7_OFFSET UNITYSDK_OFFSET(0x1882FC30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__BEVELEDGES_B__8_OFFSET UNITYSDK_OFFSET(0x1882FCA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1882DB80)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c__DisplayClass0_0_TypeDefinitionIndex = 34215;

	class Bevel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* sharedIndexes; // 0x10
		::System::Func_2<::System::Int32, ::System::Int32>* __9__7; // 0x18
		::System::Func_2<::System::Int32, ::System::Int32>* __9__8; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::System::Int32>*>* ignore; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _BevelEdges_b__7(::System::Int32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__BEVELEDGES_B__7_OFFSET))(this, x);
		}

		::System::Int32 _BevelEdges_b__8(::System::Int32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__DISPLAYCLASS0_0__BEVELEDGES_B__8_OFFSET))(this, x);
		}
	};
}
