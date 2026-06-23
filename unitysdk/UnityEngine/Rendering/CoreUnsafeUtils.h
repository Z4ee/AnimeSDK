#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET UNITYSDK_OFFSET(0x1B49E0E0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET UNITYSDK_OFFSET(0x1B49E0B0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET UNITYSDK_OFFSET(0x1B49E0F0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1B49E040)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_TypeDefinitionIndex = 18257;

	class CoreUnsafeUtils : public ::System::Object
	{
	public:
		static ::System::Void QuickSort(::Il2CppArray<::System::UInt32>* arr, ::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arr, left, right);
		}

		static ::System::Int32 CompareHashes(::System::Int32 oldHashCount, ::UnityEngine::Hash128* oldHashes, ::System::Int32 newHashCount, ::UnityEngine::Hash128* newHashes, ::System::Int32* addIndices, ::System::Int32* removeIndices, ::System::Int32& addCount, ::System::Int32& remCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Hash128*, ::System::Int32, ::UnityEngine::Hash128*, ::System::Int32*, ::System::Int32*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET))(oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
		}

		static ::System::Void CombineHashes(::System::Int32 count, ::UnityEngine::Hash128* hashes, ::UnityEngine::Hash128* outHash)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Hash128*, ::UnityEngine::Hash128*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET))(count, hashes, outHash);
		}

		static ::System::Boolean HaveDuplicates(::Il2CppArray<::System::Int32>* arr)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET))(arr);
		}
	};
}
