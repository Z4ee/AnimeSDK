#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Lazy_1___c; }

namespace System
{
	inline static constexpr unsigned int Lazy_1___c_TypeDefinitionIndex = 162;

	template <typename T>
	class Lazy_1___c : public ::System::Object
	{
	public:
		static ::System::Lazy_1___c<T>** StaticGet___9()
		{
			return (::System::Lazy_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(Lazy_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
