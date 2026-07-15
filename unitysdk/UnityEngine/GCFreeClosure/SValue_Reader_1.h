#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"

namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2> class FuncByRef_2; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_Reader_1_TypeDefinitionIndex = 4459;

	template <typename T>
	class SValue_Reader_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::FuncByRef_2<::UnityEngine::GCFreeClosure::SValue, T>** StaticGet_InternalInvoke()
		{
			return (::UnityEngine::GCFreeClosure::FuncByRef_2<::UnityEngine::GCFreeClosure::SValue, T>**)Il2CppClass::FromTypeDefinitionIndex(SValue_Reader_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::GCFreeClosure::FuncByRef_2<::UnityEngine::GCFreeClosure::SValue, T>** StaticGet_Default()
		{
			return (::UnityEngine::GCFreeClosure::FuncByRef_2<::UnityEngine::GCFreeClosure::SValue, T>**)Il2CppClass::FromTypeDefinitionIndex(SValue_Reader_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
