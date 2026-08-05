#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ArrayPool_1_TypeDefinitionIndex = 5977;

	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<T>*>*>** StaticGet_s_Pool()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<T>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
