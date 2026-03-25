#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18854DE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__DISPLAYCLASS0_0__MERGEPAIRS_B__0_OFFSET UNITYSDK_OFFSET(0x18855B00)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MergeElements___c__DisplayClass0_0_TypeDefinitionIndex = 34239;

	class MergeElements___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* remove; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergePairs_b__0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS___C__DISPLAYCLASS0_0__MERGEPAIRS_B__0_OFFSET))(this, x);
		}
	};
}
