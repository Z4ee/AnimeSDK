#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET UNITYSDK_OFFSET(0x1CD097F0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET UNITYSDK_OFFSET(0x1CD097C0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET UNITYSDK_OFFSET(0x1CD09800)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1CD09790)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_TypeDefinitionIndex = 34806;

	class CoreUnsafeUtils : public ::System::Object
	{
	public:
		static ::System::Void QuickSort(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareHashes(::System::Int32 a1, ::UnityEngine::Hash128* a2, ::System::Int32 a3, ::UnityEngine::Hash128* a4, ::System::Int32* a5, ::System::Int32* a6, ::System::Int32& a7, ::System::Int32& a8)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Hash128*, ::System::Int32, ::UnityEngine::Hash128*, ::System::Int32*, ::System::Int32*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void CombineHashes(::System::Int32 a1, ::UnityEngine::Hash128* a2, ::UnityEngine::Hash128* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Hash128*, ::UnityEngine::Hash128*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HaveDuplicates(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET))(a1);
		}
	};
}
