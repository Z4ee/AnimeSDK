#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_Writer_1_TypeDefinitionIndex = 4461;

	template <typename T>
	class SValue_Writer_1 : public ::System::Object
	{
	public:
		static ::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>** StaticGet_InternalInvoke()
		{
			return (::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>**)Il2CppClass::FromTypeDefinitionIndex(SValue_Writer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>** StaticGet_Default()
		{
			return (::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>**)Il2CppClass::FromTypeDefinitionIndex(SValue_Writer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
