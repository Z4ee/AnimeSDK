#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1BA4B7B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BA4B870)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA4B920)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementListPool_TypeDefinitionIndex = 6160;

	class VisualElementListPool : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>** StaticGet_pool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElementListPool_TypeDefinitionIndex)->GetStaticField(0x42620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Get(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET))(a1);
		}

		static ::System::Void Release(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET))(a1);
		}
	};
}
