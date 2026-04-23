#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TapTap::Sdk { class UIElement; }
namespace UnityEngine { class GameObject; }

#define TAPTAP_SDK_UIMANAGER_CREATECONTAINER_OFFSET UNITYSDK_OFFSET(0x1A1C4F60)
#define TAPTAP_SDK_UIMANAGER_DESTORYCONTAINER_OFFSET UNITYSDK_OFFSET(0x1A1C5150)
#define TAPTAP_SDK_UIMANAGER_POPUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1A1C4B90)
#define TAPTAP_SDK_UIMANAGER_POP_OFFSET UNITYSDK_OFFSET(0x1A1BF2C0)
#define TAPTAP_SDK_UIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C52E0)
#define TAPTAP_SDK_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5290)
#define TAPTAP_SDK_UIMANAGER__DESTORYCONTAINER_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A1C5320)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 6446;

	class UIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_RESULT_BACK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::System::Int32* StaticGet_RESULT_CLOSE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x414);
		}
		static ::System::Int32* StaticGet_RESULT_FAILED()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x418);
		}
		static ::System::Int32* StaticGet_RESULT_SUCCESS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x41C);
		}
		::UnityEngine::GameObject* containerObj; // 0x18
		::System::Collections::Generic::List_1<::TapTap::Sdk::UIElement*>* uiElements; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_POP_OFFSET))(this);
		}

		::System::Void PopUIElement(::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_POPUIELEMENT_OFFSET))(this, targetName);
		}

		::System::Void CreateContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_CREATECONTAINER_OFFSET))(this);
		}

		::System::Void DestoryContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_DESTORYCONTAINER_OFFSET))(this);
		}

		::System::Void _DestoryContainer_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER__DESTORYCONTAINER_B__11_0_OFFSET))(this);
		}
	};
}
