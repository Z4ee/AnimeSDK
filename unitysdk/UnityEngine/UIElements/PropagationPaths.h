#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/PropagationPaths_Type.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_BUILD_OFFSET UNITYSDK_OFFSET(0x1B354650)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_COPY_OFFSET UNITYSDK_OFFSET(0x1B354BE0)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B355570)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B363570)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3633A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PropagationPaths_TypeDefinitionIndex = 6243;

	class PropagationPaths : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>**)Il2CppClass::FromTypeDefinitionIndex(PropagationPaths_TypeDefinitionIndex)->GetStaticField(0x2730);
		}
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* trickleDownPath; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* targetElements; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* bubbleUpPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::PropagationPaths* Copy(::UnityEngine::UIElements::PropagationPaths* a1)
		{
			return ((::UnityEngine::UIElements::PropagationPaths*(*)(::UnityEngine::UIElements::PropagationPaths*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_COPY_OFFSET))(a1);
		}

		static ::UnityEngine::UIElements::PropagationPaths* Build(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::PropagationPaths_Type a2)
		{
			return ((::UnityEngine::UIElements::PropagationPaths*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::PropagationPaths_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_BUILD_OFFSET))(a1, a2);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_RELEASE_OFFSET))(this);
		}
	};
}
