#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { template <typename T> class TMP_ListPool_1___c; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_ListPool_1___c_TypeDefinitionIndex = 41808;

	template <typename T>
	class TMP_ListPool_1___c : public ::System::Object
	{
	public:
		static ::TMPro::TMP_ListPool_1___c<T>** StaticGet___9()
		{
			return (::TMPro::TMP_ListPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ListPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
