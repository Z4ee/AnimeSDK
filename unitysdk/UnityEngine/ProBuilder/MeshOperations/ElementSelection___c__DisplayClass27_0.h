#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27F8D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__FINDHOLES_B__1_OFFSET UNITYSDK_OFFSET(0x1A27FC40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__FINDHOLES_B__2_OFFSET UNITYSDK_OFFSET(0x1A27FC70)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection___c__DisplayClass27_0_TypeDefinitionIndex = 40051;

	class ElementSelection___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* common; // 0x10
		::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Boolean>* __9__1; // 0x18
		::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Boolean>* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindHoles_b__1(::UnityEngine::ProBuilder::WingedEdge* w)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__FINDHOLES_B__1_OFFSET))(this, w);
		}

		::System::Boolean _FindHoles_b__2(::UnityEngine::ProBuilder::WingedEdge* w)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__DISPLAYCLASS27_0__FINDHOLES_B__2_OFFSET))(this, w);
		}
	};
}
