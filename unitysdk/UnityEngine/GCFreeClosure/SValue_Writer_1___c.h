#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"

namespace UnityEngine::GCFreeClosure { template <typename T> class SValue_Writer_1___c; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_Writer_1___c_TypeDefinitionIndex = 4462;

	template <typename T>
	class SValue_Writer_1___c : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::SValue_Writer_1___c<T>** StaticGet___9()
		{
			return (::UnityEngine::GCFreeClosure::SValue_Writer_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(SValue_Writer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
