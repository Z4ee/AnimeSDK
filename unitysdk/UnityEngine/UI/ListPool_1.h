#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ListPool_1_TypeDefinitionIndex = 6037;

	template <typename T>
	class ListPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_s_ListPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
