#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRegistry_2_TypeDefinitionIndex = 18992;

	template <typename TRegistry, typename TModifier>
	class GraphicRegistry_2 : public ::System::Object
	{
	public:
		static TRegistry* StaticGet_s_Instance()
		{
			return (TRegistry*)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Collections::IndexedSet_1<TModifier>*>* m_Modifiers; // 0x0
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::Collections::IndexedSet_1<TModifier>*>** StaticGet_s_IndexedSetPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::Collections::IndexedSet_1<TModifier>*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<TModifier>** StaticGet_s_EmptyList()
		{
			return (::System::Collections::Generic::List_1<TModifier>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
