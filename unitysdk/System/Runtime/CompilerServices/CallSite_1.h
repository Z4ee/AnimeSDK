#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/CallSite.h"

namespace System::Runtime::CompilerServices { template <typename T> class CallSite_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSite_1_TypeDefinitionIndex = 4953;

	template <typename T>
	class CallSite_1 : public ::System::Runtime::CompilerServices::CallSite
	{
	public:
		::Il2CppArray<T>* Rules; // 0x0
		static T* StaticGet_s_cachedUpdate()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(CallSite_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static T* StaticGet_s_cachedNoMatch()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(CallSite_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
