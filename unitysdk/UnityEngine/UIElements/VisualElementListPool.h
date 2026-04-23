#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1A520170)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A520230)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5202E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementListPool_TypeDefinitionIndex = 5878;

	class VisualElementListPool : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>** StaticGet_pool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElementListPool_TypeDefinitionIndex)->GetStaticField(0x1DAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Get(::System::Int32 initialCapacity)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET))(initialCapacity);
		}

		static ::System::Void Release(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET))(elements);
		}
	};
}
