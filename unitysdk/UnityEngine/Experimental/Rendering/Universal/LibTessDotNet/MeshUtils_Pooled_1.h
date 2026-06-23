#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Pooled_1_TypeDefinitionIndex = 26672;

	template <typename T>
	class MeshUtils_Pooled_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<T>** StaticGet__stack()
		{
			return (::System::Collections::Generic::Stack_1<T>**)Il2CppClass::FromTypeDefinitionIndex(MeshUtils_Pooled_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
